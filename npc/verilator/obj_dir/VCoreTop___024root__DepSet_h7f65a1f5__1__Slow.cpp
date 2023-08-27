// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop__Syms.h"
#include "VCoreTop___024root.h"

extern const VlWide<16>/*511:0*/ VCoreTop__ConstPool__CONST_h93e1b771_0;
void VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void VCoreTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
extern const VlUnpacked<CData/*0:0*/, 64> VCoreTop__ConstPool__TABLE_h1d315e1c_0;
extern const VlUnpacked<CData/*1:0*/, 64> VCoreTop__ConstPool__TABLE_h2941df74_0;

VL_ATTR_COLD void VCoreTop___024root___stl_sequent__TOP__2(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___stl_sequent__TOP__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hcbd4ee6b__0;
    VlWide<3>/*95:0*/ __Vtemp_h8c67a188__0;
    VlWide<3>/*95:0*/ __Vtemp_h137bc947__0;
    VlWide<3>/*95:0*/ __Vtemp_hd100a9b0__0;
    VlWide<3>/*95:0*/ __Vtemp_h3066ecab__0;
    VlWide<3>/*95:0*/ __Vtemp_ha95528e2__0;
    VlWide<3>/*95:0*/ __Vtemp_hfee0ffb3__0;
    VlWide<3>/*95:0*/ __Vtemp_h684ad871__0;
    VlWide<3>/*95:0*/ __Vtemp_hc0aac033__0;
    VlWide<3>/*95:0*/ __Vtemp_h326ada0a__0;
    VlWide<3>/*95:0*/ __Vtemp_h072e4231__0;
    VlWide<3>/*95:0*/ __Vtemp_h9ad7d84a__0;
    VlWide<3>/*95:0*/ __Vtemp_h40410945__0;
    VlWide<3>/*95:0*/ __Vtemp_hf3123db6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6df03d02__0;
    VlWide<3>/*95:0*/ __Vtemp_h59e7fabb__0;
    VlWide<3>/*95:0*/ __Vtemp_hb1d93d6e__0;
    VlWide<3>/*95:0*/ __Vtemp_h44521aa3__0;
    VlWide<3>/*95:0*/ __Vtemp_h4f206f83__0;
    VlWide<3>/*95:0*/ __Vtemp_h12148755__0;
    VlWide<3>/*95:0*/ __Vtemp_hee48a812__0;
    VlWide<3>/*95:0*/ __Vtemp_hb87f7f5c__0;
    VlWide<3>/*95:0*/ __Vtemp_h65678947__0;
    VlWide<3>/*95:0*/ __Vtemp_h9dd82017__0;
    VlWide<3>/*95:0*/ __Vtemp_h3c24c42c__0;
    VlWide<3>/*95:0*/ __Vtemp_h41a4e9cd__0;
    VlWide<3>/*95:0*/ __Vtemp_h35afc173__0;
    VlWide<3>/*95:0*/ __Vtemp_heffaee96__0;
    VlWide<3>/*95:0*/ __Vtemp_h15ec8f64__0;
    VlWide<3>/*95:0*/ __Vtemp_h01949435__0;
    VlWide<3>/*95:0*/ __Vtemp_h0cd3edde__0;
    VlWide<3>/*95:0*/ __Vtemp_h1e73f008__0;
    VlWide<3>/*95:0*/ __Vtemp_hbb90044f__0;
    VlWide<3>/*95:0*/ __Vtemp_hde056383__0;
    VlWide<3>/*95:0*/ __Vtemp_h7b2e25f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h6193e05f__0;
    VlWide<3>/*95:0*/ __Vtemp_h715536e5__0;
    VlWide<3>/*95:0*/ __Vtemp_ha9306191__0;
    VlWide<3>/*95:0*/ __Vtemp_hcb654972__0;
    VlWide<3>/*95:0*/ __Vtemp_ha413da4d__0;
    VlWide<3>/*95:0*/ __Vtemp_h05532363__0;
    VlWide<3>/*95:0*/ __Vtemp_hefc2190a__0;
    VlWide<3>/*95:0*/ __Vtemp_h52342df2__0;
    VlWide<3>/*95:0*/ __Vtemp_hae063db6__0;
    VlWide<3>/*95:0*/ __Vtemp_hff78d9c6__0;
    VlWide<3>/*95:0*/ __Vtemp_h67e1c651__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f7e9646__0;
    VlWide<3>/*95:0*/ __Vtemp_h799193a3__0;
    VlWide<3>/*95:0*/ __Vtemp_h0d24146c__0;
    VlWide<3>/*95:0*/ __Vtemp_hc8d28a4f__0;
    VlWide<3>/*95:0*/ __Vtemp_hd2a48918__0;
    VlWide<3>/*95:0*/ __Vtemp_h7d248478__0;
    VlWide<3>/*95:0*/ __Vtemp_h0adf81c0__0;
    VlWide<3>/*95:0*/ __Vtemp_hc7a681f9__0;
    VlWide<3>/*95:0*/ __Vtemp_h7df51c5d__0;
    VlWide<3>/*95:0*/ __Vtemp_h6f2d616d__0;
    VlWide<3>/*95:0*/ __Vtemp_hb554a08c__0;
    VlWide<3>/*95:0*/ __Vtemp_hcdc9e97a__0;
    VlWide<3>/*95:0*/ __Vtemp_h4a4ae99f__0;
    VlWide<3>/*95:0*/ __Vtemp_h1245efbb__0;
    VlWide<3>/*95:0*/ __Vtemp_h800a8223__0;
    VlWide<3>/*95:0*/ __Vtemp_h674e0390__0;
    VlWide<3>/*95:0*/ __Vtemp_h052dcc23__0;
    VlWide<3>/*95:0*/ __Vtemp_h0fbea1b2__0;
    VlWide<4>/*127:0*/ __Vtemp_h0533a6ed__0;
    VlWide<4>/*127:0*/ __Vtemp_h97f32683__0;
    VlWide<3>/*95:0*/ __Vtemp_h8004274a__0;
    VlWide<3>/*95:0*/ __Vtemp_h29cbf8c2__0;
    VlWide<4>/*127:0*/ __Vtemp_hb23900ce__0;
    VlWide<5>/*159:0*/ __Vtemp_hef796a47__0;
    VlWide<4>/*127:0*/ __Vtemp_h3a8f7b0f__0;
    VlWide<5>/*159:0*/ __Vtemp_h79a93755__0;
    VlWide<5>/*159:0*/ __Vtemp_hd2c00ac8__0;
    VlWide<3>/*95:0*/ __Vtemp_hfc1d42bd__0;
    VlWide<3>/*95:0*/ __Vtemp_had48ed99__0;
    VlWide<6>/*191:0*/ __Vtemp_hc8cf7fd9__0;
    VlWide<6>/*191:0*/ __Vtemp_hdf433f48__0;
    VlWide<16>/*511:0*/ __Vtemp_h902130f5__0;
    // Body
    if ((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                       >> 0x3fU)))) {
        if ((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                           >> 0x3fU)))) {
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32_io_p[0U] 
                = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32_io_p[1U] 
                = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                           >> 0x20U));
        } else {
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32_io_p[0U] = 0U;
            vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32_io_p[1U] = 0U;
        }
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32_io_p[2U] = 0U;
    }
    if ((1U == (3U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[2U] = 0U;
    } else if ((2U == (3U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[0U] 
            = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
               << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[1U] 
            = (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                >> 0x1fU) | ((~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                         >> 0x20U))) 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[2U] 
            = (6U | ((~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                 >> 0x20U))) >> 0x1fU));
    } else if ((3U == (3U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[0U] 
            = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[1U] 
            = (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                          >> 0x20U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[2U] = 3U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[2U] = 0U;
    }
    if ((0U == (3U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_carry 
            = ((1U == (3U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1)))
                ? 0U : ((2U == (3U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1)))
                         ? 2U : ((3U == (3U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1)))
                                  ? 1U : 0U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_18[2U]);
    }
    __Vtemp_hcbd4ee6b__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 1U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 1U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 1U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 1U))))) {
        __Vtemp_h8c67a188__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h8c67a188__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 1U))))) {
        __Vtemp_h8c67a188__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h8c67a188__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 1U))))) {
        __Vtemp_h8c67a188__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h8c67a188__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 1U))))) {
        __Vtemp_h8c67a188__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h8c67a188__0[2U] = 3U;
    } else {
        __Vtemp_h8c67a188__0[0U] = 0U;
        __Vtemp_h8c67a188__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 1U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 1U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[0U] 
            = __Vtemp_h8c67a188__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 1U)))) ? (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                                   >> 0x1fU) 
                                                  | ((IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U)) 
                                                     << 1U))
                : __Vtemp_hcbd4ee6b__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[2U] 
            = __Vtemp_h8c67a188__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 1U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 1U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 1U)))) ? 0U
                    : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                             >> 1U))))
                        ? 0U : ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 1U))))
                                 ? 2U : ((5U == (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                            >> 1U))))
                                          ? 1U : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 1U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h137bc947__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 3U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 3U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 3U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 3U))))) {
        __Vtemp_hd100a9b0__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_hd100a9b0__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 3U))))) {
        __Vtemp_hd100a9b0__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_hd100a9b0__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 3U))))) {
        __Vtemp_hd100a9b0__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hd100a9b0__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 3U))))) {
        __Vtemp_hd100a9b0__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hd100a9b0__0[2U] = 3U;
    } else {
        __Vtemp_hd100a9b0__0[0U] = 0U;
        __Vtemp_hd100a9b0__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 3U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 3U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[0U] 
            = __Vtemp_hd100a9b0__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 3U)))) ? (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                                   >> 0x1fU) 
                                                  | ((IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U)) 
                                                     << 1U))
                : __Vtemp_h137bc947__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[2U] 
            = __Vtemp_hd100a9b0__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 3U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 3U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 3U)))) ? 0U
                    : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                             >> 3U))))
                        ? 0U : ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 3U))))
                                 ? 2U : ((5U == (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                            >> 3U))))
                                          ? 1U : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 3U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h3066ecab__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 5U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 5U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 5U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 5U))))) {
        __Vtemp_ha95528e2__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_ha95528e2__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 5U))))) {
        __Vtemp_ha95528e2__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_ha95528e2__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 5U))))) {
        __Vtemp_ha95528e2__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_ha95528e2__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 5U))))) {
        __Vtemp_ha95528e2__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_ha95528e2__0[2U] = 3U;
    } else {
        __Vtemp_ha95528e2__0[0U] = 0U;
        __Vtemp_ha95528e2__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 5U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 5U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[0U] 
            = __Vtemp_ha95528e2__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 5U)))) ? (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                                   >> 0x1fU) 
                                                  | ((IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U)) 
                                                     << 1U))
                : __Vtemp_h3066ecab__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[2U] 
            = __Vtemp_ha95528e2__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 5U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 5U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 5U)))) ? 0U
                    : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                             >> 5U))))
                        ? 0U : ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 5U))))
                                 ? 2U : ((5U == (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                            >> 5U))))
                                          ? 1U : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 5U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_19[2U]);
    }
    __Vtemp_hfee0ffb3__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 7U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 7U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 7U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 7U))))) {
        __Vtemp_h684ad871__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h684ad871__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 7U))))) {
        __Vtemp_h684ad871__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h684ad871__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 7U))))) {
        __Vtemp_h684ad871__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h684ad871__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 7U))))) {
        __Vtemp_h684ad871__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h684ad871__0[2U] = 3U;
    } else {
        __Vtemp_h684ad871__0[0U] = 0U;
        __Vtemp_h684ad871__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 7U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 7U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[0U] 
            = __Vtemp_h684ad871__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 7U)))) ? (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                                   >> 0x1fU) 
                                                  | ((IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U)) 
                                                     << 1U))
                : __Vtemp_hfee0ffb3__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[2U] 
            = __Vtemp_h684ad871__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 7U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 7U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 7U)))) ? 0U
                    : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                             >> 7U))))
                        ? 0U : ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 7U))))
                                 ? 2U : ((5U == (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                            >> 7U))))
                                          ? 1U : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 7U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_19[2U]);
    }
    __Vtemp_hc0aac033__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 9U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 9U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 9U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 9U))))) {
        __Vtemp_h326ada0a__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h326ada0a__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 9U))))) {
        __Vtemp_h326ada0a__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h326ada0a__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 9U))))) {
        __Vtemp_h326ada0a__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h326ada0a__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 9U))))) {
        __Vtemp_h326ada0a__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h326ada0a__0[2U] = 3U;
    } else {
        __Vtemp_h326ada0a__0[0U] = 0U;
        __Vtemp_h326ada0a__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 9U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 9U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[0U] 
            = __Vtemp_h326ada0a__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 9U)))) ? (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                                   >> 0x1fU) 
                                                  | ((IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U)) 
                                                     << 1U))
                : __Vtemp_hc0aac033__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[2U] 
            = __Vtemp_h326ada0a__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 9U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 9U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 9U)))) ? 0U
                    : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                             >> 9U))))
                        ? 0U : ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 9U))))
                                 ? 2U : ((5U == (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                            >> 9U))))
                                          ? 1U : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 9U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h072e4231__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0xbU))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0xbU))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0xbU))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0xbU))))) {
        __Vtemp_h9ad7d84a__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h9ad7d84a__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xbU))))) {
        __Vtemp_h9ad7d84a__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h9ad7d84a__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xbU))))) {
        __Vtemp_h9ad7d84a__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h9ad7d84a__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xbU))))) {
        __Vtemp_h9ad7d84a__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h9ad7d84a__0[2U] = 3U;
    } else {
        __Vtemp_h9ad7d84a__0[0U] = 0U;
        __Vtemp_h9ad7d84a__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0xbU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xbU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[0U] 
            = __Vtemp_h9ad7d84a__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xbU)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h072e4231__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[2U] 
            = __Vtemp_h9ad7d84a__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0xbU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xbU)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0xbU))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0xbU))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0xbU))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0xbU))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0xbU))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h40410945__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0xdU))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0xdU))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0xdU))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0xdU))))) {
        __Vtemp_hf3123db6__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_hf3123db6__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xdU))))) {
        __Vtemp_hf3123db6__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_hf3123db6__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xdU))))) {
        __Vtemp_hf3123db6__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hf3123db6__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xdU))))) {
        __Vtemp_hf3123db6__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hf3123db6__0[2U] = 3U;
    } else {
        __Vtemp_hf3123db6__0[0U] = 0U;
        __Vtemp_hf3123db6__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0xdU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xdU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[0U] 
            = __Vtemp_hf3123db6__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xdU)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h40410945__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[2U] 
            = __Vtemp_hf3123db6__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0xdU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xdU)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0xdU))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0xdU))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0xdU))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0xdU))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0xdU))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h6df03d02__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0xfU))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0xfU))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0xfU))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0xfU))))) {
        __Vtemp_h59e7fabb__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h59e7fabb__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xfU))))) {
        __Vtemp_h59e7fabb__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h59e7fabb__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xfU))))) {
        __Vtemp_h59e7fabb__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h59e7fabb__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xfU))))) {
        __Vtemp_h59e7fabb__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h59e7fabb__0[2U] = 3U;
    } else {
        __Vtemp_h59e7fabb__0[0U] = 0U;
        __Vtemp_h59e7fabb__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0xfU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xfU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[0U] 
            = __Vtemp_h59e7fabb__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xfU)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h6df03d02__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[2U] 
            = __Vtemp_h59e7fabb__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0xfU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0xfU)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0xfU))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0xfU))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0xfU))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0xfU))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0xfU))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_19[2U]);
    }
    __Vtemp_hb1d93d6e__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x11U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x11U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x11U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x11U))))) {
        __Vtemp_h44521aa3__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h44521aa3__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x11U))))) {
        __Vtemp_h44521aa3__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h44521aa3__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x11U))))) {
        __Vtemp_h44521aa3__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h44521aa3__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x11U))))) {
        __Vtemp_h44521aa3__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h44521aa3__0[2U] = 3U;
    } else {
        __Vtemp_h44521aa3__0[0U] = 0U;
        __Vtemp_h44521aa3__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x11U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x11U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[0U] 
            = __Vtemp_h44521aa3__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x11U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_hb1d93d6e__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[2U] 
            = __Vtemp_h44521aa3__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x11U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x11U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x11U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x11U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x11U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x11U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x11U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h4f206f83__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x13U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x13U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x13U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x13U))))) {
        __Vtemp_h12148755__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h12148755__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x13U))))) {
        __Vtemp_h12148755__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h12148755__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x13U))))) {
        __Vtemp_h12148755__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h12148755__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x13U))))) {
        __Vtemp_h12148755__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h12148755__0[2U] = 3U;
    } else {
        __Vtemp_h12148755__0[0U] = 0U;
        __Vtemp_h12148755__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x13U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x13U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[0U] 
            = __Vtemp_h12148755__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x13U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h4f206f83__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[2U] 
            = __Vtemp_h12148755__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x13U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x13U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x13U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x13U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x13U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x13U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x13U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_19[2U]);
    }
    __Vtemp_hee48a812__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x15U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x15U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x15U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x15U))))) {
        __Vtemp_hb87f7f5c__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_hb87f7f5c__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x15U))))) {
        __Vtemp_hb87f7f5c__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_hb87f7f5c__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x15U))))) {
        __Vtemp_hb87f7f5c__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hb87f7f5c__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x15U))))) {
        __Vtemp_hb87f7f5c__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hb87f7f5c__0[2U] = 3U;
    } else {
        __Vtemp_hb87f7f5c__0[0U] = 0U;
        __Vtemp_hb87f7f5c__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x15U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x15U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[0U] 
            = __Vtemp_hb87f7f5c__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x15U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_hee48a812__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[2U] 
            = __Vtemp_hb87f7f5c__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x15U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x15U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x15U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x15U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x15U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x15U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x15U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h65678947__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x17U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x17U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x17U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x17U))))) {
        __Vtemp_h9dd82017__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h9dd82017__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x17U))))) {
        __Vtemp_h9dd82017__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h9dd82017__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x17U))))) {
        __Vtemp_h9dd82017__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h9dd82017__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x17U))))) {
        __Vtemp_h9dd82017__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h9dd82017__0[2U] = 3U;
    } else {
        __Vtemp_h9dd82017__0[0U] = 0U;
        __Vtemp_h9dd82017__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x17U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x17U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[0U] 
            = __Vtemp_h9dd82017__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x17U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h65678947__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[2U] 
            = __Vtemp_h9dd82017__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x17U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x17U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x17U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x17U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x17U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x17U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x17U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h3c24c42c__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x19U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x19U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x19U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x19U))))) {
        __Vtemp_h41a4e9cd__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h41a4e9cd__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x19U))))) {
        __Vtemp_h41a4e9cd__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h41a4e9cd__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x19U))))) {
        __Vtemp_h41a4e9cd__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h41a4e9cd__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x19U))))) {
        __Vtemp_h41a4e9cd__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h41a4e9cd__0[2U] = 3U;
    } else {
        __Vtemp_h41a4e9cd__0[0U] = 0U;
        __Vtemp_h41a4e9cd__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x19U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x19U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[0U] 
            = __Vtemp_h41a4e9cd__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x19U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h3c24c42c__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[2U] 
            = __Vtemp_h41a4e9cd__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x19U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x19U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x19U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x19U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x19U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x19U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x19U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h35afc173__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x1bU))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x1bU))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x1bU))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x1bU))))) {
        __Vtemp_heffaee96__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_heffaee96__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1bU))))) {
        __Vtemp_heffaee96__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_heffaee96__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1bU))))) {
        __Vtemp_heffaee96__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_heffaee96__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1bU))))) {
        __Vtemp_heffaee96__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_heffaee96__0[2U] = 3U;
    } else {
        __Vtemp_heffaee96__0[0U] = 0U;
        __Vtemp_heffaee96__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x1bU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1bU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[0U] 
            = __Vtemp_heffaee96__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1bU)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h35afc173__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[2U] 
            = __Vtemp_heffaee96__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x1bU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1bU)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x1bU))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x1bU))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x1bU))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x1bU))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x1bU))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h15ec8f64__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x1dU))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x1dU))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x1dU))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x1dU))))) {
        __Vtemp_h01949435__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h01949435__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1dU))))) {
        __Vtemp_h01949435__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h01949435__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1dU))))) {
        __Vtemp_h01949435__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h01949435__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1dU))))) {
        __Vtemp_h01949435__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h01949435__0[2U] = 3U;
    } else {
        __Vtemp_h01949435__0[0U] = 0U;
        __Vtemp_h01949435__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x1dU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1dU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[0U] 
            = __Vtemp_h01949435__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1dU)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h15ec8f64__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[2U] 
            = __Vtemp_h01949435__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x1dU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1dU)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x1dU))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x1dU))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x1dU))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x1dU))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x1dU))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h0cd3edde__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x1fU))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x1fU))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x1fU))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x1fU))))) {
        __Vtemp_h1e73f008__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h1e73f008__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1fU))))) {
        __Vtemp_h1e73f008__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h1e73f008__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1fU))))) {
        __Vtemp_h1e73f008__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h1e73f008__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1fU))))) {
        __Vtemp_h1e73f008__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h1e73f008__0[2U] = 3U;
    } else {
        __Vtemp_h1e73f008__0[0U] = 0U;
        __Vtemp_h1e73f008__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x1fU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1fU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[0U] 
            = __Vtemp_h1e73f008__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1fU)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h0cd3edde__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[2U] 
            = __Vtemp_h1e73f008__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x1fU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x1fU)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x1fU))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x1fU))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x1fU))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x1fU))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x1fU))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_19[2U]);
    }
    __Vtemp_hbb90044f__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x21U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x21U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x21U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x21U))))) {
        __Vtemp_hde056383__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_hde056383__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x21U))))) {
        __Vtemp_hde056383__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_hde056383__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x21U))))) {
        __Vtemp_hde056383__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hde056383__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x21U))))) {
        __Vtemp_hde056383__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hde056383__0[2U] = 3U;
    } else {
        __Vtemp_hde056383__0[0U] = 0U;
        __Vtemp_hde056383__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x21U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x21U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[0U] 
            = __Vtemp_hde056383__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x21U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_hbb90044f__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[2U] 
            = __Vtemp_hde056383__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x21U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x21U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x21U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x21U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x21U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x21U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x21U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h7b2e25f4__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x23U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x23U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x23U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x23U))))) {
        __Vtemp_h6193e05f__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h6193e05f__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x23U))))) {
        __Vtemp_h6193e05f__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h6193e05f__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x23U))))) {
        __Vtemp_h6193e05f__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h6193e05f__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x23U))))) {
        __Vtemp_h6193e05f__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h6193e05f__0[2U] = 3U;
    } else {
        __Vtemp_h6193e05f__0[0U] = 0U;
        __Vtemp_h6193e05f__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x23U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x23U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[0U] 
            = __Vtemp_h6193e05f__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x23U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h7b2e25f4__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[2U] 
            = __Vtemp_h6193e05f__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x23U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x23U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x23U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x23U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x23U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x23U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x23U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h715536e5__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x25U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x25U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x25U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x25U))))) {
        __Vtemp_ha9306191__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_ha9306191__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x25U))))) {
        __Vtemp_ha9306191__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_ha9306191__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x25U))))) {
        __Vtemp_ha9306191__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_ha9306191__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x25U))))) {
        __Vtemp_ha9306191__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_ha9306191__0[2U] = 3U;
    } else {
        __Vtemp_ha9306191__0[0U] = 0U;
        __Vtemp_ha9306191__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x25U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x25U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[0U] 
            = __Vtemp_ha9306191__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x25U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h715536e5__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[2U] 
            = __Vtemp_ha9306191__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x25U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x25U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x25U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x25U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x25U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x25U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x25U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_19[2U]);
    }
    __Vtemp_hcb654972__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x27U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x27U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x27U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x27U))))) {
        __Vtemp_ha413da4d__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_ha413da4d__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x27U))))) {
        __Vtemp_ha413da4d__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_ha413da4d__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x27U))))) {
        __Vtemp_ha413da4d__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_ha413da4d__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x27U))))) {
        __Vtemp_ha413da4d__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_ha413da4d__0[2U] = 3U;
    } else {
        __Vtemp_ha413da4d__0[0U] = 0U;
        __Vtemp_ha413da4d__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x27U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x27U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[0U] 
            = __Vtemp_ha413da4d__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x27U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_hcb654972__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[2U] 
            = __Vtemp_ha413da4d__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x27U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x27U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x27U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x27U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x27U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x27U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x27U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h05532363__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x29U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x29U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x29U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x29U))))) {
        __Vtemp_hefc2190a__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_hefc2190a__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x29U))))) {
        __Vtemp_hefc2190a__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_hefc2190a__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x29U))))) {
        __Vtemp_hefc2190a__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hefc2190a__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x29U))))) {
        __Vtemp_hefc2190a__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hefc2190a__0[2U] = 3U;
    } else {
        __Vtemp_hefc2190a__0[0U] = 0U;
        __Vtemp_hefc2190a__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x29U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x29U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[0U] 
            = __Vtemp_hefc2190a__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x29U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h05532363__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[2U] 
            = __Vtemp_hefc2190a__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x29U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x29U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x29U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x29U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x29U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x29U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x29U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h52342df2__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x2bU))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x2bU))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x2bU))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x2bU))))) {
        __Vtemp_hae063db6__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_hae063db6__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2bU))))) {
        __Vtemp_hae063db6__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_hae063db6__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2bU))))) {
        __Vtemp_hae063db6__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hae063db6__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2bU))))) {
        __Vtemp_hae063db6__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hae063db6__0[2U] = 3U;
    } else {
        __Vtemp_hae063db6__0[0U] = 0U;
        __Vtemp_hae063db6__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x2bU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2bU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[0U] 
            = __Vtemp_hae063db6__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2bU)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h52342df2__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[2U] 
            = __Vtemp_hae063db6__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x2bU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2bU)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x2bU))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x2bU))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x2bU))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x2bU))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x2bU))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_19[2U]);
    }
    __Vtemp_hff78d9c6__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x2dU))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x2dU))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x2dU))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x2dU))))) {
        __Vtemp_h67e1c651__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h67e1c651__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2dU))))) {
        __Vtemp_h67e1c651__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h67e1c651__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2dU))))) {
        __Vtemp_h67e1c651__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h67e1c651__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2dU))))) {
        __Vtemp_h67e1c651__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h67e1c651__0[2U] = 3U;
    } else {
        __Vtemp_h67e1c651__0[0U] = 0U;
        __Vtemp_h67e1c651__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x2dU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2dU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[0U] 
            = __Vtemp_h67e1c651__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2dU)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_hff78d9c6__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[2U] 
            = __Vtemp_h67e1c651__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x2dU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2dU)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x2dU))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x2dU))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x2dU))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x2dU))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x2dU))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h9f7e9646__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x2fU))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x2fU))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x2fU))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x2fU))))) {
        __Vtemp_h799193a3__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h799193a3__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2fU))))) {
        __Vtemp_h799193a3__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h799193a3__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2fU))))) {
        __Vtemp_h799193a3__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h799193a3__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2fU))))) {
        __Vtemp_h799193a3__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h799193a3__0[2U] = 3U;
    } else {
        __Vtemp_h799193a3__0[0U] = 0U;
        __Vtemp_h799193a3__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x2fU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2fU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[0U] 
            = __Vtemp_h799193a3__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2fU)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h9f7e9646__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[2U] 
            = __Vtemp_h799193a3__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x2fU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x2fU)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x2fU))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x2fU))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x2fU))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x2fU))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x2fU))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h0d24146c__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x31U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x31U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x31U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x31U))))) {
        __Vtemp_hc8d28a4f__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_hc8d28a4f__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x31U))))) {
        __Vtemp_hc8d28a4f__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_hc8d28a4f__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x31U))))) {
        __Vtemp_hc8d28a4f__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hc8d28a4f__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x31U))))) {
        __Vtemp_hc8d28a4f__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hc8d28a4f__0[2U] = 3U;
    } else {
        __Vtemp_hc8d28a4f__0[0U] = 0U;
        __Vtemp_hc8d28a4f__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x31U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x31U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[0U] 
            = __Vtemp_hc8d28a4f__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x31U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h0d24146c__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[2U] 
            = __Vtemp_hc8d28a4f__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x31U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x31U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x31U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x31U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x31U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x31U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x31U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_19[2U]);
    }
    __Vtemp_hd2a48918__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x33U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x33U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x33U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x33U))))) {
        __Vtemp_h7d248478__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h7d248478__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x33U))))) {
        __Vtemp_h7d248478__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h7d248478__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x33U))))) {
        __Vtemp_h7d248478__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h7d248478__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x33U))))) {
        __Vtemp_h7d248478__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h7d248478__0[2U] = 3U;
    } else {
        __Vtemp_h7d248478__0[0U] = 0U;
        __Vtemp_h7d248478__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x33U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x33U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[0U] 
            = __Vtemp_h7d248478__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x33U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_hd2a48918__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[2U] 
            = __Vtemp_h7d248478__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x33U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x33U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x33U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x33U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x33U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x33U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x33U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h0adf81c0__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x35U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x35U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x35U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x35U))))) {
        __Vtemp_hc7a681f9__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_hc7a681f9__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x35U))))) {
        __Vtemp_hc7a681f9__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_hc7a681f9__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x35U))))) {
        __Vtemp_hc7a681f9__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hc7a681f9__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x35U))))) {
        __Vtemp_hc7a681f9__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hc7a681f9__0[2U] = 3U;
    } else {
        __Vtemp_hc7a681f9__0[0U] = 0U;
        __Vtemp_hc7a681f9__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x35U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x35U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[0U] 
            = __Vtemp_hc7a681f9__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x35U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h0adf81c0__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[2U] 
            = __Vtemp_hc7a681f9__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x35U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x35U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x35U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x35U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x35U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x35U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x35U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h7df51c5d__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x37U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x37U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x37U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x37U))))) {
        __Vtemp_h6f2d616d__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h6f2d616d__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x37U))))) {
        __Vtemp_h6f2d616d__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h6f2d616d__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x37U))))) {
        __Vtemp_h6f2d616d__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h6f2d616d__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x37U))))) {
        __Vtemp_h6f2d616d__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h6f2d616d__0[2U] = 3U;
    } else {
        __Vtemp_h6f2d616d__0[0U] = 0U;
        __Vtemp_h6f2d616d__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x37U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x37U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[0U] 
            = __Vtemp_h6f2d616d__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x37U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h7df51c5d__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[2U] 
            = __Vtemp_h6f2d616d__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x37U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x37U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x37U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x37U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x37U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x37U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x37U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_19[2U]);
    }
    __Vtemp_hb554a08c__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x39U))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x39U))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x39U))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x39U))))) {
        __Vtemp_hcdc9e97a__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_hcdc9e97a__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x39U))))) {
        __Vtemp_hcdc9e97a__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_hcdc9e97a__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x39U))))) {
        __Vtemp_hcdc9e97a__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hcdc9e97a__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x39U))))) {
        __Vtemp_hcdc9e97a__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_hcdc9e97a__0[2U] = 3U;
    } else {
        __Vtemp_hcdc9e97a__0[0U] = 0U;
        __Vtemp_hcdc9e97a__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x39U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x39U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[0U] 
            = __Vtemp_hcdc9e97a__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x39U)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_hb554a08c__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[2U] 
            = __Vtemp_hcdc9e97a__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x39U))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x39U)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x39U))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x39U))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x39U))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x39U))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x39U))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h4a4ae99f__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x3bU))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x3bU))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x3bU))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x3bU))))) {
        __Vtemp_h1245efbb__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h1245efbb__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3bU))))) {
        __Vtemp_h1245efbb__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h1245efbb__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3bU))))) {
        __Vtemp_h1245efbb__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h1245efbb__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3bU))))) {
        __Vtemp_h1245efbb__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h1245efbb__0[2U] = 3U;
    } else {
        __Vtemp_h1245efbb__0[0U] = 0U;
        __Vtemp_h1245efbb__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x3bU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3bU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[0U] 
            = __Vtemp_h1245efbb__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3bU)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h4a4ae99f__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[2U] 
            = __Vtemp_h1245efbb__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x3bU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3bU)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x3bU))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x3bU))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x3bU))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x3bU))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x3bU))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h800a8223__0[1U] = ((4U == (7U & (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                      >> 0x3dU))))
                                 ? (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                     >> 0x1fU) | ((~ (IData)(
                                                             (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                              >> 0x20U))) 
                                                  << 1U))
                                 : ((5U == (7U & (IData)(
                                                         (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                          >> 0x3dU))))
                                     ? (~ (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                   >> 0x20U)))
                                     : ((6U == (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x3dU))))
                                         ? (~ (IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                       >> 0x20U)))
                                         : 0U)));
    if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x3dU))))) {
        __Vtemp_h674e0390__0[0U] = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                                    << 1U);
        __Vtemp_h674e0390__0[2U] = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3dU))))) {
        __Vtemp_h674e0390__0[0U] = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2)) 
                                    << 1U);
        __Vtemp_h674e0390__0[2U] = (6U | ((~ (IData)(
                                                     (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                                      >> 0x20U))) 
                                          >> 0x1fU));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3dU))))) {
        __Vtemp_h674e0390__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h674e0390__0[2U] = 3U;
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3dU))))) {
        __Vtemp_h674e0390__0[0U] = (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2));
        __Vtemp_h674e0390__0[2U] = 3U;
    } else {
        __Vtemp_h674e0390__0[0U] = 0U;
        __Vtemp_h674e0390__0[2U] = 0U;
    }
    if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x3dU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[2U] = 0U;
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3dU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[0U] 
            = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[1U] 
            = (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[0U] 
            = __Vtemp_h674e0390__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[1U] 
            = ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3dU)))) ? 
               (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2) 
                 >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src2 
                                       >> 0x20U)) << 1U))
                : __Vtemp_h800a8223__0[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[2U] 
            = __Vtemp_h674e0390__0[2U];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                              >> 0x3dU))))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_carry = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_p[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_p[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_p[2U] = 0U;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_carry 
            = ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                     >> 0x3dU)))) ? 0U
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                         >> 0x3dU))))
                    ? 0U : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                  >> 0x3dU))))
                             ? 0U : ((4U == (7U & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x3dU))))
                                      ? 2U : ((5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                           >> 0x3dU))))
                                               ? 1U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_bits_ctrl_data_src1 
                                                               >> 0x3dU))))
                                                   ? 1U
                                                   : 0U))))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_p[0U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_p[1U] 
            = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_p[2U] 
            = (3U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_19[2U]);
    }
    __Vtemp_h052dcc23__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h052dcc23__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                        >> 0x20U));
    __Vtemp_h052dcc23__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h0fbea1b2__0, __Vtemp_h052dcc23__0, 
                  (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    __Vtemp_h0533a6ed__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h0533a6ed__0[1U] = (IData)((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                        >> 0x20U));
    __Vtemp_h0533a6ed__0[2U] = 0U;
    __Vtemp_h0533a6ed__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h97f32683__0, __Vtemp_h0533a6ed__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    __Vtemp_h8004274a__0[0U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__src1);
    __Vtemp_h8004274a__0[1U] = 0U;
    __Vtemp_h8004274a__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h29cbf8c2__0, __Vtemp_h8004274a__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    __Vtemp_hb23900ce__0[0U] = (IData)(((0x75U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                         ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                         : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? (((QData)((IData)(
                                                                 ((__Vtemp_h29cbf8c2__0[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x1fU 
                                                                    >= 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                    ? 
                                                                   ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                                                    << 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                    : 0U))))
                                             : ((6U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                 : 
                                                ((8U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                     : 0ULL))))))));
    __Vtemp_hb23900ce__0[1U] = (IData)((((0x75U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                          : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? (((QData)((IData)(
                                                                  ((__Vtemp_h29cbf8c2__0[0U] 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x1fU 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                     ? 
                                                                    ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                                                     << 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                                     : 0U))))
                                              : ((6U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                      : 0ULL))))))) 
                                        >> 0x20U));
    if ((0x73U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U] 
            = (IData)((((QData)((IData)(((__Vtemp_h0fbea1b2__0[0U] 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                          << (0x1fU 
                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))))));
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U] 
            = (IData)(((((QData)((IData)(((__Vtemp_h0fbea1b2__0[0U] 
                                           >> 0x1fU)
                                           ? 0xffffffffU
                                           : 0U))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((IData)(vlSelf->CoreTop__DOT__EX__DOT__src1) 
                                                      << 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))))) 
                       >> 0x20U));
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[3U] = 0U;
    } else if ((0x41U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U] 
            = __Vtemp_h97f32683__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U] 
            = __Vtemp_h97f32683__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[2U] 
            = __Vtemp_h97f32683__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[3U] 
            = (0x7fffffffU & __Vtemp_h97f32683__0[3U]);
    } else {
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U] 
            = __Vtemp_hb23900ce__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U] 
            = __Vtemp_hb23900ce__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_76[3U] = 0U;
    }
    if (vlSelf->CoreTop__DOT__EX__DOT__branch_flag) {
        vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11 = 
            ((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
              ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
              : ((0x6cU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                  ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                  : ((0x76U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                      ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                      : ((0x7bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                          ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                          : ((0xbU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                              ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                              : ((0xcU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                  ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                  : 0ULL))))));
        vlSelf->CoreTop__DOT__EX__DOT__is_branch = vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11 = 
            (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC);
        vlSelf->CoreTop__DOT__EX__DOT__is_branch = 0U;
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
        = ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
            ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
            : ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                ? ((0U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 1U)))) ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                    : ((1U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 1U))))
                        ? (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2) 
                                           << 0x10U)))
                        : ((2U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 1U))))
                            ? ((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                               << 0x20U) : ((3U == 
                                             (3U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 1U))))
                                             ? (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
                                                << 0x30U)
                                             : 0ULL))))
                : ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                    ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                    : ((0x77U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                        ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                          >> 2U))) ? 
                           (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2 
                            << 0x20U) : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                        : 0ULL))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)
               ? 0xffU : 0U));
    if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xfU];
    } else if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xfU];
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) 
           | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready = 
        (1U & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
               | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
         | ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
            | ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
               | ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                  | ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                     | ((0x3013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                        | ((0x1bU == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                           | ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                              | ((0x4003U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                 | ((3U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                    | ((0x4013U == 
                                        (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                       | ((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                          | ((0x5013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                             | ((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                | ((0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                   | ((0x101bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                      | ((0x4000501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)) 
                                                         | (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363))))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224 
        = ((0x4000003bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0U : ((0x2033U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 5U : ((0x4000503bU == (0xfe00707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 1U : ((0x503bU == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 1U : ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 0U
                                                : (
                                                   (0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 1U
                                                     : 
                                                    ((0x2007033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x200503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x2005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2004033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x40005033U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283 
        = ((0x4033U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0x72U : ((0x200703bU == (0xfe00707fU 
                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                        ? 0xdU : ((0x1033U == (0xfe00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                   ? 0x41U : ((0x2007033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                               ? 0xfU
                                               : ((0x200503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                   ? 0x10U
                                                   : 
                                                  ((0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0x12U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0x75U
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0x13U
                                                      : 
                                                     ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0x43U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0x14U
                                                        : 
                                                       ((0x2000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 7U
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0x40U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0x1aU
                                                           : 
                                                          ((0x3023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 0x46U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 0x70U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159 
        = ((0x4000503bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 5U : ((0x503bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 5U : ((0x4033U == (0xfe00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 5U : ((0x200703bU == 
                                       (0xfe00707fU 
                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 5U : ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 5U
                                                : (
                                                   (0x2007033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x200503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 5U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x2005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x2004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 5U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 5U
                                                          : 
                                                         ((0x2000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 3U
                                                            : 
                                                           ((0x37U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 3U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144))))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign)
            ? (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U])) 
                   << 0x3fU) | (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U])) 
                                 << 0x1fU) | ((QData)((IData)(
                                                              vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U])) 
                                              >> 1U))))
            : (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[4U])) 
                << 0x3fU) | (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[3U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[2U])) 
                                           >> 1U))));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bSign))
            ? (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U]))))
            : (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg[0U]))));
    __Vtemp_hef796a47__0[0U] = vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_lo_lo;
    __Vtemp_hef796a47__0[1U] = (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_lo_hi);
    __Vtemp_hef796a47__0[2U] = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_lo) 
                                 << 1U) | (IData)((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_lo_hi 
                                                   >> 0x20U)));
    __Vtemp_hef796a47__0[3U] = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_hi) 
                                 << 2U) | (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_lo) 
                                            >> 0x1fU) 
                                           | ((IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_lo 
                                                       >> 0x20U)) 
                                              << 1U)));
    __Vtemp_hef796a47__0[4U] = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_hi) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__sum_hi_hi 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_h3a8f7b0f__0[2U] = ((0xffffffe0U & ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2374_io_s) 
                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2373_io_cout)) 
                                                 << 0x1fU) 
                                                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2373_io_s) 
                                                     & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2372_io_cout)) 
                                                    << 0x1eU) 
                                                   | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2372_io_s) 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2371_io_cout)) 
                                                       << 0x1dU) 
                                                      | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2371_io_s) 
                                                           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2370_io_cout)) 
                                                          << 0x1cU) 
                                                         | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2370_io_s) 
                                                              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2369_io_cout)) 
                                                             << 0x1bU) 
                                                            | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2369_io_s) 
                                                                 & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2368_io_cout)) 
                                                                << 0x1aU) 
                                                               | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2368_io_s) 
                                                                    & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_cout)) 
                                                                   << 0x19U) 
                                                                  | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_s) 
                                                                       & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_cout)) 
                                                                      << 0x18U) 
                                                                     | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_s) 
                                                                          & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_cout)) 
                                                                         << 0x17U) 
                                                                        | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_s) 
                                                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_cout)) 
                                                                            << 0x16U) 
                                                                           | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_cout)) 
                                                                               << 0x15U) 
                                                                              | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2362_io_cout)) 
                                                                                << 0x14U) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_hi_lo_lo) 
                                                                                << 5U)))))))))))))) 
                                | (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_lo_hi 
                                   >> 0x1aU));
    __Vtemp_h3a8f7b0f__0[3U] = (0x1fU & ((0x18U & (
                                                   ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2378_io_out_0) 
                                                    & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2377_io_out_1)) 
                                                   << 3U)) 
                                         | ((0x1cU 
                                             & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2377_io_out_0) 
                                                 & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2376_io_cout)) 
                                                << 2U)) 
                                            | ((0x1eU 
                                                & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2376_io_s) 
                                                    & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2375_io_cout)) 
                                                   << 1U)) 
                                               | ((0x1fU 
                                                   & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2375_io_s) 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2374_io_cout))) 
                                                  | ((0x1fU 
                                                      & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2374_io_s) 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2373_io_cout)) 
                                                         >> 1U)) 
                                                     | ((0x1fU 
                                                         & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2373_io_s) 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2372_io_cout)) 
                                                            >> 2U)) 
                                                        | ((0x1fU 
                                                            & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2372_io_s) 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2371_io_cout)) 
                                                               >> 3U)) 
                                                           | ((0x1fU 
                                                               & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2371_io_s) 
                                                                   & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2370_io_cout)) 
                                                                  >> 4U)) 
                                                              | ((0x1fU 
                                                                  & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2370_io_s) 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2369_io_cout)) 
                                                                     >> 5U)) 
                                                                 | ((0x1fU 
                                                                     & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2369_io_s) 
                                                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2368_io_cout)) 
                                                                        >> 6U)) 
                                                                    | ((0x1fU 
                                                                        & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2368_io_s) 
                                                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_cout)) 
                                                                           >> 7U)) 
                                                                       | ((0x1fU 
                                                                           & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_s) 
                                                                               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_cout)) 
                                                                              >> 8U)) 
                                                                          | ((0x1fU 
                                                                              & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_cout)) 
                                                                                >> 9U)) 
                                                                             | ((0x1fU 
                                                                                & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_cout)) 
                                                                                >> 0xaU)) 
                                                                                | ((0x1fU 
                                                                                & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_cout)) 
                                                                                >> 0xbU)) 
                                                                                | ((0x1fU 
                                                                                & (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_s) 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2362_io_cout)) 
                                                                                >> 0xcU)) 
                                                                                | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_hi_lo_lo) 
                                                                                >> 0x1bU))))))))))))))))));
    __Vtemp_h79a93755__0[0U] = (IData)(((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_lo_lo)) 
                                        << 8U));
    __Vtemp_h79a93755__0[1U] = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_lo_hi 
                                 << 6U) | (IData)((
                                                   ((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_lo_lo)) 
                                                    << 8U) 
                                                   >> 0x20U)));
    __Vtemp_h79a93755__0[2U] = __Vtemp_h3a8f7b0f__0[2U];
    __Vtemp_h79a93755__0[3U] = ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_hi_hi 
                                 << 4U) | __Vtemp_h3a8f7b0f__0[3U]);
    __Vtemp_h79a93755__0[4U] = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__carry_hi_hi 
                                >> 0x1cU);
    VL_ADD_W(5, __Vtemp_hd2c00ac8__0, __Vtemp_hef796a47__0, __Vtemp_h79a93755__0);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[0U] 
        = __Vtemp_hd2c00ac8__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[1U] 
        = __Vtemp_hd2c00ac8__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[2U] 
        = __Vtemp_hd2c00ac8__0[2U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[3U] 
        = __Vtemp_hd2c00ac8__0[3U];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[4U] 
        = (7U & __Vtemp_hd2c00ac8__0[4U]);
    vlSelf->CoreTop__DOT__IF_io_branch_io_dnpc = ((0x19U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                                   : 
                                                  ((0x48U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (0xfffffffffffffffeULL 
                                                    & vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)
                                                    : 
                                                   ((0x6bU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                     : 
                                                    ((0x6cU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                      : 
                                                     ((0x76U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                        : 
                                                       ((0x7bU 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_11
                                                          : 
                                                         (4ULL 
                                                          + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)))))))));
    vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_branch) 
           | (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_jump));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
        = ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                 >> 3U)))) ? (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3))
            : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                     >> 3U)))) ? (QData)((IData)(
                                                                 ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3) 
                                                                  << 8U)))
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 3U)))) ? (QData)((IData)(
                                                                     ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3) 
                                                                      << 0x10U)))
                    : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 3U))))
                        ? (QData)((IData)(((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3) 
                                           << 0x18U)))
                        : ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 3U))))
                            ? ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                               << 0x20U) : ((5U == 
                                             (7U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                             ? ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                << 0x28U)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                                 ? 
                                                ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                 << 0x30U)
                                                 : 
                                                ((7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                  << 0x38U)
                                                  : 0ULL))))))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit) 
              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_10 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8)
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
    if (vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid 
            = vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr 
            = vlSelf->CoreTop__DOT__MEM__DOT__addr_temp;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr 
            = vlSelf->CoreTop__DOT__MEM__DOT__addr_temp;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last 
            = (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid 
            = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid 
            = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
    } else {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_valid 
            = (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr 
            = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                : 0ULL);
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr 
            = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                : 0ULL);
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last 
            = (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb = 0xffU;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid 
            = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid 
            = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
    }
    vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)) 
           & ((IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid) 
              | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239 
        = ((0x101bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 1U : ((0x4000501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 1U : ((0x501bU == (0xfc00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 1U : ((0x2013U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 5U : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 4U
                                                : (
                                                   (0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x200003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x200403bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_224))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298 
        = ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0x11U : ((0x3bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                        ? 0x68U : ((0x40000033U == 
                                    (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                    ? 0x69U : ((0x33U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 0x40U
                                                : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0x71U
                                                    : 
                                                   ((0x3033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0x6aU
                                                     : 
                                                    ((0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0x73U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0x44U
                                                       : 
                                                      ((0x200003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0x78U
                                                        : 
                                                       ((0x200403bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 0x79U
                                                         : 
                                                        ((0x200603bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 0x7aU
                                                          : 
                                                         ((0x4000003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 1U
                                                           : 
                                                          ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x4000503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 9U
                                                             : 
                                                            ((0x503bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                              ? 0xaU
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_283))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174 
        = ((0x501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 8U : ((0x2013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 8U : ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 8U : ((0x3bU == (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 5U : ((0x40000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 5U
                                                : (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 5U
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 5U
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 5U
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 5U
                                                         : 
                                                        ((0x200403bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 5U
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x4000003bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 5U
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 5U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_159))))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder)));
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient)));
    __Vtemp_hfc1d42bd__0[0U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 7U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 6U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 5U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 4U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 3U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 2U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 1U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_hfc1d42bd__0[1U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 7U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 6U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 5U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 4U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 3U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 2U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 1U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[0U] 
        = __Vtemp_hfc1d42bd__0[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[1U] 
        = __Vtemp_hfc1d42bd__0[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[2U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0xbU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0xaU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 9U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 8U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[3U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0xfU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0xeU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0xdU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0xcU)))
                                ? 0xffU : 0U))));
    __Vtemp_had48ed99__0[0U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x27U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x26U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x25U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x24U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x23U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x22U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x21U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x20U)))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_had48ed99__0[1U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x27U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x26U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x25U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x24U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x23U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x22U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x21U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x20U)))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[0U] 
        = __Vtemp_had48ed99__0[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[1U] 
        = __Vtemp_had48ed99__0[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[2U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x2bU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x2aU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x29U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x28U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[3U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x2fU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x2eU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x2dU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x2cU)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)) 
           | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3));
    vlSelf->__VdfgTmp_h5a5a8c61__0 = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                                      | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we) 
           & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
              | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we))
            ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result) 
                << 1U) | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result))
            : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r)
                ? 2U : 1U));
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_9 = ((3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                  ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   ? 
                                                  (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                                    | ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
                                                       & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                                           ? 
                                                          (1U 
                                                           == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))
                                                           : 
                                                          ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                                           & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                                              & (1U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))))))
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)));
    vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
            ? (((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                 ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid)
                 : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                     ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                     : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                         ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                             ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                             : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))
                         : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_valid))))
                ? 2U : 0U) : ((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                               ? (((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)) 
                                   & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last))
                                   ? 0U : 2U) : 0U));
    vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)) 
           & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
               ? (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
               : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                  & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                     & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))))));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_20 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq)
                                           ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value)
                                           : ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                                               ? ((0x3fU 
                                                   <= (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift))
                                                   ? 0x3fU
                                                   : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift))
                                               : (0x3fU 
                                                  & ((2U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))
                                                      ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value)
                                                      : 
                                                     ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value) 
                                                      + 
                                                      (3U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state))))))));
    if (vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0) {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready 
            = (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready 
            = (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state));
        vlSelf->CoreTop__DOT__MMEM_wd_last = vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last;
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready 
            = vlSelf->CoreTop__DOT__MMEM_wd_ready;
    } else {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready 
            = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)))
                   : (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready 
            = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))
                   : (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
        vlSelf->CoreTop__DOT__MMEM_wd_last = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                              & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                                                 & ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                                    & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last))));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready 
            = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (IData)(vlSelf->CoreTop__DOT__MMEM_wd_ready))
                   : (IData)(vlSelf->CoreTop__DOT__MMEM_wd_ready)));
    }
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata
            : (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U]))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_24 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)
                : 0U) : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__MMEM__DOT__rdata = 0ULL;
    } else {
        if (((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)) 
             & (~ (IData)(vlSelf->clock)))) {
            VCoreTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CoreTop__DOT__MMEM__DOT__read_addr_buffer, vlSelf->__Vtask_pmem_read__2__rdata);
            vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                = vlSelf->__Vtask_pmem_read__2__rdata;
        }
        if (((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
             & (~ (IData)(vlSelf->clock)))) {
            VCoreTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->CoreTop__DOT__MMEM__DOT__write_addr_buffer, 
                                                                       ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                                                         ? vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data
                                                                         : 
                                                                        ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                                                          ? 0ULL
                                                                          : 
                                                                         ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                                           ? 
                                                                          ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                                            ? 0ULL
                                                                            : vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data)
                                                                           : 0ULL))), 
                                                                       ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                                                         ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb)
                                                                         : 
                                                                        ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)
                                                                          ? 0U
                                                                          : 
                                                                         ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                                           ? 
                                                                          ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                                            ? 0U
                                                                            : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb))
                                                                           : 0U))));
        }
    }
    vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
            ? vlSelf->CoreTop__DOT__MMEM__DOT__rdata
            : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1)
                ? ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                    : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                        : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                            : ((3U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U])))
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U])))
                                    : ((5U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                        : ((6U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                            : ((7U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                : 0ULL))))))))
                : ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                    : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                        : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U])))
                            : ((3U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U])))
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U])))
                                    : ((5U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU])))
                                        : ((6U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU])))
                                            : ((7U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                : 0ULL))))))))));
    if (vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0) {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid 
            = (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid 
            = (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state));
    } else {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid 
            = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))
                   : (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid 
            = ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)))
                   : (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
    }
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313 
        = ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 0x47U : ((0x3013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                        ? 0x6aU : ((0x1bU == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                    ? 0x6dU : ((0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 0x6eU
                                                : (
                                                   (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 0x6fU
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 0xeU
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 0x72U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 0x71U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 0x75U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 3U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 4U
                                                          : 
                                                         ((0x101bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 5U
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 6U
                                                            : 
                                                           ((0x501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 8U
                                                             : 
                                                            ((0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                              ? 2U
                                                              : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_298))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189 
        = ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
            ? 8U : ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                     ? 8U : ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                              ? 8U : ((0x3013U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                       ? 8U : ((0x1bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                ? 8U
                                                : (
                                                   (0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                    ? 8U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                     ? 8U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                      ? 8U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                       ? 8U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                        ? 8U
                                                        : 
                                                       ((0x5013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                         ? 8U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                          ? 8U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                           ? 8U
                                                           : 
                                                          ((0x101bU 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                            ? 8U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                                                             ? 8U
                                                             : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_174))))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_47 = ((0x72U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                  ^ vlSelf->CoreTop__DOT__EX__DOT__src2)
                                               : ((0x6dU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                                   : 
                                                  ((0x78U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[0U] 
                                                                       >> 0x1fU)
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[0U])))
                                                    : 
                                                   ((0x79U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26
                                                     : 
                                                    ((0x7aU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_30
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                                                                >> 0x1fU)))
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10)))
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__result[0U])))
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder
                                                          : 
                                                         ((0x12U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_26
                                                            : 
                                                           ((0x13U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient
                                                             : 
                                                            ((0x43U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient
                                                              : 
                                                             ((0x15U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data
                                                               : 
                                                              ((0x16U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? vlSelf->CoreTop__DOT__EX_io_csr_rd_io_rd_data
                                                                : 0ULL)))))))))))))));
    __Vtemp_hc8cf7fd9__0[4U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x17U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x16U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x15U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x14U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x13U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x12U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x11U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x10U)))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_hc8cf7fd9__0[5U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x17U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x16U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x15U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x14U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x13U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x12U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x11U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x10U)))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[4U] 
        = __Vtemp_hc8cf7fd9__0[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[5U] 
        = __Vtemp_hc8cf7fd9__0[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[6U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x1bU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x1aU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x19U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x18U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[7U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x1fU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x1eU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x1dU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x1cU)))
                                ? 0xffU : 0U))));
    __Vtemp_hdf433f48__0[4U] = (IData)((((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                      >> 0x37U)))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x36U)))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x35U)))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x34U)))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x33U)))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x32U)))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((1U 
                                                                             & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x31U)))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x30U)))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_hdf433f48__0[5U] = (IData)(((((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                       >> 0x37U)))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x36U)))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x35U)))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x34U)))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((1U 
                                                                        & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x33U)))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((1U 
                                                                           & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x32U)))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((1U 
                                                                              & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x31U)))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x30U)))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[4U] 
        = __Vtemp_hdf433f48__0[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[5U] 
        = __Vtemp_hdf433f48__0[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[6U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x3bU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x3aU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x39U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x38U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[7U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x3fU))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x3eU)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x3dU)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x3cU)))
                                ? 0xffU : 0U))));
    if (vlSelf->__VdfgTmp_h5a5a8c61__0) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                >> 6U)));
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data 
            = (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
               >> 0xbU);
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data = 0ULL;
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_17 = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
                                                   & (IData)(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid))
                                                   ? 3U
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->CoreTop__DOT__MMEM_wd_last) 
                             << 5U) | ((((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                          ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)
                                          : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0) 
                                             | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                 ? 
                                                ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                                 | (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready))
                                                 : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_ready)))) 
                                        << 4U) | ((
                                                   (1U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
                                                   << 3U) 
                                                  | ((((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0)
                                                        ? (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)
                                                        : 
                                                       ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0)) 
                                                        & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                            ? 
                                                           ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                                            & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid))
                                                            : (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_valid)))) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))));
    if (VCoreTop__ConstPool__TABLE_h1d315e1c_0[vlSelf->__Vtableidx1]) {
        vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state 
            = VCoreTop__ConstPool__TABLE_h2941df74_0
            [vlSelf->__Vtableidx1];
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_8 
        = ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
             & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready)) 
            & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready));
    if (((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__ICACHE_io_out_rdata_rep_valid))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xeU] 
            = (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__rdata);
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xfU] 
            = (IData)((vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                       >> 0x20U));
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_51[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid));
    if ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))) {
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2 = 0x40U;
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 = 8U;
    } else if ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))) {
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2 = 0x41U;
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 = 8U;
    } else {
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_2 
            = ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                ? 0x44U : ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))
                            ? 0x45U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313)));
        vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0 
            = vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_189;
    }
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
            ? ((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                    ? vlSelf->CoreTop__DOT__EX__DOT__src2
                    : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                        ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                        : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                            ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                               | vlSelf->CoreTop__DOT__EX__DOT__src2)
                            : ((0x69U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                : ((0x71U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                       & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_47))))))
            : ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                ? ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                    ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                    : 0ULL) : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? 0ULL : ((1U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                           ? (((QData)((IData)(
                                                               ((0x6eU 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? (IData)(
                                                                           (VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))) 
                                                                            >> 0x20U))
                                                                 : 
                                                                vlSelf->CoreTop__DOT__EX__DOT___GEN_76[1U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x6eU 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? (IData)(
                                                                            VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT__src1, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))))
                                                                  : 
                                                                 vlSelf->CoreTop__DOT__EX__DOT___GEN_76[0U]))))
                                           : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                               ? ((0x6aU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T)
                                                    ? 1ULL
                                                    : 0ULL)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((IData)(vlSelf->CoreTop__DOT__EX__DOT___compar_result_T_4)
                                                     ? 1ULL
                                                     : 0ULL)
                                                    : 0ULL))
                                               : 0ULL)))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_30 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
            & (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
           & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)));
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27 
        = (0xffU & ((0U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                     ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)
                     : ((1U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                         ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                    >> 8U)) : ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                ? (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                           >> 0x10U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                    ? (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                               >> 0x18U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                     ? (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                >> 0x20U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                      ? (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                 >> 0x28U))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                       ? (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                  >> 0x30U))
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                        ? (IData)(
                                                                  (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                   >> 0x38U))
                                                        : 0U)))))))));
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44 
        = (0xffffU & ((0U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                            >> 1U))))
                       ? (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)
                       : ((1U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                >> 1U))))
                           ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                      >> 0x10U)) : 
                          ((2U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 1U))))
                            ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                       >> 0x20U)) : 
                           ((3U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                  >> 1U))))
                             ? (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                        >> 0x30U)) : 0U)))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_32 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid)
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_10 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid) 
                & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_22 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last) 
            & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
    if (((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xeU] 
            = (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__rdata);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xfU] 
            = (IData)((vlSelf->CoreTop__DOT__MMEM__DOT__rdata 
                       >> 0x20U));
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU];
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_2 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid) 
            & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready) 
               & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last)))
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
    vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6 
        = ((IData)(vlSelf->CoreTop__DOT__valid_1) & 
           ((~ (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                  ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid)
                  : ((~ (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)) 
                     & ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                        | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4)))) 
                | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)
                    ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid)
                    : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
                       | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                          & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we)))))) 
            & (4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))));
    vlSelf->CoreTop__DOT__ID__DOT__imm = ((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? ((
                                                   ((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                     >> 0x14U))))
                                               : 0ULL) 
                                             | ((7U 
                                                 == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                 ? 
                                                ((((0x80000U 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst)
                                                    ? 0xfffffffffffULL
                                                    : 0ULL) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000U 
                                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                             >> 0x14U)))))))
                                                 : 0ULL)) 
                                            | ((3U 
                                                == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                      >> 0x1fU)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_Inst))))
                                                : 0ULL)) 
                                           | ((9U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                               ? ((
                                                   ((vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                           >> 7U))))))
                                               : 0ULL)) 
                                          | ((0xbU 
                                              == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                              ? (((
                                                   (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                    >> 0x1fU)
                                                    ? 0x7ffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xdU) 
                                                 | (QData)((IData)(
                                                                   ((0x1000U 
                                                                     & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                        >> 0x13U)) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                           << 4U)) 
                                                                       | ((0x7e0U 
                                                                           & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (vlSelf->CoreTop__DOT__ID_io_in_bits_Inst 
                                                                                >> 7U))))))))
                                              : 0ULL));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU] 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU] 
        = ((IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU]);
    if ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU]);
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[1U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[2U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[3U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[4U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[5U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[6U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[7U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[8U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[9U] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xaU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xbU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xcU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xdU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xeU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data[0xfU] 
            = (((~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU]) 
                & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU]) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU]);
    }
    VL_SHIFTR_WWI(512,512,32, __Vtemp_h902130f5__0, vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg, 0x40U);
    if ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_14 
            = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid)
                ? 2U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89 
            = (0xfU & ((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))
                        ? 0U : ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write) 
                                + (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0))));
        if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0) {
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U] 
                = __Vtemp_h902130f5__0[0U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U] 
                = __Vtemp_h902130f5__0[1U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U] 
                = __Vtemp_h902130f5__0[2U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U] 
                = __Vtemp_h902130f5__0[3U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U] 
                = __Vtemp_h902130f5__0[4U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U] 
                = __Vtemp_h902130f5__0[5U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U] 
                = __Vtemp_h902130f5__0[6U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U] 
                = __Vtemp_h902130f5__0[7U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U] 
                = __Vtemp_h902130f5__0[8U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U] 
                = __Vtemp_h902130f5__0[9U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU] 
                = __Vtemp_h902130f5__0[0xaU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU] 
                = __Vtemp_h902130f5__0[0xbU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU] 
                = __Vtemp_h902130f5__0[0xcU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU] 
                = __Vtemp_h902130f5__0[0xdU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU] 
                = __Vtemp_h902130f5__0[0xeU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU] 
                = __Vtemp_h902130f5__0[0xfU];
        } else {
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU] 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU];
        }
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_14 
            = ((4U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8) 
                    | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid))
                    ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))
                : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89 
            = (0xfU & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write));
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[1U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU];
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU] 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU];
    }
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData 
        = ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))
            ? ((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata
                : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                    ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                      >> 2U))) ? (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                                >> 0x3fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                                     >> 0x20U))))
                        : (((QData)((IData)(((1U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                                                            >> 0x1fU)))
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata))))
                    : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                        ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                          >> 2U))) ? 
                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata 
                            >> 0x20U) : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata)))
                        : ((0x6fU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                            ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                            : ((0xeU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                ? ((((0x80U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                      ? 0xffffffffffffffULL
                                      : 0ULL) << 8U) 
                                   | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27)))
                                : ((3U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? ((((0x8000U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                          ? 0xffffffffffffULL
                                          : 0ULL) << 0x10U) 
                                       | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44)))
                                    : ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                        : 0ULL)))))))
            : vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData);
    vlSelf->CoreTop__DOT___T_13 = (1U & ((~ ((~ (IData)(vlSelf->CoreTop__DOT__valid_1)) 
                                             | (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))) 
                                         & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall))));
    vlSelf->CoreTop__DOT__EX_io_out_ready = (1U & (
                                                   (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)) 
                                                   & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall))));
    vlSelf->CoreTop__DOT___GEN_248 = ((IData)(vlSelf->CoreTop__DOT___T_13) 
                                      | ((~ (IData)(vlSelf->CoreTop__DOT__WB_io_out_valid)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_2)));
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
           & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready));
    vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_4 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2) 
           & ((IData)(vlSelf->CoreTop__DOT__valid) 
              & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready)));
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_branch) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0));
    vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump = 
        ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_jump) 
         & (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0));
    vlSelf->CoreTop__DOT__IF_io_flush = ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                                         & (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_4));
    vlSelf->CoreTop__DOT__IF_io_out_bits_Inst = ((IData)(vlSelf->CoreTop__DOT__IF_io_flush)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                              >> 2U)))
                                                   ? (IData)(
                                                             (vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata 
                                                              >> 0x20U))
                                                   : (IData)(vlSelf->CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata)));
    vlSelf->CoreTop__DOT___T_2 = ((IData)(vlSelf->CoreTop__DOT__IF_io_flush) 
                                  | (IData)(vlSelf->CoreTop__DOT___T_14));
    vlSelf->CoreTop__DOT__IF_io_ex_stall = ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_flush)) 
                                            & (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_4));
    vlSelf->CoreTop__DOT___T_4 = ((IData)(vlSelf->CoreTop__DOT___T_2) 
                                  | ((IData)(vlSelf->CoreTop__DOT__IF_io_ex_stall) 
                                     | (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall)));
    vlSelf->CoreTop__DOT__IF_io_cache_req_addr_req_valid 
        = (1U & ((~ (IData)(vlSelf->CoreTop__DOT__full)) 
                 & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_jump)) 
                    & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_branch_io_is_branch)) 
                       & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_wb_stall)) 
                          & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_ex_stall)) 
                             & ((~ (IData)(vlSelf->CoreTop__DOT__IF_io_excp_flush)) 
                                & (~ (IData)(vlSelf->CoreTop__DOT__IF_io_mret_flush)))))))));
    vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0 
        = (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & (IData)(vlSelf->CoreTop__DOT__EX__DOT___io_is_flush_T_2)) 
           | (IData)(vlSelf->CoreTop__DOT__IF_io_ex_stall));
    vlSelf->CoreTop__DOT___T_8 = (((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid)) 
                                      & ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid)))) 
                                  & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready));
    vlSelf->CoreTop__DOT___T = (((~ ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid) 
                                       | (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid)) 
                                      & (IData)(vlSelf->CoreTop__DOT__valid)) 
                                     | (IData)(vlSelf->CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0))) 
                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_out_ready)) 
                                & ((~ (((IData)(vlSelf->CoreTop__DOT__valid) 
                                        & ((4U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
                                           & ((((0xeU 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                | (0x6fU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                               | ((0x45U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                  | ((3U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                     | (4U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))))) 
                                              | ((0x47U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                 | (0x11U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))))) 
                                       & ((IData)(vlSelf->CoreTop__DOT__ID_io_ex_reg_rfWen) 
                                          & ((IData)(vlSelf->__VdfgTmp_ha116befc__0) 
                                             | (IData)(vlSelf->__VdfgTmp_ha248cb35__0))))) 
                                   & (~ (IData)(vlSelf->CoreTop__DOT__empty))));
    vlSelf->CoreTop__DOT___GEN_221 = ((IData)(vlSelf->CoreTop__DOT___T_8) 
                                      | ((~ (IData)(vlSelf->CoreTop__DOT___T_13)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid_1)));
    vlSelf->CoreTop__DOT___GEN_197 = ((IData)(vlSelf->CoreTop__DOT___T) 
                                      | ((~ (IData)(vlSelf->CoreTop__DOT___T_8)) 
                                         & (IData)(vlSelf->CoreTop__DOT__valid)));
}
