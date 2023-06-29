// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop___024root.h"

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__14(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__14\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_286 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_303 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2278 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2277 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2276 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2272 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2271 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2270 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2136 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2138 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2137 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2248 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2249 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2250 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2194 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2195 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2196 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_285 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_302 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2130 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2131 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2132 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2191 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2193 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1727 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1728 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1729 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1979 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1704 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1703 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1702 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2022 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2269 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2268 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2267 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2127 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1938 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1396 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1395 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1394 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1239 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_468 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_467 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_466 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_979 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_978 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_977 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_376 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_375 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_374 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_357 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_356 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_355 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_934 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_489 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_488 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_936 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_935 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_71 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_188 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_187 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_186 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_906 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1310 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_873 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_872 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_871 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_870 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_869 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_445 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_904 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_447 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_446 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_905 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1309 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_874 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_298 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_875 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_876 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_490 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_296 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_297 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_915 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1311 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_913 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_914 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2129 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1418 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1419 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1420 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1421 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1422 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1423 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2023 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_168 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_169 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_170 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_171 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_172 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_173 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_174 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_175 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2128 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1154 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1155 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1156 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1157 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_701 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_702 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_703 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_704 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_705 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_706 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_707 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_708 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_728 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_729 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_730 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_731 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_732 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_733 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_734 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_735 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_943 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_944 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_945 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1158 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_167 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1153 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_700 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_727 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_868 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0x18U));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_746_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2136) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2137) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2138))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2137) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2138)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_744_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2130) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2131) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2132))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2131) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2132)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_128_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_285) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_286));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_128_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_285) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_286));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_134_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_302) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_303));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_134_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_302) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_303));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_170) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_171) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_172))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_171) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_172)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_173) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_174)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_175));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_173) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_174) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_175))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_174) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_175)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_186) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_187)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_188));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_186) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_187) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_188))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_187) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_188)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_132_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_296) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_297)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_298));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_132_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_296) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_297) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_298))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_297) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_298)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_152_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_355) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_356)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_357));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_152_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_355) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_356) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_357))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_356) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_357)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_158_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_374) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_375)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_376));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_158_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_374) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_375) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_376))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_375) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_376)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_182_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_445) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_446) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_447))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_446) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_447)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_189_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_466) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_467) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_468))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_467) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_468)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_196_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_488) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_489) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_490))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_489) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_490)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_269_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_706) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_707) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_708))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_707) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_708)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_278_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_733) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_734) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_735))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_734) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_735)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_324_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_871) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_872) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_873))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_872) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_873)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_325_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_874) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_875) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_876))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_875) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_876)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_335_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_904) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_905) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_906))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_905) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_906)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_338_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_913) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_914)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_915));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_338_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_913) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_914) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_915))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_914) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_915)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_345_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_934) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_935) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_936))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_935) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_936)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_348_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_943) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_944)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_945));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_348_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_943) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_944) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_945))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_944) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_945)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_359_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_977) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_978) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_979))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_978) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_979)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_418_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1153) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1154)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1155));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_418_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1153) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1154) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1155))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1154) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1155)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_419_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1156) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1157)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1158));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_470_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1309) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1310)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1311));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_470_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1309) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1310) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1311))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1310) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1311)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_498_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1394) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1395)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1396));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_498_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1394) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1395) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1396))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1395) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1396)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_507_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1421) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1422) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1423))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1422) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1423)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_743_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2127) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2128) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2129))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2128) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2129)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__15(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__15\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_207 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_193 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_222 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_573 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_22 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_27 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_237 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_192 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_220 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_221 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_571 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_572 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_597 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_235 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_236 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2214 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2213 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2212 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2204 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2203 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2202 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2157 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2156 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2158 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2102 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2103 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2104 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2192 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_595 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1470 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1469 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2238 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2221 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2220 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1476 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1475 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1474 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1473 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1472 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1471 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1212 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1211 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1210 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1179 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1178 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_532 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1080 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1079 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1078 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_933 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2219 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_964 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_227 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_226 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_363 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_362 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_199 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_198 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_197 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_189 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_25 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_24 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_191 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_190 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2201 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_185 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2200 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1320 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1321 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1322 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_195 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_157 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_213 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_232 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_233 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_234 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_239 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_240 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_241 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_242 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_243 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_255 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_256 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_257 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_258 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_259 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_260 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_261 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_262 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1125 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_565 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_566 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_567 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2199 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1027 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1037 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1038 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1039 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1057 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1092 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1177 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_322 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_304 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_223 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_359 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_208 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_23 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_180 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_194 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_238 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_254 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1120 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1022 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1054 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1087 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
               >> 0x1fU);
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_734_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2102) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2103) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2104))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2103) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2104)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_97_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_192) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_193));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_523_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1469) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1470)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1469) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1470)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_41_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_23) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_24)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_25));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_41_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_23) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_24) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_25))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_24) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_25)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_96_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_189) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_190)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_191));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_96_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_189) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_190) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_191))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_190) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_191)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_111_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_232) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_233)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_234));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_112_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_235) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_236)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_237));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_120_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_260) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_261) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_262))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_261) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_262)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_379_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1037) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1038)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1039));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_379_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1037) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1038) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1039))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1038) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1039)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_426_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1177) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1178) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1179))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1178) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1179)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_437_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1210) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1211) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1212))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1211) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1212)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_474_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1320) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1321) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1322))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1321) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1322)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_524_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1471) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1472) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1473))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1472) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1473)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_525_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1474) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1475) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1476))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1475) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1476)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__16(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__16\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_6 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_31 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_5 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_4 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_50 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_8 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_122 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_19 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_20 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1286 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1287 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_49 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1830 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1829 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1828 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1805 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1804 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1585 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1584 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1583 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1558 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1557 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1556 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1299 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1296 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1293 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1220 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1188 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1187 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1740 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1739 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1738 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_406 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_975 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_312 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_311 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_310 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_289 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_278 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_277 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_276 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_974 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1365 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1364 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1363 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_682 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_360 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_80 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1914 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1913 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1912 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_30 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_600 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_275 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1969 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_756 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_63 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_272 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1290 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_48 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_41 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_755 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1289 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_274 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1952 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_599 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_64 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_273 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1951 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_29 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1288 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1953 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_757 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_758 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_759 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_626 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_627 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_628 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_783 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_784 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_785 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_786 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_787 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1783 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1784 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1785 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1786 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1787 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1788 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_601 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_602 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_603 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_624 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_625 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_649 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_650 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_651 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_652 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_653 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1005 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1006 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1007 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_62 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_287 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_270 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_108 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_79 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_47 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_28 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_623 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_648 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2312 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1331_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1330_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2313 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1330_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1329_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2314 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1332_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1331_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2315 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1331_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1330_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2317 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1332_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1331_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2316 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1333_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1332_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2327 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1337_io_s) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1336_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2326 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1338_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1337_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_813_io_out_1));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_125_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_276) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_277) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_278))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_277) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_278)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_137_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_310) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_311) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_312))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_311) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_312)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_552_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1556) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1557) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1558))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1557) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1558)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_561_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1583) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1584) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1585))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1584) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1585)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_628_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1783) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1784) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1785))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1784) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1785)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_629_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1786) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1787) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1788))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1787) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1788)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_671_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1912) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1913) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1914))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1913) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1914)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_684_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1951) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1952) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1953))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1952) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1953)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1961_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2326) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2327));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1961_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2326) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2327));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__17(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__17\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_266 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_267 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_268 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_620 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_621 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1827 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1826 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2021 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1986 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1987 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2004 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1931 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1930 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1873 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1872 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1871 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1852 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1851 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1850 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1849 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1848 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1847 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1833 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1832 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1808 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1807 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1806 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1692 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1691 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1690 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1673 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1672 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1671 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1670 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1669 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1668 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1667 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1666 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1647 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1646 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1645 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1644 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1643 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1482 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1481 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1480 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1479 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1478 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1477 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1392 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1391 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1390 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1389 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1388 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1357 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1302 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1300 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1298 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1297 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1665 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1621 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1620 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1619 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1618 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1362 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1361 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1360 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1359 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1358 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1617 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1616 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_200 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2009 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2011 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2010 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1334 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_201 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_202 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1332 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1333 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_617 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_618 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_263 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_264 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2024 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2025 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1448 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1449 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1450 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1451 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1452 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1453 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_214 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_215 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_216 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_229 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_230 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_231 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_244 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_245 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_246 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_265 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1929 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1967 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] 
                        >> 1U)));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_642_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1826) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1827)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1826) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1827)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_100_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_200) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_201) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_202))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_201) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_202)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_105_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_214) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_215) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_216))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_215) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_216)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_110_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_229) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_230) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_231))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_230) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_231)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_115_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_244) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_245) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_246))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_245) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_246)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_121_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_263) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_264)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_265));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_122_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_266) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_267)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_268));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_517_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1451) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1452) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1453))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1452) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1453)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_526_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1477) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1478)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1479));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_527_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1480) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1481)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1482));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_590_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1668) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1669)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1670));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_591_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1671) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1672)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1673));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_649_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1847) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1848)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1849));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_649_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1847) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1848) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1849))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1848) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1849)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_677_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1929) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1930) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1931))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1930) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1931)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_703_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2009) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2010) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2011))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2010) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2011)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__18(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__18\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2236 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2235 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2234 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2227 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2226 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2225 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1248 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1247 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1246 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1215 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1214 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1213 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1182 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1181 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1180 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1083 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1082 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1081 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2207 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2206 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2205 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_673 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_699 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2224 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2223 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2222 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_698 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1939 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1839 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1838 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1837 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1836 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1835 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1834 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1817 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1816 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1815 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1814 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1813 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1812 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1768 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1767 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1766 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1747 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1746 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1745 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1744 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1743 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1742 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_924 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_923 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_922 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1771 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1770 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1769 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_894 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1718 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_750 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_892 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_893 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_836 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_748 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_749 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1719 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1720 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1721 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1722 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1723 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1789 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1790 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1791 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1792 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1793 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1794 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_745 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_746 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_747 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_778 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_779 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_780 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_806 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_807 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_808 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_834 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_835 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_946 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_947 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_948 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_949 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_950 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_951 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_952 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_953 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_954 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_983 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_984 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_985 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 7U));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1081) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1082)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1083));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1081) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1082) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1083))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1082) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1083)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1180) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1181)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1182));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1180) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1181) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1182))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1181) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1182)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1213) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1214)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1215));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1213) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1214) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1215))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1214) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1215)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1246) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1247)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1248));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1246) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1247) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1248))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1247) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1248)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2205) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2206) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2207))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2206) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2207)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_774_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2222) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2223) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2224))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2223) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2224)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_775_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2225) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2226)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2227));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_775_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2225) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2226) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2227))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2226) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2227)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2234) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2235)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2236));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2234) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2235) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2236))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2235) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2236)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2205) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2206)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2207));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_266_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_698) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_699));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_266_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_698) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_699));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_282_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_745) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_746)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_747));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_282_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_745) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_746) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_747))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_746) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_747)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_283_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_748) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_749)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_750));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_283_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_748) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_749) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_750))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_749) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_750)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_293_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_778) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_779)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_780));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_293_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_778) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_779) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_780))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_779) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_780)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_302_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_806) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_807)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_808));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_302_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_806) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_807) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_808))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_807) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_808)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_311_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_834) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_835)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_836));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_311_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_834) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_835) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_836))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_835) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_836)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_331_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_892) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_893)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_894));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_331_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_892) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_893) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_894))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_893) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_894)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_341_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_922) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_923)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_924));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_341_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_922) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_923) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_924))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_923) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_924)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_349_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_946) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_947)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_948));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_349_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_946) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_947) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_948))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_947) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_948)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_350_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_949) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_950)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_951));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_350_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_949) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_950) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_951))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_950) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_951)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_351_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_952) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_953)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_954));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_351_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_952) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_953) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_954))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_953) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_954)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_361_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_983) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_984)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_985));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_361_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_983) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_984) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_985))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_984) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_985)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_607_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1721) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1722) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1723))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1722) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1723)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_623_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1769) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1770) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1771))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1770) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1771)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_631_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1792) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1793) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1794))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1793) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1794)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_638_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1812) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1813)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1814));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_639_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1815) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1816)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1817));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_639_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1815) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1816) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1817))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1816) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1817)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_645_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1834) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1835)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1836));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_646_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1837) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1838)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1839));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_774_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2222) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2223)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2224));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1025_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_350_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_361_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_351_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_361_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_351_io_cout)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__19(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__19\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2307 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1021 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1053 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1086 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1119 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2296 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2306 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1708 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1251 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1249 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1218 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1217 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1216 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1184 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1183 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1084 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1117 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1118 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1150 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1845 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2111 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2112 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2304 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2303 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2302 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2301 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2299 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2298 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2297 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2294 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2295 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2108 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2109 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2110 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_541 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_540 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_539 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_538 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_537 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_536 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1110 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_518 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_517 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_516 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_515 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_514 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_513 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1077 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1076 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1075 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1074 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1073 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1072 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_373 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_372 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_371 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_370 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_369 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_332 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_331 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_882 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_881 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_880 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_879 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_878 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_877 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1138 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_973 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_972 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_971 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_970 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_969 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_968 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_368 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_939 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_938 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_937 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_336 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_583 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1173 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1172 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1175 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1174 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1171 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_940 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_907 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_908 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_909 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_910 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_911 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_912 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_333 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_334 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_335 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_763 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_764 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_765 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_766 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_767 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_768 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1139 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1140 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1141 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1142 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1143 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_559 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_560 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_561 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_562 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_563 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_564 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_584 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_585 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_586 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_587 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_588 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_607 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_608 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_609 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_610 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_611 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_612 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_709 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_710 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_711 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_712 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_713 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_714 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_736 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_737 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_738 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_739 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_740 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_741 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_941 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_942 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_999 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1000 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1001 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1002 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1003 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1004 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1031 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1032 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1033 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1034 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1035 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1036 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1105 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1106 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1107 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1108 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1109 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1176 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2869 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1697_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1696_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2870 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1696_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1695_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2568 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1047_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1040_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1040_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_1)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2575 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1054_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1047_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1047_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2582 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1061_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1054_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1054_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2589 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1068_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1061_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1061_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2868 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1695_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1694_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2867 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1696_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1695_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2865 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1695_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1694_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2866 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1694_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1693_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2553 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1486_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1481_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1487_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1481_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1487_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2552 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1491_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1486_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1492_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2551 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1479_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1485_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1480_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1485_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1480_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2864 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1693_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1692_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2863 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1694_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1693_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2861 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1693_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1692_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2859 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1692_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1691_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2862 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1692_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1691_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2857 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1691_io_s) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1690_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2853 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1689_io_s) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1688_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2860 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1691_io_s) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1690_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2856 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1689_io_s) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1688_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2854 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1688_io_s) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1687_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2855 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1690_io_s) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1689_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2858 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1690_io_s) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1689_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2550 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1484_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1490_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1485_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2549 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1483_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1478_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1484_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1478_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1484_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2548 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1488_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1483_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1489_io_s));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2108) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2109) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2110))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2109) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2110)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_737_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2111) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2112));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_144_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_331) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_332)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_333));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_145_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_334) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_335)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_336));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_156_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_368) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_369)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_370));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_157_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_371) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_372)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_373));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_204_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_513) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_514)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_515));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_205_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_516) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_517)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_518));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_212_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_536) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_537)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_538));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_213_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_539) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_540)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_541));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_220_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_559) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_560)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_561));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_221_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_562) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_563)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_564));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_228_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_583) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_584)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_585));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_229_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_586) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_587)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_588));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_236_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_607) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_608)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_609));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_237_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_610) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_611)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_612));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_270_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_709) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_710)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_711));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_271_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_712) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_713)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_714));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_279_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_736) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_737)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_738));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_280_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_739) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_740)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_741));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_288_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_763) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_764)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_765));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_289_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_766) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_767)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_768));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_326_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_877) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_878)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_879));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_327_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_880) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_881)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_882));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_336_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_907) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_908)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_909));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_337_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_910) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_911)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_912));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_346_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_937) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_938)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_939));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_347_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_940) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_941)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_942));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_356_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_968) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_969)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_970));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_357_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_971) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_972)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_973));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_366_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_999) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1000)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1001));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_367_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1002) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1003)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1004));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_377_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1031) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1032)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1033));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_378_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1034) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1035)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1036));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2108) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2109)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2110));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2137_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2867) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2868));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2136_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2865) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2866));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2137_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2867) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2868));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2035_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2551) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2552) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2553))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2552) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2553)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2135_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2863) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2864));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2136_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2865) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2866));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2130_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2853) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2854));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2130_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2853) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2854));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2131_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2855) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2856));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2131_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2855) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2856));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2132_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2857) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2858));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2132_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2857) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2858));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2133_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2859) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2860));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2133_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2859) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2860));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2134_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2861) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2862));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2134_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2861) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2862));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2135_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2863) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2864));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2034_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2548) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2549)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2550));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2034_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2548) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2549) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2550))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2549) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2550)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2035_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2551) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2552)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2553));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__20(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__20\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_3 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_33 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_39 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_32 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_43 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_37 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_38 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_44 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_45 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_67 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_66 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_65 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_59 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_57 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_58 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_83 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_82 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_74 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_91 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_93 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_92 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_84 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_101 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_102 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_103 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_124 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_123 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2311 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1330_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1329_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1223 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1222 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1190 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1189 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_531 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_530 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_327 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_326 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_325 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_323 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_309 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_305 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_292 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_291 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_290 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_288 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_678 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_228 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_225 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_224 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_361 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_81 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_209 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_42 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_196 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_90 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_36 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_89 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_35 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_440 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_99 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_100 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_760 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_181 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_182 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_183 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_184 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1121 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1122 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_423 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_158 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_159 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_761 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_762 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_788 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_789 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_790 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_210 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_211 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_212 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1123 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1124 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_676 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_677 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_816 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_817 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_818 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_845 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_846 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_847 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_991 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_992 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_993 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_994 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_995 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1023 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1024 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1025 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1026 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1055 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1056 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1058 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1059 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1088 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1089 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1090 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1091 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1219 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1186 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_527 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_504 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_70 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_40 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_98 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_88 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_34 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_439 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_418 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_674 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_990 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2310 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_804_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_803_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2309 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_34_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_33_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2308 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U]);
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_287_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_760) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_761) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_762))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_761) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_762)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_296_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_788) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_789) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_790))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_789) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_790)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_305_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_816) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_817) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_818))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_817) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_818)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_315_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_845) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_846) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_847))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_846) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_847)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__21(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__21\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3968d463__0;
    VlWide<3>/*95:0*/ __Vtemp_h55f836b3__0;
    VlWide<3>/*95:0*/ __Vtemp_hce5104d0__0;
    // Body
    vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state 
        = vlSelf->CoreTop__DOT__ICACHE__DOT__state;
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0 = 0U;
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1 = 0U;
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2 = 0U;
    vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3 = 0U;
    vlSelf->CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0 = 1U;
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count = 0U;
        vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor = 0ULL;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state = 0U;
    } else {
        if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count 
                = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1;
        }
        vlSelf->__Vdly__CoreTop__DOT__ICACHE__DOT__state 
            = ((IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)
                ? (((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
                    | (3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)))
                    ? 4U : 0U) : ((0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                   ? ((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready)
                                       ? 1U : 0U) : 
                                  ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                    ? ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit)
                                        ? 0U : 2U) : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_10))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) 
                & (~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid)))
                ? (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5)
                : 0U);
        if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor 
                = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) 
                    & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
                               >> 0x3fU))) ? (- vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2)
                    : vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2);
        }
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid)
                ? ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))
                    ? 0U : (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T) 
                             & (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__s))
                             ? 2U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_2)))
                : 0U);
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG 
        = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
           & (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S = (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U])));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
        = vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U];
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1823 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1755 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1731 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1732 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[0U] 
                     >> 0x14U));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
               & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
                  & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                      >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data)))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v0 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit) 
               & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
                  & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
                      >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data)))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v1 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
               & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                  & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r)))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v2 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
    if (((0U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
         & ((1U != (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
            & ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
               & ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                  & (~ (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__lru_r))))))) {
        vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3 = 1U;
        vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v3 
            = (0x1fU & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                >> 6U)));
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1__v0;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0__v0;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1__v0] = 1U;
    }
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T = (1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))
            ? 1U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__s = ((1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                                  & (0x3fU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_727_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2081) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2082) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2083))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2082) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2083)));
    __Vtemp_h3968d463__0[0U] = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
                                 << 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U] 
                                           >> 0x1fU));
    __Vtemp_h3968d463__0[1U] = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
                                 << 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
                                           >> 0x1fU));
    __Vtemp_h3968d463__0[2U] = (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
                                >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp_h55f836b3__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor);
    VL_SUB_W(3, __Vtemp_hce5104d0__0, __Vtemp_h3968d463__0, __Vtemp_h55f836b3__0);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
        = __Vtemp_hce5104d0__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
        = __Vtemp_hce5104d0__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
        = (1U & __Vtemp_hce5104d0__0[2U]);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_726_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2078) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2079)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2080));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_726_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2078) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2079) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2080))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2079) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2080)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_727_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2081) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2082)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2083));
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data 
        = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0];
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data 
        = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0];
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T 
        = (vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
           [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0] 
           & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T 
        = (vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
           [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0] 
           & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    if ((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                       >> 0x3fU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13 
            = (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18 
            = (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
    }
    if ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
         >> 0x1fU)) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16 
            = (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26 
            = (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))));
    }
    vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we 
        = ((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
           & ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
              | ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                 | ((0x47U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                    & ((0x11U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                       & ((0x6fU != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                          & ((0xeU != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                             & ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                | (0x77U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))))))))));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2115_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2814) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2815) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2816))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2815) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2816)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2116_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2818) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2819)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2820));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2116_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2818) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2819) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2820))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2819) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2820)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2112_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2802) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2803) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2804))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2803) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2804)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2113_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2806) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2807) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2808))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2807) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2808)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2115_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2814) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2815)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2816));
    if (vlSelf->CoreTop__DOT__MEM_io_out_valid) {
        vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest 
            = vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest;
    }
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
        = ((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
            ? (0xfffffffffffffffeULL & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)
            : (1ULL | (0xfffffffffffffffeULL & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2263_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2116_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2115_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2263_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2116_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2115_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2264_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2117_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2116_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2264_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2117_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2116_io_cout));
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__0(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h236fbee0__0;
    VlWide<3>/*95:0*/ __Vtemp_h4619e6d2__0;
    VlWide<3>/*95:0*/ __Vtemp_h236fbee0__1;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp_h236fbee0__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
    VL_EXTEND_WQ(65,64, __Vtemp_h4619e6d2__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6);
    VL_EXTEND_WQ(65,64, __Vtemp_h236fbee0__1, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
            = __Vtemp_h236fbee0__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
            = __Vtemp_h236fbee0__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
            = __Vtemp_h236fbee0__0[2U];
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        if ((0x3fU != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count))) {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
                = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6) 
                   << 1U);
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
                = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6) 
                    >> 0x1fU) | ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
                = ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
                            >> 0x20U)) >> 0x1fU);
        } else {
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
                = __Vtemp_h4619e6d2__0[0U];
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
                = __Vtemp_h4619e6d2__0[1U];
            vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
                = __Vtemp_h4619e6d2__0[2U];
        }
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[0U] 
            = __Vtemp_h236fbee0__1[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[1U] 
            = __Vtemp_h236fbee0__1[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_13[2U] 
            = __Vtemp_h236fbee0__1[2U];
    }
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__22(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__22\n"); );
    // Body
    if (vlSelf->CoreTop__DOT___T_7) {
        vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest 
            = vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest;
    }
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest 
            = (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                        >> 7U));
    }
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__23(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__23\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_549 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_525 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_548 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_524 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_523 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_522 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1876 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1875 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1874 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1831 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1642 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1569 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1568 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1542 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1541 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1540 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1539 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1538 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1537 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1536 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1535 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1534 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1238 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1237 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1764 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1762 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1761 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1760 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_477 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1741 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_976 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1736 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1737 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2726 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1608_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1604_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2732 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1612_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1608_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2725 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1612_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1608_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2731 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1616_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1612_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2744 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1212_io_cout) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1616_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2742 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1614_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1619_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1615_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1619_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1615_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2743 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_648_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_641_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1846))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_641_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1846)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2447 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1418_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1414_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2459 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1422_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1418_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2452 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1422_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1418_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2458 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1426_io_out_0) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1422_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2453 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1418_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1414_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2495 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1446_io_s) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1442_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2488 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1446_io_s) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1442_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2483 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1438_io_s) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1434_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2482 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1442_io_s) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1438_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2441 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1406_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1410_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1407_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1410_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1407_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2499 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1444_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1449_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1445_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1449_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1445_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2487 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1436_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1441_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1437_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1441_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1437_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2463 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1420_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1425_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1421_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1425_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1421_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2451 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1412_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1417_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1413_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1417_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1413_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2481 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1432_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1437_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1433_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1437_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1433_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2469 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1424_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1429_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1425_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1429_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1425_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2457 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1416_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1421_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1417_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1421_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1417_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2442 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_922_io_cout) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_208_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2500 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1454_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1450_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_809));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2722 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1605_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1601_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1606_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1601_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1606_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2745 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1623_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1620_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1624_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2740 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1617_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1613_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1618_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1613_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1618_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2697 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1593_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1589_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1594_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2710 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1597_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1593_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1598_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1593_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1598_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2711 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1598_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1603_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1599_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2723 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1606_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1611_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1607_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2727 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1613_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1609_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1614_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2733 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1617_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1613_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1618_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2741 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1618_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1622_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1619_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2699 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1590_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1595_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1591_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2709 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1601_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1597_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1602_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2716 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1601_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1597_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1602_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1597_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1602_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2721 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1609_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1605_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1610_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2729 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1610_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1615_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1611_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2735 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1614_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1619_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1615_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2739 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1620_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1617_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1621_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2746 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1620_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1617_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1621_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1617_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1621_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2747 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1621_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1625_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1622_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2414 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1393_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1390_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1394_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1390_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1394_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2491 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1443_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1439_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1444_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1439_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1444_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2479 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1435_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1431_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1436_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1431_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1436_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2472 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1435_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1431_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1436_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2468 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1428_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1433_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1429_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2467 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1427_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1423_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1428_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1423_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1428_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2455 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1419_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1415_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1420_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1415_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1420_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2439 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1408_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1405_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1409_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1405_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1409_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2428 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1405_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1402_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1406_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2424 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1399_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1396_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1400_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1396_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1400_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2423 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1402_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1399_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1403_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2419 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1396_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1393_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1397_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1393_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1397_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2485 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1439_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1435_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1440_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1435_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1440_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2474 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1432_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1437_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1433_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2473 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1431_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1427_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1432_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1427_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1432_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2466 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1431_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1427_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1432_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2461 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1423_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1419_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1424_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1419_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1424_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2449 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1415_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1411_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1416_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1411_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1416_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2429 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1402_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1399_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1403_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1399_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1403_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2434 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1405_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1402_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1406_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1402_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1406_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2425 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1400_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1404_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1401_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2430 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1403_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1407_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1404_io_cout));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_658_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1874) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1875) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1876))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1875) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1876)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1999_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2441) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2442));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1999_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2441) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2442));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__24(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__24\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_594 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_593 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_592 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1781 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1782 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2179 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1855 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1854 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1853 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1811 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1810 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1809 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1676 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1675 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1674 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1650 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1649 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1648 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1393 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1111 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_499 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_498 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_497 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_476 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_475 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_663 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_664 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2177 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_639 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 0xfU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_665 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_638 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_640 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1112 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1113 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2678 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1576_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1571_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1572_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1571_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1572_io_out_1)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2670 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1564_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1570_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1565_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1570_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1565_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2676 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1569_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1575_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1570_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1575_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1570_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2465 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1426_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1422_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2471 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1430_io_s) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1426_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2464 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1430_io_s) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1426_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2476 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1438_io_s) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1434_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2489 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1442_io_s) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1438_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2477 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1434_io_s) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1430_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2470 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1434_io_s) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1430_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2506 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1458_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1454_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_312_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2512 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1462_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1458_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_998_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2513 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1458_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1454_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_312_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1454_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_312_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2475 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1428_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1433_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1429_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1433_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1429_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2493 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1440_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1445_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1441_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1445_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1441_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2511 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1452_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1457_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1453_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1457_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1453_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2501 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1450_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1446_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_781))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1446_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_781)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2494 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1450_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1446_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_781));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2507 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1454_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1450_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_809))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1450_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_809)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2657 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1566_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1561_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1567_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2650 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1561_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1556_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1562_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2608 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1531_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1526_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1532_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2609 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1526_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1521_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1527_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1521_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1527_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2594 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1521_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1516_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1522_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2587 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1516_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1511_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1517_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2524 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1471_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1466_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1472_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2598 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1518_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1513_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1519_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1513_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1519_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2675 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1574_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1579_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1575_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2662 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1564_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1570_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1565_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2640 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1548_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1543_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1549_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1543_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1549_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2641 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1549_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1555_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1550_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2648 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1554_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1560_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1555_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2653 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1563_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1558_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1564_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2667 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1573_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1568_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1574_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2639 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1553_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1548_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1554_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2646 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1558_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1553_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1559_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2654 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1558_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1553_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1559_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1553_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1559_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2655 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1559_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1565_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1560_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2660 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1568_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1563_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1569_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2668 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1568_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1563_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1569_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1563_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1569_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2669 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1569_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1575_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1570_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2673 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1577_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1573_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1578_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2590 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1518_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1513_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1519_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2592 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1514_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1520_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1515_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2385 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1375_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1372_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1376_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2395 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1379_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1383_io_out_0)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1380_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2389 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1378_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1375_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1379_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2393 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1381_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1378_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1382_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2398 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1381_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1378_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1382_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1378_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1382_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2402 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1384_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1381_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1385_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1381_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1385_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2407 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1388_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1392_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1389_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2406 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1387_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1384_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1388_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1384_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1388_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2405 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1390_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1387_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1391_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2411 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1391_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1395_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1392_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2410 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1390_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1387_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1391_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1387_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1391_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2409 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1393_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1390_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1394_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2415 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1394_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1398_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1395_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2413 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1396_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1393_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1397_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2529 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1469_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1475_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1470_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2522 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1464_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1470_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1465_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2510 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1456_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1461_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1457_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2509 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1455_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1451_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1456_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1451_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1456_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2502 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1455_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1451_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1456_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2496 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1451_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1447_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1452_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2492 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1444_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1449_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1445_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2484 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1443_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1439_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1444_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2480 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1436_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1441_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1437_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2460 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1427_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1423_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1428_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2456 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1420_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1425_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1421_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2440 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1409_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1413_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1410_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2435 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1406_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1410_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1407_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2420 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1397_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1401_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1398_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2418 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1399_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1396_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1400_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2536 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1474_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1480_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1475_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2520 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1468_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1463_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1469_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2516 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1460_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1465_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1461_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2504 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1452_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1457_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1453_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2503 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1451_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1447_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1452_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1447_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1452_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2498 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1448_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1453_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1449_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2497 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1447_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1443_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1448_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1443_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1448_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2490 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1447_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1443_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1448_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2486 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1440_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1445_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1441_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2478 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1439_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1435_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1440_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2462 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1424_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1429_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1425_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2454 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1423_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1419_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1424_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2514 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1463_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1459_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1464_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2527 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1473_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1468_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1474_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2508 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1459_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1455_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1460_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2534 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1478_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1473_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1479_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2433 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1408_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1405_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1409_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2438 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1411_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1408_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1412_io_s));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_231_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_592) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_593) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_594))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_593) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_594)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_246_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_638) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_639)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_640));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_246_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_638) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_639) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_640))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_639) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_640)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_254_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_663) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_664)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_665));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_254_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_663) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_664) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_665))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_664) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_665)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_651_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1853) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1854) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1855))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1854) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1855)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__25(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__25\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2292 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_51 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_52 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_113 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_112 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_111 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2289 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_133 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_134 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_135 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2290 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2291 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2286 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2285 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1350 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1349 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[2U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1891 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1890 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1889 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1555 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1554 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1553 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1353 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1352 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1351 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1260 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1259 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1258 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1257 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_509 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_399 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_379 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_109 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_364 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_487 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1327 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1326 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_580 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_582 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_581 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1615 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 0x12U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_341 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1328 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_433 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1610 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_342 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1329 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0xaU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1611 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_343 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1330 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1612 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_344 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1331 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1613 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_345 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1614 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_434 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_435 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_579 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1497 
            = (1U & (~ (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[2U] 
                        >> 1U)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_629 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_630 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_631 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1255 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1256 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_454 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_455 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_456 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_465 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_483 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1498 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1499 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_556 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_557 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_558 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_575 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_576 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_577 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
                     >> 7U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_578 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_604 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_605 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_606 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_654 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_655 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_656 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_398 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_378 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_340 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_598 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_550 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_460 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 8U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_574 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2380 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1366_io_cout) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_860_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2372 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1362_io_cout) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_102_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2368 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1360_io_cout) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_97_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2376 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1364_io_cout) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_107_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2364 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1360_io_cout) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_97_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2375 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1366_io_cout) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_860_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2367 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1362_io_cout) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_102_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2348 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1349_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1347_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1350_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1347_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1350_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2344 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1349_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1347_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1350_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2371 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1364_io_cout) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_107_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2360 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1357_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1355_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1358_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1355_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1358_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2357 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1355_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1353_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1356_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1353_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1356_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2356 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1357_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1355_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1358_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2353 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1355_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1353_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1356_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2359 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1359_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1357_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1360_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2347 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1351_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1349_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1352_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2363 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1359_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1357_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1360_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1357_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1360_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2362 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1361_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1359_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1362_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2374 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1365_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1363_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1366_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1363_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1366_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2370 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1363_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1361_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1364_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1361_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1364_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2366 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1361_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1359_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1362_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1359_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1362_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2365 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1363_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1361_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1364_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2369 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1365_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1363_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1366_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2373 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1367_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1365_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1368_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2349 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_829_io_cout) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_832_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2355 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_834_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_838_io_out_0) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_835_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_838_io_out_0) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_835_io_out_1)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2358 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_837_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_841_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_838_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_841_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_838_io_out_1)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2361 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_840_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_844_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_841_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_844_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_841_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2379 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1368_io_cout) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1371_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2378 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1367_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1365_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1368_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1365_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1368_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2377 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1369_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1367_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1370_io_s));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2289) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2290) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2291))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2290) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2291)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_795_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2285) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2286)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2285) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2286)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2289) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2290)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2291));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_795_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2285) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2286)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_178_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_433) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_434)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_435));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_178_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_433) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_434) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_435))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_434) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_435)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_185_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_454) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_455)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_456));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_219_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_556) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_557) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_558))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_557) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_558)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_227_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_580) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_581) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_582))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_581) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_582)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_235_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_604) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_605) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_606))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_605) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_606)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_243_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_629) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_630) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_631))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_630) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_631)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_251_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_654) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_655) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_656))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_655) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_656)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_452_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1255) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1256)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1257));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_452_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1255) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1256) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1257))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1256) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1257)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_453_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1258) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1259)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1260));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_453_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1258) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1259) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1260))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1259) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1260)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_533_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1497) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1498)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1499));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_533_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1497) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1498) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1499))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1498) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1499)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_551_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1553) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1554)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1555));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_551_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1553) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1554) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1555))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1554) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1555)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_570_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1610) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1611) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1612))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1611) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1612)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_571_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1613) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1614) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1615))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1614) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1615)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_663_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1889) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1890)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1891));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_663_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1889) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1890) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1891))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1890) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1891)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__26(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__26\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_166 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_179 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_13 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_17 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2208 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2259 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 0x16U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_61 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_69 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_866 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_87 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_60 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_68 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_77 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_76 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_165 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_163 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_164 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_96 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_95 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_85 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_86 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_94 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_116 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_115 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_114 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 6U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2181 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2180 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2182 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_178 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_176 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_177 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2255 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2254 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1573 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2773 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1633_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1637_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1634_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1637_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1634_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2777 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1636_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1640_io_out_0) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1637_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1640_io_out_0) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1637_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2781 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1639_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1643_io_out_0) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1640_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1643_io_out_0) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1640_io_out_1)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2793 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1648_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1652_io_out_0) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1649_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1652_io_out_0) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1649_io_out_1)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2789 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1645_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1649_io_out_0) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1646_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1649_io_out_0) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1646_io_out_1)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2785 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1642_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1646_io_out_0) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1643_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1646_io_out_0) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1643_io_out_1)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2758 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1624_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1628_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1625_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1628_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1625_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2764 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_676_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_669_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2759 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_669_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_662_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2752 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1624_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1628_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1625_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2750 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1626_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1623_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1627_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2755 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1629_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1626_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1630_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2757 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1627_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1631_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1628_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2772 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1636_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1640_io_out_0)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1637_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2771 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1635_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1632_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1636_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1632_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1636_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2770 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1638_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1635_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1639_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2607 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1519_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1525_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1520_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1525_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1520_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2615 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1536_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1531_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1537_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2545 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1486_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1481_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1487_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2518 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1466_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1462_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1467_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2780 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1642_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1646_io_out_0)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1643_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2779 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1641_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1638_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1642_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1638_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1642_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2778 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1644_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1641_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1645_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2336 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1343_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1342_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1344_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2337 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1342_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1341_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_821_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1341_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_821_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2338 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1345_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1343_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1346_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2339 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1343_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1342_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1344_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1342_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1344_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2604 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1528_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1523_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1529_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2605 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1523_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1518_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1524_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1518_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1524_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2606 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1524_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1530_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1525_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2851 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1688_io_s) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1687_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2849 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1687_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1686_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1317_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2852 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1687_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1686_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1317_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1686_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1317_io_out_1)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2842 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1682_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1681_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1307_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1681_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1307_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2839 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1682_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1681_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1307_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2843 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1684_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1683_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1311_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2848 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1685_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1684_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1313_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1684_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1313_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2840 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1681_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1679_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1305_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1679_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1305_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2841 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1683_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1682_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1309_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2844 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1683_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1682_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1309_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1682_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1309_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2845 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1685_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1684_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1313_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2846 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1684_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1683_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1311_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1683_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1311_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2847 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1686_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1685_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1315_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2850 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1686_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1685_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1315_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1685_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1315_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2831 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1675_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1673_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1676_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1673_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1676_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2830 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1677_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1675_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1678_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2833 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1679_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1677_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1680_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2836 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1681_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1679_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1305_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2837 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1679_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1677_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1680_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1677_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1680_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2796 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1654_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1658_io_out_0)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1655_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2788 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1648_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1652_io_out_0)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1649_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2792 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1651_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1655_io_out_0)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1652_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2784 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1645_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1649_io_out_0)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1646_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2782 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1647_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1644_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1648_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2783 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1644_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1641_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1645_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1641_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1645_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2786 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1650_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1647_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1651_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2787 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1647_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1644_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1648_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1644_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1648_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2790 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1653_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1650_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1654_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2791 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1650_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1647_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1651_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1647_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1651_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2794 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1656_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1653_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1657_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2795 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1653_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1650_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1654_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1650_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1654_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2829 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1293_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1297_io_out_0) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1294_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1297_io_out_0) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1294_io_out_1)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2832 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1296_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1300_io_out_0) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1297_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1300_io_out_0) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1297_io_out_1)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2521 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1463_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1459_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1464_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1459_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1464_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2515 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1459_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1455_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1460_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1455_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1460_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2340 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_823_io_cout) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_97));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2838 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1302_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2218) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1303_io_out_1))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2218) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1303_io_out_1)));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_163) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_164)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_165));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_62_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_85) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_86)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_87));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_62_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_85) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_86) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_87))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_86) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_87)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_114) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_115)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_116));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_114) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_115) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_116))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_115) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_116)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_163) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_164) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_165))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_164) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_165)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_92_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_176) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_177)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_178));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_760_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2180) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2181) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2182))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2181) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2182)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_92_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_176) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_177) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_178))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_177) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_178)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2099_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2758) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2759));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2104_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2770) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2771)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2772));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2099_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2758) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2759));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2104_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2770) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2771) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2772))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2771) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2772)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2106_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2778) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2779)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2780));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1966_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2336) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2337));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1966_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2336) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2337));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1967_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2338) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2339) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2340))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2339) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2340)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2123_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2839) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2840));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2123_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2839) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2840));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2106_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2778) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2779) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2780))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2779) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2780)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2107_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2782) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2783)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2784));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2107_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2782) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2783) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2784))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2783) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2784)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2108_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2786) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2787)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2788));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2108_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2786) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2787) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2788))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2787) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2788)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2109_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2790) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2791)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2792));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2109_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2790) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2791) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2792))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2791) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2792)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2110_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2794) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2795)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2796));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__27(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__27\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2652 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1131_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1124_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2645 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1124_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1117_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2666 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1145_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1138_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2659 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1138_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1131_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2638 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1117_io_out_0) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1110_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2684 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1580_io_s) 
               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1576_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2677 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1580_io_s) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1576_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2683 
            = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1584_io_s) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1580_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2671 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1576_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1571_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1572_io_out_1));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2672 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1571_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1566_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1572_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1566_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1572_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2663 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1559_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1565_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1560_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1565_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1560_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2682 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1574_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1579_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1575_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1579_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1575_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2622 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1541_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1536_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1542_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2630 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1541_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1536_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1542_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1536_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1542_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2644 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1551_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1546_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1552_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1546_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1552_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2629 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1546_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1541_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1547_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2636 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1551_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1546_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1552_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2637 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1546_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1541_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1547_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1541_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1547_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2643 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1556_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1551_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1557_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2651 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1556_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1551_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1557_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1551_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1557_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2658 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1561_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1556_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1562_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1556_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1562_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2616 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1531_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1526_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1532_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1526_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1532_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2656 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1554_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1560_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1555_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1560_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1555_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2635 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1539_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1545_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1540_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1545_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1540_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2623 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1536_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1531_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1537_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1531_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1537_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2649 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1549_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1555_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1550_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1555_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1550_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2600 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1514_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1520_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1515_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1520_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1515_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2601 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1526_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1521_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1527_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2602 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1521_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1516_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1522_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1516_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1522_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2614 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1524_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1530_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1525_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1530_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1525_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2621 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1529_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1535_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1530_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1535_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1530_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2628 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1534_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1540_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1535_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1540_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1535_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2642 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1544_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1550_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1545_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1550_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1545_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2595 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1516_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1511_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1517_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1511_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1517_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2593 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1509_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1515_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1510_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1515_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1510_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2586 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1504_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1510_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1505_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1510_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1505_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2588 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1511_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1506_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1512_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1506_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1512_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2546 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1481_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1476_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1482_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1476_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1482_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2559 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1496_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1491_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1497_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2560 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1491_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1486_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1492_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1486_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1492_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2558 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1484_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1490_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1485_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1490_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1485_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2544 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1474_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1480_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1475_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1480_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1475_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2565 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1489_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1495_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1490_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1495_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1490_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2567 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1496_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1491_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1497_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1491_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1497_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2566 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1501_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1496_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1502_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2679 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1581_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1577_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1582_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2680 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1577_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1573_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1578_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1573_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1578_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2681 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1578_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1583_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1579_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2613 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1529_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1535_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1530_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2612 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1528_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1523_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1529_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1523_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1529_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2627 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1539_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1545_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1540_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2634 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1544_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1550_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1545_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2626 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1538_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1533_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1539_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1533_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1539_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2599 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1519_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1525_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1520_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2674 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1573_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1568_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1574_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1568_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1574_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2597 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1523_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1518_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1524_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2611 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1533_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1528_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1534_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2618 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1538_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1533_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1539_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2619 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1533_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1528_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1534_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1528_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1534_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2620 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1534_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1540_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1535_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2625 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1543_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1538_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1544_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2632 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1548_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1543_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1549_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2633 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1543_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1538_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1544_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1538_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1544_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2661 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1563_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1558_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1564_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1558_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1564_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2591 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1513_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1508_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1514_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1508_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1514_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2584 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1508_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1503_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1509_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1503_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1509_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2585 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1509_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1515_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1510_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2583 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1513_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1508_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1514_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2542 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1478_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1473_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1479_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1473_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1479_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2541 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1483_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1478_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1484_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2543 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1479_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1485_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1480_io_cout));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2555 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1493_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1488_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1494_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2556 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1488_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1483_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1489_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1483_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1489_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2557 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1489_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1495_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1490_io_cout));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2072_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2679) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2680) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2681))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2680) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2681)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2072_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2679) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2680)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2681));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2073_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2682) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2683)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2684));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__28(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__28\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_118 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_526 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_129 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9_io_carry) 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_117 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2126 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 9U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2125 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
                     >> 0xbU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_128 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
                     >> 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1982 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 4U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1983 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
                     >> 2U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1984 
            = (1U & vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U]);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_97 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_107 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8_io_carry) 
                     >> 1U));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_742_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2125) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2126));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_72_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_117) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_118));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_208_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_525) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_526));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_72_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_117) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_118));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_76_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_128) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_129));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_76_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_128) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_129));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2122) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2123) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2124))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2123) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2124)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_208_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_525) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_526));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_65_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_94) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_95)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_96));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_65_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_94) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_95) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_96))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_95) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_96)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_742_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2125) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2126));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_694_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1982) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1983) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1984))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1983) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1984)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_190_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_469) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_470)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_471));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_191_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_472) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_473)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_474));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_432_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1195) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1196)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1197));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_433_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1198) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1199)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1200));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_443_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1228) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1229)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1230));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_444_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1231) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1232)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1233));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2101_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2763) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2764));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2103_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2768) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2769));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2102_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2765) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2766) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2767))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2766) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2767)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2101_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2763) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2764));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2103_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2768) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2769));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2096_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2750) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2751) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2752))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2751) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2752)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2098_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2755) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2756)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2757));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2098_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2755) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2756) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2757))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2756) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2757)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2100_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2760) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2761)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2762));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2100_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2760) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2761) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2762))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2761) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2762)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2102_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2765) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2766)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2767));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1967_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2338) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2339)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2340));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1968_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2341) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2342)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2343));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1968_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2341) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2342) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2343))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2342) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2343)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1969_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2344) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2345)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2346));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1969_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2344) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2345) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2346))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2345) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2346)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1970_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2347) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2348)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2349));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1970_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2347) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2348) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2349))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2348) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2349)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1971_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2350) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2351)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2352));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1971_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2350) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2351) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2352))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2351) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2352)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1972_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2353) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2354)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2355));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1972_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2353) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2354) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2355))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2354) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2355)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1973_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2356) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2357)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2358));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1973_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2356) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2357) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2358))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2357) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2358)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1974_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2359) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2360) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2361))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2360) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2361)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1975_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2362) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2363)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2364));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1977_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2369) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2370) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2371))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2370) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2371)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1978_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2373) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2374)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2375));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1978_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2373) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2374) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2375))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2374) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2375)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1979_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2377) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2378)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2379));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1979_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2377) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2378) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2379))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2378) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2379)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2251_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2104_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2102_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2773))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2102_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2773)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2252_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2105_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2104_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2777));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2248_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2098_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2096_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2099_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2248_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2098_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2096_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2099_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2096_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2099_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2249_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2100_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2098_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2101_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2249_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2100_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2098_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2101_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2098_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2101_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2250_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2102_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2100_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2103_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2250_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2102_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2100_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2103_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2100_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2103_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2251_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2104_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2102_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2773));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2150_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1966_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1965_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2151_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1967_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1966_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2151_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1967_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1966_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2152_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1968_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1967_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2153_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1969_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1968_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2153_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1969_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1968_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2154_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1970_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1969_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2154_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1970_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1969_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2155_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1971_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1970_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2155_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1971_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1970_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2159_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1975_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1974_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2159_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1975_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1974_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2162_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1978_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1977_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2376))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1977_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2376)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2163_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1979_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1978_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2380));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2377_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2252_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2251_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2377_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2252_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2251_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2374_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2249_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2248_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2099_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2248_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2099_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2375_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2250_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2249_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2101_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2375_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2250_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2249_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2101_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2249_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2101_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2376_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2251_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2250_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2103_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2376_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2251_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2250_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2103_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2250_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2103_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2297_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2151_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2150_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2297_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2151_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2150_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2298_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2152_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2151_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2298_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2152_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2151_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2309_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2163_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2162_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2309_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2163_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2162_io_cout));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__29(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__29\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_405 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_404 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0x19U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_681 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 3U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_680 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
                     >> 5U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_424 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_425 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0x18U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_426 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0x16U));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_216_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_548) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_549));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_522) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_523)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_524));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_216_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_548) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_549));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_146_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_337) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_338)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_339));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_522) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_523) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_524))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_523) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_524)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_69_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_108) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_109)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_110));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_70_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_111) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_112)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_113));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_77_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_130) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_131) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_132))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_131) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_132)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_142) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_143)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_144));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_145) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_146)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_147));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_138_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_313) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_314)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_315));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_139_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_316) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_317)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_318));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_146_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_337) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_338) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_339))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_338) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_339)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_159_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_378) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_379) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_380))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_379) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_380)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_166_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_398) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_399)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_400));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_167_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_401) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_402)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_403));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_168_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_404) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_405) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_406))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_405) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_406)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_173_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_418) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_419) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_420))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_419) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_420)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_175_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_424) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_425) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_426))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_425) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_426)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_180_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_439) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_440)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_441));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_181_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_442) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_443)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_444));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_184_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_451) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_452) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_453))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_452) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_453)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_185_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_454) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_455) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_456))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_455) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_456)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_192_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_475) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_476)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_477));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_192_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_475) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_476) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_477))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_476) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_477)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_199_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_497) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_498)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_499));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_199_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_497) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_498) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_499))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_498) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_499)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_217_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_550) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_551) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_552))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_551) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_552)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_225_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_574) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_575)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_576));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_225_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_574) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_575) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_576))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_575) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_576)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_226_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_577) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_578)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_579));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_226_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_577) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_578) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_579))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_578) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_579)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_233_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_598) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_599)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_600));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_233_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_598) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_599) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_600))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_599) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_600)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_234_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_601) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_602)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_603));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_234_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_601) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_602) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_603))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_602) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_603)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_235_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_604) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_605)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_606));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_241_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_623) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_624)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_625));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_241_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_623) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_624) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_625))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_624) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_625)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_242_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_626) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_627)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_628));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_242_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_626) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_627) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_628))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_627) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_628)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_243_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_629) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_630)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_631));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_249_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_648) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_649)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_650));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_250_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_651) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_652)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_653));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_250_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_651) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_652) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_653))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_652) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_653)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_251_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_654) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_655)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_656));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_260_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_680) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_681)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_682));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_260_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_680) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_681) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_682))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_681) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_682)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_263_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_689) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_690)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_691));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_263_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_689) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_690) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_691))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_690) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_691)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_272_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_715) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_716)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_717));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_272_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_715) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_716) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_717))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_716) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_717)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_451_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1252) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1253)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1254));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_451_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1252) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1253) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1254))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1253) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1254)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_493_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1379) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1380) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1381))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1380) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1381)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1980_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2381) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2382)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2383));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1980_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2381) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2382) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2383))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2382) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2383)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1981_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2385) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2386)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2387));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1981_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2385) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2386) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2387))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2386) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2387)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1982_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2389) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2390)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2391));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1982_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2389) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2390) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2391))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2390) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2391)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1983_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2393) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2394)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2395));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1983_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2393) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2394) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2395))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2394) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2395)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1984_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2397) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2398)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2399));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1984_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2397) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2398) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2399))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2398) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2399)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1985_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2401) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2402)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2403));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1985_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2401) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2402) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2403))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2402) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2403)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1986_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2405) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2406)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2407));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1986_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2405) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2406) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2407))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2406) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2407)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1987_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2409) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2410)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2411));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_836_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_77_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_77_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_893_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_166_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_159_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_167_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_159_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_167_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_939_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_226_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_235_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_227_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_235_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_227_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_944_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_241_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_233_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_242_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_233_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_242_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_945_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_234_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_243_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_235_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_243_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_235_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_950_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_249_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_241_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_250_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_241_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_250_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_951_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_242_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_251_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_243_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_251_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_243_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_957_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_250_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_260_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_251_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_260_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_251_io_cout)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__30(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__30\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2446 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1409_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1413_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1410_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1413_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1410_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2647 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1553_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1548_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1554_io_s))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1548_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1554_io_s)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2448 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1419_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1415_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1420_io_s));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2450 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1416_io_cout) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1421_io_s)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1417_io_cout));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2001_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2446) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2447));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2047_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2593) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2594) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2595))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2594) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2595)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2049_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2600) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2601) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2602))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2601) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2602)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2051_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2607) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2608) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2609))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2608) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2609)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2055_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2621) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2622) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2623))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2622) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2623)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2057_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2628) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2629) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2630))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2629) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2630)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2059_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2635) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2636) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2637))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2636) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2637)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2063_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2649) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2650) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2651))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2650) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2651)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2065_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2656) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2657) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2658))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2657) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2658)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2045_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2586) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2587) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2588))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2587) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2588)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2046_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2590) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2591) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2592))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2591) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2592)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2048_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2597) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2598)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2599));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2048_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2597) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2598) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2599))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2598) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2599)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2049_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2600) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2601)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2602));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2050_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2604) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2605)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2606));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2050_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2604) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2605) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2606))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2605) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2606)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2051_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2607) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2608)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2609));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2052_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2611) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2612)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2613));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2052_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2611) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2612) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2613))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2612) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2613)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2053_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2614) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2615)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2616));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2054_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2618) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2619)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2620));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2054_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2618) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2619) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2620))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2619) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2620)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2055_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2621) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2622)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2623));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2056_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2625) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2626)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2627));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2056_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2625) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2626) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2627))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2626) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2627)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2057_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2628) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2629)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2630));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2058_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2632) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2633)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2634));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2058_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2632) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2633) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2634))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2633) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2634)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2059_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2635) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2636)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2637));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2060_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2639) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2640)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2641));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2060_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2639) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2640) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2641))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2640) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2641)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2061_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2642) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2643)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2644));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2062_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2646) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2647)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2648));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2062_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2646) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2647) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2648))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2647) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2648)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2063_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2649) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2650)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2651));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2064_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2653) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2654)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2655));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2064_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2653) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2654) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2655))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2654) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2655)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2065_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2656) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2657)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2658));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2124_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2841) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2842));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2124_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2841) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2842));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2125_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2843) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2844));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2125_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2843) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2844));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2126_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2845) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2846));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2126_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2845) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2846));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2127_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2847) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2848));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2127_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2847) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2848));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2128_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2849) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2850));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2128_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2849) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2850));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2129_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2851) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2852));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2129_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2851) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2852));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2120_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2830) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2831)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2832));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2120_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2830) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2831) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2832))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2831) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2832)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2122_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2836) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2837)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2838));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2122_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2836) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2837) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2838))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2837) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2838)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2044_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2583) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2584) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2585))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2584) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2585)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2046_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2590) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2591)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2592));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2047_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2593) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2594)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2595));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2044_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2583) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2584)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2585));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2045_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2586) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2587)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2588));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1987_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2409) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2410) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2411))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2410) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2411)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1988_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2413) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2414)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2415));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2001_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2446) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2447));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1988_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2413) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2414) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2415))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2414) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2415)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1990_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2418) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2419)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2420));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1990_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2418) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2419) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2420))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2419) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2420)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1992_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2423) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2424)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2425));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1992_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2423) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2424) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2425))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2424) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2425)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1994_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2428) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2429)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2430));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1994_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2428) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2429) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2430))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2429) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2430)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1996_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2433) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2434)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2435));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1996_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2433) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2434) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2435))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2434) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2435)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1998_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2438) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2439)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2440));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1998_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2438) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2439) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2440))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2439) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2440)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2002_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2448) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2449)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2450));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2002_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2448) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2449) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2450))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2449) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2450)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2003_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2451) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2452)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2453));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2004_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2454) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2455)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2456));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2004_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2454) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2455) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2456))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2455) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2456)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2005_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2457) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2458)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2459));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2006_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2460) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2461)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2462));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2006_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2460) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2461) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2462))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2461) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2462)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2007_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2463) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2464)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2465));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2008_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2466) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2467)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2468));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2008_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2466) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2467) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2468))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2467) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2468)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2009_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2469) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2470)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2471));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2010_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2472) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2473)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2474));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2010_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2472) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2473) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2474))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2473) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2474)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2011_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2475) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2476)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2477));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2012_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2478) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2479)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2480));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2012_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2478) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2479) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2480))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2479) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2480)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2013_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2481) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2482)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2483));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2014_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2484) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2485)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2486));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2014_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2484) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2485) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2486))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2485) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2486)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2015_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2487) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2488)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2489));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2032_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2541) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2542)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2543));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2032_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2541) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2542) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2543))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2542) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2543)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2033_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2544) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2545)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2546));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2213_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2048_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2046_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2049_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2046_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2049_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2270_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2123_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2122_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2270_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2123_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2122_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2272_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2125_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2124_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2272_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2125_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2124_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2273_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2126_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2125_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2273_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2126_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2125_io_out_1));
}
