// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop___024root.h"

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__31(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__31\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2664 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1571_io_s) 
                ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1566_io_cout)) 
               ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1572_io_out_0));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2665 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1566_io_s) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1561_io_cout) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1567_io_out_0))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1561_io_cout) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1567_io_out_0)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2505 
            = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1448_io_cout) 
                & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1453_io_s) 
                   | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1449_io_cout))) 
               | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1453_io_s) 
                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1449_io_cout)));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_781 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_809 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26_io_carry) 
                     >> 1U));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2077_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2694) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2695) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2696))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2695) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2696)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2079_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2700) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2701) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2702))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2701) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2702)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2081_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2706) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2707) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2708))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2707) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2708)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2083_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2712) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2713) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2714))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2713) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2714)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2085_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2718) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2719) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2720))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2719) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2720)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2087_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2724) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2725) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2726))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2725) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2726)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2067_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2663) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2664) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2665))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2664) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2665)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2069_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2670) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2671) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2672))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2671) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2672)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2071_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2676) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2677) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2678))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2677) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2678)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2073_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2682) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2683) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2684))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2683) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2684)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2021_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2505) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2506) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2507))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2506) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2507)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2023_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2511) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2512) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2513))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2512) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2513)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2029_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2530) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2531) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2532))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2531) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2532)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2031_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2537) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2538) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2539))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2538) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2539)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2076_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2691) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2692) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2693))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2692) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2693)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2078_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2697) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2698)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2699));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2078_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2697) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2698) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2699))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2698) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2699)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2079_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2700) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2701)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2702));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2080_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2703) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2704)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2705));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2080_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2703) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2704) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2705))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2704) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2705)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2081_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2706) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2707)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2708));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2082_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2709) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2710)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2711));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2082_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2709) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2710) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2711))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2710) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2711)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2083_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2712) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2713)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2714));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2084_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2715) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2716)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2717));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2084_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2715) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2716) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2717))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2716) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2717)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2085_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2718) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2719)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2720));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2086_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2721) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2722)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2723));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2086_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2721) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2722) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2723))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2722) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2723)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2087_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2724) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2725)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2726));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2088_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2727) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2728)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2729));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2089_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2730) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2731)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2732));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2074_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2685) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2686) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2687))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2686) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2687)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2076_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2691) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2692)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2693));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2074_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2685) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2686)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2687));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2066_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2660) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2661)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2662));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2066_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2660) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2661) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2662))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2661) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2662)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2067_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2663) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2664)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2665));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2068_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2667) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2668)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2669));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2068_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2667) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2668) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2669))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2668) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2669)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2069_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2670) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2671)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2672));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2070_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2673) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2674)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2675));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2070_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2673) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2674) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2675))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2674) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2675)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2071_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2676) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2677)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2678));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2016_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2490) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2491) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2492))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2491) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2492)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2018_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2496) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2497)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2498));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2018_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2496) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2497) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2498))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2497) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2498)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2019_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2499) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2500)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2501));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2020_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2502) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2503)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2504));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2020_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2502) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2503) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2504))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2503) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2504)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2021_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2505) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2506)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2507));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2022_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2508) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2509)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2510));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2022_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2508) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2509) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2510))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2509) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2510)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2023_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2511) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2512)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2513));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2028_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2527) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2528)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2529));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2029_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2530) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2531)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2532));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2030_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2534) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2535)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2536));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2031_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2537) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2538)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2539));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2237_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2076_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2074_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2077_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2074_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2077_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2238_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2078_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2076_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2079_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2238_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2078_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2076_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2079_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2076_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2079_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2239_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2080_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2078_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2081_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2239_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2080_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2078_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2081_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2078_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2081_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2240_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2082_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2080_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2083_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2240_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2082_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2080_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2083_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2080_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2083_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2241_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2084_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2082_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2085_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2241_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2084_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2082_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2085_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2082_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2085_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2242_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2086_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2084_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2087_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2242_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2086_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2084_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2087_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2084_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2087_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2243_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2088_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2086_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2089_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2233_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2068_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2066_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2069_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2066_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2069_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2234_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2070_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2068_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2071_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2068_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2071_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2235_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2072_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2070_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2073_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2070_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2073_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2188_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2020_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2018_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2021_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2018_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2021_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2189_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2022_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2020_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2023_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2020_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2023_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2238_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2237_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2077_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2363_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2238_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2237_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2077_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2237_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2077_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2239_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2238_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2079_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2364_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2239_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2238_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2079_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2238_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2079_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2240_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2239_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2081_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2365_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2240_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2239_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2081_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2239_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2081_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2241_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2240_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2083_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2366_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2241_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2240_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2083_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2240_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2083_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2242_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2241_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2085_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2367_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2242_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2241_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2085_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2241_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2085_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2368_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2243_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2242_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2087_io_cout));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__33(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__33\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1 
        = (vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC 
           + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm);
    vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid 
        = ((((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
             & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
            & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))
            ? (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_rdata_rep_valid)
            : (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
                | ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                   & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)))) 
               & (~ (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_1 = ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                              ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC
                                              : 0ULL);
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__2(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
        = ((((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
             & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
            & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))
            ? vlSelf->CoreTop__DOT__MMEM__DOT__rdata
            : (((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
                & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit))
                ? ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                    : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                        : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                            : ((3U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U])))
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U])))
                                    : ((5U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                        : ((6U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                                : 0ULL))))))))
                : ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                    : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                        : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U])))
                            : ((3U == (7U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                     >> 3U))))
                                ? (((QData)((IData)(
                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U])))
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                         >> 3U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U])))
                                    : ((5U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU])))
                                        : ((6U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
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
                                                           (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                            >> 3U))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                                : 0ULL))))))))));
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__3(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27 
        = (0xffU & ((0U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                     ? (IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata)
                     : ((1U == (7U & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                         ? (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                    >> 8U)) : ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                ? (IData)(
                                                          (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                           >> 0x10U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                    ? (IData)(
                                                              (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                               >> 0x18U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                     ? (IData)(
                                                               (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                >> 0x20U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                      ? (IData)(
                                                                (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                 >> 0x28U))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                       ? (IData)(
                                                                 (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                  >> 0x30U))
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp)))
                                                        ? (IData)(
                                                                  (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                   >> 0x38U))
                                                        : 0U)))))))));
    vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44 
        = (0xffffU & ((0U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                            >> 1U))))
                       ? (IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata)
                       : ((1U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                >> 1U))))
                           ? (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                      >> 0x10U)) : 
                          ((2U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                 >> 1U))))
                            ? (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                       >> 0x20U)) : 
                           ((3U == (3U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                  >> 1U))))
                             ? (IData)((vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                        >> 0x30U)) : 0U)))));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__35(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__35\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = 0x80000000ULL;
    } else if (((IData)(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump) 
                | ((((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                    & (IData)(vlSelf->CoreTop__DOT__valid_1)) 
                   & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))))) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = ((0x19U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                                : vlSelf->CoreTop__DOT__EX__DOT___GEN_289);
    } else if (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                & (IData)(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid))) {
        vlSelf->CoreTop__DOT__IF__DOT__temp = vlSelf->CoreTop__DOT__IF__DOT___temp_T_3;
    }
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__4(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData 
        = ((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))
            ? ((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata
                : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                    ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                      >> 2U))) ? (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                                >> 0x3fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                     >> 0x20U))))
                        : (((QData)((IData)(((1U & (IData)(
                                                           (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                            >> 0x1fU)))
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata))))
                    : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                        ? ((1U & (IData)((vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                          >> 2U))) ? (QData)((IData)(
                                                                     (vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                                                                      >> 0x20U)))
                            : (QData)((IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata)))
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
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__5(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2 
        = ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
             & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2))) 
            & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
            ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
            : vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2);
    vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1 
        = ((((IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen) 
             & ((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest) 
                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1))) 
            & (0U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest)))
            ? vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData
            : vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1);
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__37(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__37\n"); );
    // Body
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T) 
           & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data));
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T) 
           & ((vlSelf->CoreTop__DOT__IF__DOT__temp 
               >> 0xbU) == vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data));
    vlSelf->CoreTop__DOT__valid_1 = ((~ (IData)(vlSelf->reset)) 
                                     & ((~ (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)) 
                                        & (IData)(vlSelf->CoreTop__DOT___GEN_6)));
    if (vlSelf->CoreTop__DOT___T_4) {
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid 
            = (1U & (~ (((0U == ((0x13U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                  ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))) 
                         | (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)) 
                        | (~ (IData)(vlSelf->CoreTop__DOT__valid)))));
        vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype 
            = ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316));
    }
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__6(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__6\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__src2 = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                            ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                            : vlSelf->CoreTop__DOT__EX__DOT___GEN_3);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
            ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
            : vlSelf->CoreTop__DOT__EX__DOT___GEN_1);
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__38(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__38\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst = vlSelf->__Vdly__CoreTop__DOT__ID_io_in_bits_r_Inst;
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__7(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__7\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
        = (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
           - vlSelf->CoreTop__DOT__EX__DOT__src2);
    vlSelf->CoreTop__DOT__EX__DOT___T_39 = (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57 
                                            | vlSelf->CoreTop__DOT__EX__DOT___shift_result_T);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
        = (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
           + vlSelf->CoreTop__DOT__EX__DOT__src2);
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__39(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__39\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__valid_1) & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    vlSelf->CoreTop__DOT__EX__DOT__csr_data = ((0x17U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                : (
                                                   (0x18U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                    : 0ULL));
    vlSelf->CoreTop__DOT__EX__DOT__is_div = (((((((
                                                   (((0x43U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                     | (0x13U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                    | (0x79U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                   | (0x10U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                  | (0x12U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                 | (0xfU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                | (0x7aU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                               | (0xdU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                                             & (IData)(vlSelf->CoreTop__DOT__valid_1));
    vlSelf->CoreTop__DOT__EX__DOT__is_mul = ((((0x78U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                               | (7U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                                             & (IData)(vlSelf->CoreTop__DOT__valid_1));
    vlSelf->CoreTop__DOT__EX__DOT__is_divw = ((((0x79U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                | (0x10U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                               | (0x7aU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                              | (0xdU 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
    vlSelf->CoreTop__DOT__EX__DOT___is_div_sign_T_2 
        = ((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
           | (0x79U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__8(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__8\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)));
    if (vlSelf->CoreTop__DOT__EX__DOT__is_mul) {
        vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2 
            = vlSelf->CoreTop__DOT__EX__DOT__src2;
        vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1 
            = vlSelf->CoreTop__DOT__EX__DOT___shift_result_T;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2 
            = (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2));
        vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1 
            = (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T));
    }
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__40(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__40\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT___is_div_sign_T_2) 
            | (0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
           | (0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__9(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__9\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__is_divw) {
        if (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) {
            vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
                = (((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src2 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
            vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                = (((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T)));
        } else {
            vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
                = (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__src2));
            vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                = (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T));
        }
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
            = vlSelf->CoreTop__DOT__EX__DOT__src2;
        vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
            = vlSelf->CoreTop__DOT__EX__DOT___shift_result_T;
    }
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2 
        = ((2U & ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                           >> 0x3fU)) << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
                                                            >> 0x3fU))));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__41(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__41\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1292 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1291 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
                     >> 0x17U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_293 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
                     >> 0x13U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_294 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_295 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
                     >> 0xfU));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_64_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_91) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_92) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_93))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_92) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_93)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_67_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_101) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_102) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_103))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_102) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_103)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_74_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_122) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_123) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_124))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_123) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_124)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_462_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1286) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1287)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1286) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1287)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_483_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1349) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1350)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_483_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1349) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1350)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1349) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1350)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_34) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_35)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_36));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_34) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_35) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_36))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_35) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_36)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_46_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_37) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_38)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_39));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_40) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_41)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_42));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_40) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_41) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_42))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_41) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_42)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_48_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_43) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_44)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_45));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_49_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_47) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_48)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_49));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_50_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_50) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_51)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_52));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_63_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_88) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_89) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_90))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_89) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_90)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_66_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_98) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_99)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_100));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_66_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_98) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_99) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_100))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_99) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_100)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_67_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_101) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_102)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_103));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_93_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_180) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_181) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_182))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_181) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_182)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_98_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_194) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_195)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_196));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_98_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_194) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_195) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_196))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_195) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_196)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_99_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_197) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_198)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_199));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_99_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_197) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_198) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_199))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_198) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_199)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_103_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_208) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_209)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_210));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_103_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_208) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_209) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_210))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_209) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_210)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_104_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_211) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_212)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_213));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_105_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_214) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_215)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_216));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_131_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_293) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_294) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_295))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_294) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_295)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_306_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_819) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_820)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_821));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_307_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_822) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_823)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_824));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_316_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_848) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_849)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_850));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_317_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_851) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_852)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_853));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_318_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_854) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_855)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_856));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_318_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_854) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_855) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_856))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_855) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_856)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_328_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_883) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_884)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_885));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_328_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_883) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_884) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_885))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_884) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_885)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_388_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1063) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1064)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1065));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_389_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1066) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1067)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1068));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_390_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1069) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1070)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1071));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_390_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1069) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1070) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1071))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1070) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1071)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_399_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1096) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1097)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1098));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_400_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1099) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1100)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1101));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_401_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1102) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1103)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1104));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_401_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1102) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1103) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1104))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1103) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1104)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_410_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1129) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1130)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1131));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_411_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1132) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1133)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1134));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_412_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1135) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1136)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1137));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_412_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1135) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1136) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1137))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1136) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1137)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_421_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1162) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1163)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1164));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_422_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1165) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1166)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1167));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_423_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1168) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1169)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1170));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_423_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1168) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1169) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1170))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1169) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1170)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_463_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1288) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1289) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1290))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1289) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1290)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_464_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1291) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1292) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1293))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1292) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1293)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_473_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1317) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1318)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1319));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_473_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1317) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1318) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1319))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1318) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1319)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_484_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1351) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1352)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1353));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_484_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1351) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1352) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1353))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1352) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1353)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_812_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_48_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_812_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_48_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_48_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_814_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_49_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_50_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_814_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_49_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_50_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_50_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1104_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_483_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_473_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_484_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1104_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_483_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_473_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_484_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_473_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_484_io_s)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__42(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__42\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1907 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1908 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2162 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2176 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
                     >> 0xdU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2174 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0x11U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1753 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
                     >> 0x1bU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1752 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
                     >> 0x1dU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1751 
            = (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
               >> 0x1fU);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1775 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1776 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
                     >> 0x1cU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1777 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
                     >> 0x1aU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2281 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
                     >> 0x1eU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1144 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
                     >> 0x10U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1145 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
                     >> 0xeU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1146 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
                     >> 0xcU));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1947 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[0U] 
                     >> 0x1eU));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_669_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1907) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1908));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_669_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1907) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1908));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_676_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1927) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1928));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_676_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1927) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1928));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_662_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1886) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1887)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1888));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_754_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2162) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2163)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2164));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_754_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2162) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2163) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2164))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2163) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2164)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_758_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2174) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2175)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2176));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_758_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2174) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2175) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2176))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2175) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2176)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_786_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2256) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2257) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2258))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2257) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2258)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_752_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2156) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2157) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2158))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2157) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2158)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_627_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1781) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1782)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1781) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1782)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_656_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1869) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1870)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_393_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1078) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1079) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1080))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1079) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1080)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_404_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1111) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1112) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1113))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1112) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1113)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_415_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1144) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1145) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1146))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1145) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1146)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_467_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1300) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1301) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1302))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1301) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1302)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_478_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1332) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1333) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1334))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1333) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1334)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_573_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1619) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1620) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1621))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1620) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1621)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_583_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1648) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1649)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1650));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_583_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1648) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1649) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1650))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1649) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1650)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_589_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1665) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1666) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1667))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1666) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1667)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_597_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1690) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1691) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1692))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1691) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1692)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_636_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1806) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1807)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1808));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_636_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1806) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1807) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1808))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1807) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1808)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_637_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1809) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1810)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1811));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_637_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1809) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1810) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1811))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1810) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1811)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_644_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1831) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1832) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1833))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1832) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1833)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_650_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1850) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1851)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1852));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_650_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1850) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1851) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1852))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1851) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1852)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_651_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1853) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1854)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1855));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_652_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1856) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1857)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1858));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_653_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1859) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1860)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1861));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_657_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1871) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1872)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1873));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_657_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1871) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1872) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1873))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1872) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1873)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_658_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1874) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1875)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1876));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_659_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1877) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1878) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1879))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1878) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1879)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_667_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1901) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1902) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1903))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1902) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1903)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_674_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1921) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1922) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1923))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1922) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1923)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_675_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1924) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1925)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1926));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_682_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1944) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1945)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1946));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_780_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2240) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2241)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2242));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_786_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2256) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2257)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2258));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2095_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2748) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2749));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2097_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2753) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2754));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2093_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2742) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2743) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2744))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2743) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2744)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2027_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2523) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2524) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2525))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2524) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2525)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2039_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2565) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2566) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2567))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2566) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2567)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2041_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2572) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2573) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2574))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2573) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2574)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2095_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2748) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2749));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2097_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2753) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2754));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2088_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2727) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2728) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2729))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2728) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2729)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2090_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2733) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2734)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2735));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2090_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2733) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2734) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2735))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2734) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2735)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2091_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2736) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2737)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2738));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2092_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2739) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2740)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2741));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2092_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2739) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2740) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2741))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2740) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2741)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2093_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2742) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2743)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2744));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2094_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2745) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2746)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2747));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2094_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2745) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2746) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2747))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2746) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2747)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2096_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2750) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2751)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2752));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2024_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2514) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2515)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2516));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2024_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2514) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2515) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2516))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2515) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2516)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2025_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2517) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2518)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2519));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2026_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2520) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2521)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2522));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2026_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2520) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2521) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2522))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2521) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2522)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2027_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2523) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2524)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2525));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2028_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2527) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2528) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2529))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2528) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2529)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2030_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2534) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2535) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2536))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2535) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2536)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2036_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2555) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2556)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2557));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2037_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2558) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2559)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2560));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2036_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2555) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2556) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2557))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2556) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2557)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2038_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2562) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2563)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2564));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2039_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2565) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2566)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2567));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2038_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2562) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2563) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2564))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2563) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2564)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2040_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2569) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2570)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2571));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2041_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2572) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2573)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2574));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2040_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2569) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2570) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2571))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2570) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2571)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1237_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_676_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_669_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1317_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_786_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2266));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1223_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_656_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_649_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_657_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1223_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_656_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_649_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_657_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_649_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_657_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1236_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_667_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_675_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_668_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1236_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_667_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_675_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_668_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_675_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_668_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1241_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_674_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_682_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_675_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1241_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_674_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_682_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_675_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_682_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_675_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2244_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2090_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2088_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2091_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2245_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2092_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2090_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2093_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2245_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2092_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2090_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2093_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2090_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2093_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2246_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2094_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2092_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2095_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2246_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2094_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2092_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2095_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2092_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2095_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2247_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2096_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2094_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2097_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2247_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2096_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2094_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2097_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2094_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2097_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1242_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1947) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_676_io_out_1));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__43(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__43\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2089_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2730) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2731) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2732))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2731) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2732)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2091_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2736) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2737) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2738))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2737) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2738)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2019_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2499) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2500) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2501))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2500) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2501)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2053_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2614) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2615) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2616))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2615) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2616)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2061_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2642) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2643) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2644))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2643) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2644)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2025_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2517) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2518) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2519))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2518) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2519)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2033_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2544) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2545) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2546))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2545) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2546)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2037_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2558) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2559) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2560))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2559) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2560)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2212_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2045_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2596));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2214_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2047_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2603));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2216_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2049_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2610));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2218_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2051_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2617));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2220_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2053_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2624));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2222_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2055_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2631));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2224_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2057_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2638));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2226_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2059_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2645));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2228_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2061_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2652));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2230_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2063_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2659));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2232_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2065_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2666));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2200_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2033_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2554));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2202_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2035_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2561));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2243_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2088_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2086_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2089_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2086_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2089_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2244_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2090_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2088_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2091_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2088_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2091_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2214_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2047_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2603));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2216_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2049_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2610));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2218_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2051_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2617));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2220_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2053_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2624));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2222_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2055_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2631));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2224_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2057_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2638));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2226_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2059_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2645));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2228_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2061_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2652));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2230_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2063_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2659));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2232_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2065_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2666));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2211_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2046_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2044_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2047_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2044_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2047_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2213_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2048_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2046_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2049_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2215_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2050_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2048_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2051_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2215_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2050_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2048_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2051_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2048_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2051_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2217_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2052_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2050_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2053_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2217_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2052_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2050_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2053_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2050_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2053_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2219_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2054_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2052_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2055_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2219_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2054_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2052_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2055_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2052_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2055_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2221_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2056_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2054_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2057_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2221_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2056_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2054_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2057_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2054_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2057_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2223_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2058_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2056_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2059_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2223_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2058_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2056_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2059_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2056_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2059_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2225_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2060_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2058_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2061_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2225_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2060_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2058_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2061_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2058_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2061_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2227_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2062_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2060_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2063_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2227_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2062_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2060_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2063_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2060_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2063_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2229_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2064_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2062_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2065_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2229_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2064_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2062_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2065_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2062_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2065_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2231_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2066_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2064_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2067_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2231_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2066_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2064_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2067_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2064_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2067_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2233_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2068_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2066_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2069_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2192_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2025_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2526));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2194_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2027_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2533));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2196_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2029_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2540));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2198_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2031_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2547));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2200_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2033_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2554));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2202_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2035_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2561));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2204_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2037_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2568));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2172_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1988_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1987_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1989_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1987_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1989_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2173_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1990_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1988_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1991_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2173_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1990_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1988_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1991_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1988_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1991_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2174_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1992_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1990_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1993_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2174_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1992_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1990_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1993_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1990_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1993_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2175_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1994_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1992_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1995_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2175_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1994_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1992_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1995_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1992_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1995_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2176_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1996_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1994_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1997_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2176_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1996_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1994_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1997_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1994_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1997_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2177_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1998_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1996_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1999_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2187_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2018_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2016_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2019_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2187_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2018_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2016_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2019_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2016_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2019_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2188_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2020_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2018_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2021_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2189_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2022_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2020_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2023_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2190_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2024_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2022_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2025_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2190_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2024_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2022_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2025_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2022_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2025_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2191_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2026_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2024_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2027_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2191_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2026_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2024_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2027_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2024_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2027_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2193_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2028_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2026_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2029_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2193_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2028_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2026_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2029_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2026_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2029_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2195_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2030_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2028_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2031_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2195_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2030_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2028_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2031_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2028_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2031_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2197_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2032_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2030_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2033_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2197_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2032_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2030_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2033_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2030_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2033_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2199_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2034_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2032_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2035_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2199_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2034_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2032_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2035_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2032_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2035_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2201_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2036_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2034_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2037_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2201_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2036_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2034_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2037_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2034_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2037_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2203_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2038_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2036_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2039_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2206_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2039_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2575));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2203_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2038_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2036_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2039_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2036_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2039_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2205_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2040_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2038_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2041_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2208_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2041_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2582));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2210_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2043_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2589));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2205_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2040_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2038_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2041_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2038_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2041_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2207_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2042_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2040_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2043_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2207_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2042_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2040_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2043_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2040_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2043_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2209_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2044_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2042_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2045_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2358_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2233_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2231_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2067_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2358_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2233_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2231_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2067_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2231_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2067_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2319_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2173_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2172_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1989_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2319_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2173_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2172_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1989_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2172_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1989_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2320_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2174_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2173_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1991_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2173_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1991_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2321_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2175_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2174_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1993_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2174_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1993_io_out_1)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__44(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__44\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_838 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27_io_carry));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_867 
            = (1U & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27_io_carry) 
                     >> 1U));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_312_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_837) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_838));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_626_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1778) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1779));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_634_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1801) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1802));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_165_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_396) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_397));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_602_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1705) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1706) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1707))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1706) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1707)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_312_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_837) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_838));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_866) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_867));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_165_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_396) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_397));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_172_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_416) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_417));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_172_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_416) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_417));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_179_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_436) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_437)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_438));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_179_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_436) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_437) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_438))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_437) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_438)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_186_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_457) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_458)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_459));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_866) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_867));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_186_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_457) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_458) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_459))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_458) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_459)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_193_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_478) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_479)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_480));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_193_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_478) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_479) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_480))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_479) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_480)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_332_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_895) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_896)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_897));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_332_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_895) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_896) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_897))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_896) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_897)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_762_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2186) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2187));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_762_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2186) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2187));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_766_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2197) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2198));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_766_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2197) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2198));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_633_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1798) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1799) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1800))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1799) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1800)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_768_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2202) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2203) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2204))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2203) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2204)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_771_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2212) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2213) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2214))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2213) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2214)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_777_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2231) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2232) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2233))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2232) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2233)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_783_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2248) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2249) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2250))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2249) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2250)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_764_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2191) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2192) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2193))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2192) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2193)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2194) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2195)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2196));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2194) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2195) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2196))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2195) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2196)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_122_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_266) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_267) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_268))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_267) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_268)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_626_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1778) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1779));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_634_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1801) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1802));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_633_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1798) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1799)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1800));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_560_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1581) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1582)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_670_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1910) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1911)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_683_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1949) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1950)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_683_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1949) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1950)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1949) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1950)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_718_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2054) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2055)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_763_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2189) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2190)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_763_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2189) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2190)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2189) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2190)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_770_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2210) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2211)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_770_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2210) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2211)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2210) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2211)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_116_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_247) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_248) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_249))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_248) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_249)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_274_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_721) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_722) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_723))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_722) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_723)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_292_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_775) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_776) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_777))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_776) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_777)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_298_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_794) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_795) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_796))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_795) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_796)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_301_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_803) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_804) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_805))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_804) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_805)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_330_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_889) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_890) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_891))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_890) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_891)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_340_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_919) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_920) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_921))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_920) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_921)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_358_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_974) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_975)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_976));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_358_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_974) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_975) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_976))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_975) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_976)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_368_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1005) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1006)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1007));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_368_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1005) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1006) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1007))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1006) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1007)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_536_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1506) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1507) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1508))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1507) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1508)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_545_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1534) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1535)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1536));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_545_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1534) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1535) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1536))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1535) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1536)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_546_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1537) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1538)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1539));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_546_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1537) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1538) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1539))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1538) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1539)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_547_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1540) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1541)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1542));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_547_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1540) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1541) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1542))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1541) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1542)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_554_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1562) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1563)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1564));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_555_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1565) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1566)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1567));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_561_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1583) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1584)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1585));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_562_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1586) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1587)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1588));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_570_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1610) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1611)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1612));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_571_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1613) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1614)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1615));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_580_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1639) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1640)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1641));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_580_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1639) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1640) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1641))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1640) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1641)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_591_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1671) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1672) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1673))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1672) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1673)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_592_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1674) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1675)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1676));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_592_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1674) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1675) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1676))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1675) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1676)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_602_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1705) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1706)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1707));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_666_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1898) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1899) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1900))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1899) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1900)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_671_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1912) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1913)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1914));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_672_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1915) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1916)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1917));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_673_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1918) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1919)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1920));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_674_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1921) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1922)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1923));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_677_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1929) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1930)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1931));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_678_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1932) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1933)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1934));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_678_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1932) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1933) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1934))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1933) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1934)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_679_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1935) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1936)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1937));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_679_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1935) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1936) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1937))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1936) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1937)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_684_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1951) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1952)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1953));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_685_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1954) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1955)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1956));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_689_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1967) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1968)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1969));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_689_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1967) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1968) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1969))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1968) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1969)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_690_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1970) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1971)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1972));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_691_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1973) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1974)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1975));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_719_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2056) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2057)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2058));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_720_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2059) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2060)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2061));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_723_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2069) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2070)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2071));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_724_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2072) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2073)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2074));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_725_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2075) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2076)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2077));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_759_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2177) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2178)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2179));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_759_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2177) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2178) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2179))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2178) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2179)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_760_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2180) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2181)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2182));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_764_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2191) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2192)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2193));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_767_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2199) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2200)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2201));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_767_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2199) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2200) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2201))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2200) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2201)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_768_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2202) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2203)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2204));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_771_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2212) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2213)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2214));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_773_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2219) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2220)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2221));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_773_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2219) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2220) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2221))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2220) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2221)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_777_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2231) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2232)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2233));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_783_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2248) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2249)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2250));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_998_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_312_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_998_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_312_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1005_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_332_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1005_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_332_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1300_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_766_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_762_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1303_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2208) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_766_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_868_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_122_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_128_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_868_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_122_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_128_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_897_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_172_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_165_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_902_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_179_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_172_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_863_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_121_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_116_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_122_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_863_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_121_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_116_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_122_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_116_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_122_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_973_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_274_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_284_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_275_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_973_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_274_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_284_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_275_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_284_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_275_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_979_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_283_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_293_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_284_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_979_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_283_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_293_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_284_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_293_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_284_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_985_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_292_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_302_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_293_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_985_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_292_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_302_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_293_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_302_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_293_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_989_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_298_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_308_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_299_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_989_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_298_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_308_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_299_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_308_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_299_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_990_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_309_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_300_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_310_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_991_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_301_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_311_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_302_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_991_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_301_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_311_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_302_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_311_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_302_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_996_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_319_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_309_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_320_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_309_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_320_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1003_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_329_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_319_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_330_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_319_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_330_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1011_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_330_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_341_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_331_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1011_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_330_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_341_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_331_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_341_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_331_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1018_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_340_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_351_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_341_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1018_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_340_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_351_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_341_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_351_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_341_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1025_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_350_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_361_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_351_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1154_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_554_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_545_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_555_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_545_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_555_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1158_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_560_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_551_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_561_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_551_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_561_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1164_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_569_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_560_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_570_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1164_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_569_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_560_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_570_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_560_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_570_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1165_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_561_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_571_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_562_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1165_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_561_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_571_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_562_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_571_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_562_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1171_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_570_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_580_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_571_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_580_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_571_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1228_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_663_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_656_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_664_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_656_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_664_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1233_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_670_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_663_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_671_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1233_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_670_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_663_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_671_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_663_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_671_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1234_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_664_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_672_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_665_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1234_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_664_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_672_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_665_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_672_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_665_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1235_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_673_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_666_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_674_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1235_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_673_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_666_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_674_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_666_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_674_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1238_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_677_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_670_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_678_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1239_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_671_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_679_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_672_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1239_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_671_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_679_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_672_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_679_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_672_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1243_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_683_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_677_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_684_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_677_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_684_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1244_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_678_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_685_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_679_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_685_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_679_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1267_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_718_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_713_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_719_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_713_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_719_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1271_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_723_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_718_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_724_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1271_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_723_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_718_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_724_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_718_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_724_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1272_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_719_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_725_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_720_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1272_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_719_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_725_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_720_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_725_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_720_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1273_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_726_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_721_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_727_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_721_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_727_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1295_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_759_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_755_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_760_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_755_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_760_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2252_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2105_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2104_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2777))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2104_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2777)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2253_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2106_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2105_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2781));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2253_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2106_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2105_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2781))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2105_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2781)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2254_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2107_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2106_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2785));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2254_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2107_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2106_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2785))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2106_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2785)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2255_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2108_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2107_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2789));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2255_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2108_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2107_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2789))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2107_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2789)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2256_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2109_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2108_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2793));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2256_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2109_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2108_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2793))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2108_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2793)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2257_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2110_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2109_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2797));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1467_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1005_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_998_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1629_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1233_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1228_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1234_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1629_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1233_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1228_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1234_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1228_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1234_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_912_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_193_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_186_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_481));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_917_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_200_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_193_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_503));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2378_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2253_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2252_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2378_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2253_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2252_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2379_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2254_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2253_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2379_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2254_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2253_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2380_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2255_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2254_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2380_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2255_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2254_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2381_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2256_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2255_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2381_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2256_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2255_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2382_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2257_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2256_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2382_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2257_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2256_io_cout));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__45(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__45\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_794_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2282) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2283));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_610_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1730) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1731)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1732));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1751) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1752)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1753));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1751) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1752) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1753))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1752) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1753)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_618_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1754) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1755)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1756));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1775) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1776)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1777));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1775) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1776) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1777))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1776) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1777)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_794_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2282) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2283));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_796_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2287) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2288));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_313_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_839) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_840) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_841))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_840) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_841)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_323_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_868) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_869)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_870));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_323_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_868) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_869) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_870))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_869) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_870)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_324_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_871) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_872)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_873));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_333_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_898) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_899)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_900));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_333_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_898) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_899) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_900))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_899) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_900)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_334_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_901) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_902)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_903));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_334_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_901) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_902) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_903))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_902) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_903)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_335_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_904) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_905)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_906));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_343_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_928) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_929)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_930));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_343_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_928) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_929) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_930))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_929) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_930)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_344_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_931) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_932)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_933));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_344_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_931) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_932) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_933))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_932) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_933)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_345_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_934) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_935)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_936));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_353_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_959) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_960)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_961));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_353_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_959) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_960) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_961))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_960) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_961)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_354_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_962) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_963)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_964));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_354_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_962) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_963) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_964))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_963) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_964)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_355_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_965) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_966)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_967));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_363_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_990) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_991)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_992));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_363_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_990) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_991) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_992))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_991) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_992)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_364_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_993) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_994)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_995));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_364_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_993) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_994) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_995))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_994) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_995)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_365_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_996) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_997)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_998));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_374_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1022) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1023)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1024));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_374_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1022) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1023) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1024))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1023) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1024)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_375_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1025) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1026)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1027));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_375_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1025) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1026) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1027))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1026) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1027)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_376_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1028) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1029)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1030));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_385_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1054) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1055)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1056));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_385_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1054) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1055) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1056))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1055) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1056)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_386_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1057) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1058)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1059));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_386_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1057) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1058) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1059))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1058) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1059)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_387_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1060) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1061)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1062));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_396_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1087) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1088)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1089));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_396_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1087) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1088) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1089))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1088) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1089)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_397_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1090) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1091)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1092));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_397_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1090) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1091) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1092))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1091) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1092)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_398_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1093) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1094)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1095));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_407_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1120) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1121)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1122));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_407_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1120) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1121) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1122))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1121) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1122)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_408_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1123) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1124)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1125));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_408_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1123) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1124) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1125))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1124) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1125)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_409_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1126) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1127)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1128));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_419_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1156) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1157) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1158))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1157) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1158)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_420_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1159) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1160)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1161));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_431_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1192) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1193)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1194));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_458_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1273) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1274) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1275))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1274) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1275)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_469_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1306) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1307) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1308))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1307) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1308)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_480_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1338) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1339) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1340))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1339) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1340)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_481_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1341) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1342)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1343));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_490_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1369) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1370) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1371))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1370) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1371)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_491_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1372) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1373)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1374));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_501_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1403) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1404)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1405));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_793_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2279) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2280)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2281));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_793_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2279) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2280) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2281))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2280) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2281)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2118_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2824) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2825)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2826));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2118_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2824) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2825) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2826))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2825) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2826)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2119_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2827) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2828)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2829));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2119_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2827) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2828) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2829))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2828) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2829)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2121_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2833) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2834)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2835));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2121_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2833) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2834) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2835))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2834) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2835)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2110_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2794) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2795) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2796))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2795) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2796)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2111_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2798) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2799)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2800));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2111_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2798) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2799) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2800))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2799) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2800)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2112_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2802) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2803)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2804));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2113_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2806) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2807)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2808));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2114_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2810) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2811)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2812));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2114_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2810) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2811) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2812))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2811) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2812)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_999_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_323_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_313_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_324_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_313_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_324_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1006_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_333_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_323_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_334_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_323_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_334_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1007_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_324_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_335_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_325_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_335_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_325_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1013_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_343_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_333_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_344_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_333_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_344_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1014_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_334_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_345_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_335_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_345_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_335_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1020_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_353_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_343_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_354_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_343_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_354_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1021_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_344_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_355_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_345_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_355_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_345_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1027_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_363_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_353_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_364_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_353_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_364_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1028_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_354_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_365_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_355_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_365_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_355_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1034_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_374_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_363_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_375_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_363_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_375_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1035_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_364_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_376_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_365_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_376_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_365_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1041_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_385_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_374_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_386_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_374_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_386_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1042_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_375_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_387_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_376_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_387_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_376_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1048_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_396_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_385_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_397_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_385_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_397_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1049_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_386_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_398_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_387_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_398_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_387_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1056_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_397_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_409_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_398_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_409_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_398_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1063_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_408_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_420_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_409_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_420_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_409_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1070_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_419_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_431_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_420_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_431_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_420_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1095_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_458_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_470_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_459_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1095_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_458_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_470_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_459_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_470_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_459_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1102_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_469_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_481_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_470_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1102_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_469_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_481_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_470_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_481_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_470_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1109_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_480_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_491_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_481_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1109_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_480_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_491_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_481_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_491_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_481_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1116_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_490_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_501_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_491_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1116_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_490_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_501_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_491_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_501_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_491_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1320_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_793_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_791_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_794_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1320_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_793_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_791_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_794_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_791_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_794_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2265_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2118_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2117_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2265_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2118_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2117_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2266_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2119_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2118_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2266_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2119_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2118_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2267_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2120_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2119_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2267_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2120_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2119_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2268_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2121_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2120_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2268_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2121_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2120_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2269_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2122_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2121_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2269_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2122_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2121_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2257_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2110_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2109_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2797))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2109_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2797)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2258_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2111_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2110_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2801));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2258_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2111_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2110_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2801))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2110_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2801)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2259_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2112_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2111_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2805));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2259_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2112_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2111_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2805))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2111_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2805)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2260_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2113_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2112_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2809));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2260_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2113_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2112_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2809))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2112_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2809)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2261_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2114_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2113_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2813));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2261_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2114_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2113_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2813))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2113_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2813)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2262_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2115_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2114_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2817));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2262_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2115_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2114_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2817))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2114_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2817)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2383_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2258_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2257_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2383_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2258_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2257_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2384_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2259_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2258_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2384_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2259_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2258_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2385_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2260_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2259_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2385_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2260_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2259_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2386_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2261_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2260_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2386_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2261_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2260_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2387_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2262_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2261_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2387_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2262_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2261_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2388_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2263_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2262_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2388_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2263_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2262_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2389_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2264_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2263_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2389_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2264_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2263_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2390_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2265_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2264_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2390_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2265_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2264_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2391_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2266_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2265_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2391_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2266_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2265_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2392_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2267_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2266_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2392_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2267_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2266_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2393_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2268_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2267_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2393_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2268_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2267_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2394_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2269_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2268_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2394_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2269_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2268_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2395_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2270_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2269_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2395_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2270_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2269_io_out_1));
}

extern const VlWide<16>/*511:0*/ VCoreTop__ConstPool__CONST_h93e1b771_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCoreTop__ConstPool__TABLE_h91ada452_0;
extern const VlUnpacked<CData/*1:0*/, 64> VCoreTop__ConstPool__TABLE_ha6209d34_0;

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__46(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__46\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_h0c5e9c0a__0;
    VlWide<16>/*511:0*/ __Vtemp_hdf8f5162__0;
    // Body
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][1U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][2U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][3U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][4U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][5U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][6U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][7U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][8U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][9U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xaU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xbU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xcU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xdU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xeU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0][0xfU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1__v0[0xfU];
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][1U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][2U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][3U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][4U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][5U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][6U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][7U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][8U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][9U] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xaU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xbU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xcU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xdU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xeU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0][0xfU] 
            = vlSelf->__Vdlyvval__CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0__v0[0xfU];
    }
    vlSelf->CoreTop__DOT__MMEM__DOT__read_count = vlSelf->__Vdly__CoreTop__DOT__MMEM__DOT__read_count;
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_raddr_req_valid 
        = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_waddr_req_valid 
        = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
    vlSelf->CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr 
        = ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg
            : 0ULL);
    if ((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU];
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[1U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[2U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[3U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[4U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[5U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[6U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[7U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[8U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[9U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xaU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xbU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xcU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xdU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xeU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata[0xfU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    vlSelf->CoreTop__DOT__valid_3 = ((~ (IData)(vlSelf->reset)) 
                                     & (IData)(vlSelf->CoreTop__DOT___GEN_47));
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v0) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v1) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v1] = 0U;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v2) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v2] = 0U;
    }
    if (vlSelf->__Vdlyvset__CoreTop__DOT__ICACHE__DOT__lru__v3) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__lru[vlSelf->__Vdlyvdim0__CoreTop__DOT__ICACHE__DOT__lru__v3] = 1U;
    }
    vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__valid_3) & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_ce 
        = (((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType)) 
            & (IData)(vlSelf->CoreTop__DOT__valid_2)) 
           & (IData)(vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid));
    vlSelf->CoreTop__DOT__MMEM_rd_last = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_count)) 
                                          & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid 
        = ((~ (((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
               & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))) 
           & (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
           & ((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr) 
              & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)));
    if ((((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
          & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
         & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_wdata_req_valid = 1U;
        vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_bits_len = 0U;
        vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_bits_addr 
            = vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr;
        vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_bits_addr 
            = vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr;
        vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_last 
            = (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
        vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_valid 
            = vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_wdata_req_valid;
        vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep 
            = vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid;
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_wdata_req_valid = 0U;
        vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_bits_len = 7U;
        vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_bits_addr 
            = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg
                : 0ULL);
        vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_bits_addr 
            = ((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
                ? vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg
                : 0ULL);
        vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_last 
            = (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write));
        vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_valid 
            = (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
        vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep 
            = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3) 
               | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
                  & (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we)));
    }
    vlSelf->CoreTop__DOT__MMIO_io_out_wb_ready = (1U 
                                                  & ((~ 
                                                      (((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                                                        & (0xa0000000ULL 
                                                           <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                                                       & (0xa2000000ULL 
                                                          >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))) 
                                                     | (3U 
                                                        == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready 
        = (((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
            & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
           & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_24 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_ready)
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_98 = (
                                                   ((1U 
                                                     == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                                    & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state))) 
                                                   | (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_10 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_ready) 
            & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)))
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_104 = 
        (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
          & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
          ? (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
          : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
             & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)))));
    vlSelf->CoreTop__DOT__ARBITER__DOT___GEN_195 = 
        ((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
           | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
          & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state))) 
         | (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
             & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state))) 
            | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                ? ((~ (((IData)(vlSelf->CoreTop__DOT__MMEM_rd_last) 
                        & (2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))) 
                       | (1U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))) 
                   & (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state))
                : (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state))));
    vlSelf->CoreTop__DOT__MMIO_io_out_rdata_rep_ready 
        = (1U & ((~ (((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                      & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                     & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))) 
                 | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)));
    if ((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
          | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
         & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready 
            = (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready 
            = (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state));
        vlSelf->CoreTop__DOT__ARBITER_io_out_wdata_req_bits_last 
            = vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_last;
        vlSelf->CoreTop__DOT__ARBITER_io_out_rdata_rep_ready 
            = vlSelf->CoreTop__DOT__MMIO_io_out_rdata_rep_ready;
    } else {
        vlSelf->CoreTop__DOT__ARBITER_io_in1_raddr_req_ready 
            = ((~ ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                   & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)))
                   : (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))));
        vlSelf->CoreTop__DOT__ARBITER_io_in1_waddr_req_ready 
            = ((~ ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                   & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                      & (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))
                   : (0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state))));
        vlSelf->CoreTop__DOT__ARBITER_io_out_wdata_req_bits_last 
            = ((~ ((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                   & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
               & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state) 
                  & ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                     & (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wdata_req_bits_last))));
        vlSelf->CoreTop__DOT__ARBITER_io_out_rdata_rep_ready 
            = (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state))) 
               | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                   ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                      | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_rdata_rep_ready))
                   : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_rdata_rep_ready)));
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_17 = (((IData)(vlSelf->CoreTop__DOT__ARBITER_io_in2_rdata_rep_valid) 
                                                   & (IData)(vlSelf->CoreTop__DOT__MMEM_rd_last))
                                                   ? 3U
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_valid 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)) 
           | (((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
               & (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we)) 
              & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit)));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_8 
        = ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_wdata_req_valid) 
             & ((((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                  & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                 & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
                & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wdata_req_ready))) 
            & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->CoreTop__DOT__ARBITER_io_out_wdata_req_bits_last) 
                             << 5U) | ((((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                                           | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                                          & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                          ? (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wb_ready)
                                          : (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                              & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state))) 
                                             | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                 ? 
                                                ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
                                                 | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wb_ready))
                                                 : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_wb_ready)))) 
                                        << 4U) | ((
                                                   (1U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)) 
                                                   << 3U) 
                                                  | ((((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                                                         | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                                                        & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                                                        ? (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)
                                                        : 
                                                       ((~ 
                                                         ((1U 
                                                           == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                                          & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
                                                        & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                                                            ? 
                                                           ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
                                                            & (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid))
                                                            : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)))) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__write_state)))));
    if (VCoreTop__ConstPool__TABLE_h91ada452_0[vlSelf->__Vtableidx1]) {
        vlSelf->CoreTop__DOT__MMEM__DOT__write_next_state 
            = VCoreTop__ConstPool__TABLE_ha6209d34_0
            [vlSelf->__Vtableidx1];
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid 
        = ((~ (((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) 
                & (0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr)) 
               & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))) 
           & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask) 
           & ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we)
               ? 0xffU : 0U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_32 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            ? ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid)
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_61 
        = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
           | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state)));
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_10 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            ? (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid) 
                & (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state)))
                ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state))
            : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_22 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid) 
            & (IData)(vlSelf->CoreTop__DOT__MMEM_rd_last))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_30 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
            & (7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)))
            ? 3U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
            | (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3))
            ? vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr
            : 0ULL);
    __Vtemp_h0c5e9c0a__0[0U] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[2U];
    __Vtemp_h0c5e9c0a__0[1U] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[3U];
    __Vtemp_h0c5e9c0a__0[2U] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[4U];
    __Vtemp_h0c5e9c0a__0[3U] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[5U];
    __Vtemp_h0c5e9c0a__0[4U] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[6U];
    __Vtemp_h0c5e9c0a__0[5U] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[7U];
    __Vtemp_h0c5e9c0a__0[6U] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[8U];
    __Vtemp_h0c5e9c0a__0[7U] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[9U];
    __Vtemp_h0c5e9c0a__0[8U] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xaU];
    __Vtemp_h0c5e9c0a__0[9U] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xbU];
    __Vtemp_h0c5e9c0a__0[0xaU] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xcU];
    __Vtemp_h0c5e9c0a__0[0xbU] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xdU];
    __Vtemp_h0c5e9c0a__0[0xcU] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xeU];
    __Vtemp_h0c5e9c0a__0[0xdU] = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg[0xfU];
    VL_EXTEND_WW(512,448, __Vtemp_hdf8f5162__0, __Vtemp_h0c5e9c0a__0);
    if ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_14 
            = ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid)
                ? 2U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89 
            = (0xfU & ((7U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))
                        ? 0U : (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
                                 & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)))
                                 ? ((IData)(1U) + (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))
                                 : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
        if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready) 
             & (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state)))) {
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0U] 
                = __Vtemp_hdf8f5162__0[0U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[1U] 
                = __Vtemp_hdf8f5162__0[1U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[2U] 
                = __Vtemp_hdf8f5162__0[2U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[3U] 
                = __Vtemp_hdf8f5162__0[3U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[4U] 
                = __Vtemp_hdf8f5162__0[4U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[5U] 
                = __Vtemp_hdf8f5162__0[5U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[6U] 
                = __Vtemp_hdf8f5162__0[6U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[7U] 
                = __Vtemp_hdf8f5162__0[7U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[8U] 
                = __Vtemp_hdf8f5162__0[8U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[9U] 
                = __Vtemp_hdf8f5162__0[9U];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xaU] 
                = __Vtemp_hdf8f5162__0[0xaU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xbU] 
                = __Vtemp_hdf8f5162__0[0xbU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xcU] 
                = __Vtemp_hdf8f5162__0[0xcU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xdU] 
                = __Vtemp_hdf8f5162__0[0xdU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xeU] 
                = __Vtemp_hdf8f5162__0[0xeU];
            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90[0xfU] 
                = __Vtemp_hdf8f5162__0[0xfU];
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
    if (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
         & (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___waymask_T_3;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___waymask_T_3;
    } else if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask = 2U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask = 2U;
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask = 1U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask = 1U;
    }
    vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_2 
        = ((((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_out_rdata_rep_valid) 
             & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready)) 
            & (IData)(vlSelf->CoreTop__DOT__MMEM_rd_last))
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state));
    vlSelf->CoreTop__DOT__MMEM__DOT__read_next_state 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
            ? (((((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                  | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                 & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                 ? (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid)
                 : (((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                     & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
                     ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                     : ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)
                         ? ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                             ? (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                             : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid))
                         : (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid))))
                ? 2U : 0U) : ((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state))
                               ? ((((2U == (IData)(vlSelf->CoreTop__DOT__MMEM__DOT__read_state)) 
                                    & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_out_rdata_rep_ready)) 
                                   & (IData)(vlSelf->CoreTop__DOT__MMEM_rd_last))
                                   ? 0U : 2U) : 0U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
        = ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                 >> 3U)))) ? (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3))
            : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                     >> 3U)))) ? ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                  << 8U)
                : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                         >> 3U)))) ? 
                   ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                    << 0x10U) : ((3U == (7U & (IData)(
                                                      (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                       >> 3U))))
                                  ? ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                     << 0x18U) : ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                               >> 3U))))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                   << 0x20U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                                >> 3U))))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                    << 0x28U)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                                 >> 3U))))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                     << 0x30U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                                  >> 3U))))
                                                      ? 
                                                     ((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3)) 
                                                      << 0x38U)
                                                      : 0ULL))))))));
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__10(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__10\n"); );
    // Body
    if (((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
         & (IData)(vlSelf->CoreTop__DOT__ARBITER_io_in2_rdata_rep_valid))) {
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
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__47(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__47\n"); );
    // Init
    CData/*2:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_209;
    CData/*2:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_224;
    CData/*0:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_363;
    VlWide<3>/*95:0*/ __Vtemp_h98e576ab__0;
    VlWide<3>/*95:0*/ __Vtemp_hb83b8734__0;
    VlWide<3>/*95:0*/ __Vtemp_h754902ca__0;
    VlWide<3>/*95:0*/ __Vtemp_hc2a14447__0;
    // Body
    vlSelf->CoreTop__DOT__MEM_io_out_valid = (1U & 
                                              (~ ((~ (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                                                  | (((IData)(vlSelf->CoreTop__DOT__valid_2) 
                                                      & (4U 
                                                         == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))) 
                                                     & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid)) 
                                                        & (~ (IData)(vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep)))))));
    __Vtemp_h98e576ab__0[1U] = (IData)((((QData)((IData)(
                                                         ((((1U 
                                                             & (IData)(
                                                                       (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                        >> 0xfU)))
                                                             ? 0xffU
                                                             : 0U) 
                                                           << 0x18U) 
                                                          | ((((1U 
                                                                & (IData)(
                                                                          (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                           >> 0xeU)))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x10U) 
                                                             | ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                              >> 0xdU)))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0xcU)))
                                                                    ? 0xffU
                                                                    : 0U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0xbU)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x18U) 
                                                           | ((((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0xaU)))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 0x10U) 
                                                              | ((((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 9U)))
                                                                    ? 0xffU
                                                                    : 0U) 
                                                                  << 8U) 
                                                                 | ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 8U)))
                                                                     ? 0xffU
                                                                     : 0U))))))));
    __Vtemp_h98e576ab__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0xfU)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x18U) 
                                                           | ((((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0xeU)))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 0x10U) 
                                                              | ((((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0xdU)))
                                                                    ? 0xffU
                                                                    : 0U) 
                                                                  << 8U) 
                                                                 | ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0xcU)))
                                                                     ? 0xffU
                                                                     : 0U)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0xbU)))
                                                               ? 0xffU
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0xaU)))
                                                                  ? 0xffU
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 9U)))
                                                                     ? 0xffU
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 8U)))
                                                                      ? 0xffU
                                                                      : 0U))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[0U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 3U))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 2U))) ? 0xffU
                            : 0U) << 0x10U) | ((((1U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                             >> 1U)))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask))
                                                   ? 0xffU
                                                   : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[1U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 7U))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 6U))) ? 0xffU
                            : 0U) << 0x10U) | ((((1U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                             >> 5U)))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                              >> 4U)))
                                                   ? 0xffU
                                                   : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[2U] 
        = __Vtemp_h98e576ab__0[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo[3U] 
        = __Vtemp_h98e576ab__0[2U];
    __Vtemp_hb83b8734__0[1U] = (IData)((((QData)((IData)(
                                                         ((((1U 
                                                             & (IData)(
                                                                       (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                        >> 0x2fU)))
                                                             ? 0xffU
                                                             : 0U) 
                                                           << 0x18U) 
                                                          | ((((1U 
                                                                & (IData)(
                                                                          (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                           >> 0x2eU)))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x10U) 
                                                             | ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                              >> 0x2dU)))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x2cU)))
                                                                    ? 0xffU
                                                                    : 0U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x2bU)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x18U) 
                                                           | ((((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x2aU)))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 0x10U) 
                                                              | ((((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x29U)))
                                                                    ? 0xffU
                                                                    : 0U) 
                                                                  << 8U) 
                                                                 | ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x28U)))
                                                                     ? 0xffU
                                                                     : 0U))))))));
    __Vtemp_hb83b8734__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x2fU)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x18U) 
                                                           | ((((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x2eU)))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 0x10U) 
                                                              | ((((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x2dU)))
                                                                    ? 0xffU
                                                                    : 0U) 
                                                                  << 8U) 
                                                                 | ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x2cU)))
                                                                     ? 0xffU
                                                                     : 0U)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x2bU)))
                                                               ? 0xffU
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x2aU)))
                                                                  ? 0xffU
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x29U)))
                                                                     ? 0xffU
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x28U)))
                                                                      ? 0xffU
                                                                      : 0U))))))) 
                                        >> 0x20U));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[0U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x23U))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x22U)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x21U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x20U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[1U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x27U))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x26U)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x25U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x24U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[2U] 
        = __Vtemp_hb83b8734__0[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo[3U] 
        = __Vtemp_hb83b8734__0[2U];
    vlSelf->CoreTop__DOT___GEN_47 = vlSelf->CoreTop__DOT__MEM_io_out_valid;
    __Vtemp_h754902ca__0[1U] = (IData)((((QData)((IData)(
                                                         ((((1U 
                                                             & (IData)(
                                                                       (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                        >> 0x1fU)))
                                                             ? 0xffU
                                                             : 0U) 
                                                           << 0x18U) 
                                                          | ((((1U 
                                                                & (IData)(
                                                                          (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                           >> 0x1eU)))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x10U) 
                                                             | ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                              >> 0x1dU)))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x1cU)))
                                                                    ? 0xffU
                                                                    : 0U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x1bU)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x18U) 
                                                           | ((((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x1aU)))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 0x10U) 
                                                              | ((((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x19U)))
                                                                    ? 0xffU
                                                                    : 0U) 
                                                                  << 8U) 
                                                                 | ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x18U)))
                                                                     ? 0xffU
                                                                     : 0U))))))));
    __Vtemp_h754902ca__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x1fU)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x18U) 
                                                           | ((((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x1eU)))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 0x10U) 
                                                              | ((((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x1dU)))
                                                                    ? 0xffU
                                                                    : 0U) 
                                                                  << 8U) 
                                                                 | ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x1cU)))
                                                                     ? 0xffU
                                                                     : 0U)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x1bU)))
                                                               ? 0xffU
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x1aU)))
                                                                  ? 0xffU
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x19U)))
                                                                     ? 0xffU
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x18U)))
                                                                      ? 0xffU
                                                                      : 0U))))))) 
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
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x13U))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x12U)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x11U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x10U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[5U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x17U))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x16U)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x15U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x14U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[6U] 
        = __Vtemp_h754902ca__0[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo[7U] 
        = __Vtemp_h754902ca__0[2U];
    __Vtemp_hc2a14447__0[1U] = (IData)((((QData)((IData)(
                                                         ((((1U 
                                                             & (IData)(
                                                                       (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                        >> 0x3fU)))
                                                             ? 0xffU
                                                             : 0U) 
                                                           << 0x18U) 
                                                          | ((((1U 
                                                                & (IData)(
                                                                          (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                           >> 0x3eU)))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x10U) 
                                                             | ((((1U 
                                                                   & (IData)(
                                                                             (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                              >> 0x3dU)))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x3cU)))
                                                                    ? 0xffU
                                                                    : 0U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x3bU)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x18U) 
                                                           | ((((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x3aU)))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 0x10U) 
                                                              | ((((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x39U)))
                                                                    ? 0xffU
                                                                    : 0U) 
                                                                  << 8U) 
                                                                 | ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x38U)))
                                                                     ? 0xffU
                                                                     : 0U))))))));
    __Vtemp_hc2a14447__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((1U 
                                                              & (IData)(
                                                                        (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                         >> 0x3fU)))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x18U) 
                                                           | ((((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                            >> 0x3eU)))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 0x10U) 
                                                              | ((((1U 
                                                                    & (IData)(
                                                                              (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                               >> 0x3dU)))
                                                                    ? 0xffU
                                                                    : 0U) 
                                                                  << 8U) 
                                                                 | ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x3cU)))
                                                                     ? 0xffU
                                                                     : 0U)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((1U 
                                                               & (IData)(
                                                                         (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                          >> 0x3bU)))
                                                               ? 0xffU
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                             >> 0x3aU)))
                                                                  ? 0xffU
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x39U)))
                                                                     ? 0xffU
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                                                                >> 0x38U)))
                                                                      ? 0xffU
                                                                      : 0U))))))) 
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
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x33U))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x32U)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x31U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x30U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[5U] 
        = ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                            >> 0x37U))) ? 0xffU : 0U) 
            << 0x18U) | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                          >> 0x36U)))
                            ? 0xffU : 0U) << 0x10U) 
                         | ((((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                             >> 0x35U)))
                               ? 0xffU : 0U) << 8U) 
                            | ((1U & (IData)((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask 
                                              >> 0x34U)))
                                ? 0xffU : 0U))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[6U] 
        = __Vtemp_hc2a14447__0[1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi[7U] 
        = __Vtemp_hc2a14447__0[2U];
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
    vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6 
        = (((IData)(vlSelf->CoreTop__DOT__valid_2) 
            & (4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))) 
           & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid)) 
              & (~ (IData)(vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep))));
    vlSelf->io_pc = vlSelf->CoreTop__DOT__IF__DOT__temp;
    vlSelf->CoreTop__DOT__IF__DOT___temp_T_3 = (4ULL 
                                                + vlSelf->CoreTop__DOT__IF__DOT__temp);
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
            ? vlSelf->CoreTop__DOT__IF__DOT__temp : 0ULL);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU]);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU]);
    if ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[1U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[2U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[3U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[4U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[5U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[6U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[7U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[8U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[9U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xaU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xbU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xcU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xdU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xeU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xfU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU]);
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[1U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[1U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[2U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[2U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[3U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[3U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[4U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[4U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[5U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[5U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[6U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[6U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[7U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[7U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[8U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[8U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[9U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[9U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xaU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xaU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xbU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xbU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xcU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xcU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xdU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xdU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xeU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xeU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xfU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU])) 
               | vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4[0xfU]);
    }
    if (vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
    } else if (vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0
            [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xfU];
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU] 
            = VCoreTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    if ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                              >> 3U))))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U])));
        vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0U])));
    } else if ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                     >> 3U))))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U])));
        vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[2U])));
    } else if ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                     >> 3U))))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U])));
        vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[4U])));
    } else if ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                     >> 3U))))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U])));
        vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[6U])));
    } else if ((4U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                     >> 3U))))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U])));
        vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[9U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[8U])));
    } else if ((5U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                     >> 3U))))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU])));
        vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xbU])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xaU])));
    } else if ((6U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                     >> 3U))))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU])));
        vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xcU])));
    } else if ((7U == (7U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                     >> 3U))))) {
        vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU])));
        vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data[0xeU])));
    } else {
        vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data = 0ULL;
        vlSelf->CoreTop__DOT__ICACHE__DOT__hit_data = 0ULL;
    }
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit 
        = ((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result) 
           | (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result));
    CoreTop__DOT__ID__DOT___Inst_decode_T_363 = ((0x501bU 
                                                  == 
                                                  (0xfc00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                 | ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                    | ((0x6003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                       | ((0x3bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                          | ((0x40000033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                             | ((0x33U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                | ((0x7033U 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                   | ((0x3033U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                      | ((0x103bU 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                         | ((0x6033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                            | ((0x200003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                               | ((0x200403bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x4000003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x4000503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x200703bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x200503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x3023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x100073U 
                                                                                != vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst) 
                                                                                & ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | (0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))))))))))))))))))))))))))))))))))))))))))))));
    CoreTop__DOT__ID__DOT___Inst_decode_T_209 = ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                  ? 0U
                                                  : 
                                                 ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                   ? 0U
                                                   : 
                                                  ((0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 4U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 4U
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 4U
                                                       : 
                                                      ((0x100073U 
                                                        == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                        ? 0U
                                                        : 
                                                       ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 3U
                                                         : 
                                                        ((0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 3U
                                                          : 
                                                         ((0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 2U
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x5063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 2U
                                                             : 
                                                            ((0x4063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                              ? 2U
                                                              : 
                                                             ((0x6063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                               ? 2U
                                                               : 
                                                              ((0x7063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                                ? 2U
                                                                : 0U)))))))))))))));
    vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump = 
        ((((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
           & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
          & (IData)(vlSelf->CoreTop__DOT__valid_1)) 
         & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)));
    vlSelf->CoreTop__DOT__valid = ((~ (IData)(vlSelf->reset)) 
                                   & ((~ (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)) 
                                      & (IData)(vlSelf->CoreTop__DOT___GEN_1)));
    vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_3 = 
        ((0x13U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
         | ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
            | ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
               | ((0x3003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                  | ((0x2003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                     | ((0x3013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                        | ((0x1bU == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                           | ((0x40005013U == (0xfc00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                              | ((0x4003U == (0x707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                 | ((3U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                    | ((0x4013U == 
                                        (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                       | ((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                          | ((0x5013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                             | ((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                | ((0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                   | ((0x101bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                      | ((0x4000501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                         | (IData)(CoreTop__DOT__ID__DOT___Inst_decode_T_363))))))))))))))))));
    CoreTop__DOT__ID__DOT___Inst_decode_T_224 = ((0x4000003bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                  ? 0U
                                                  : 
                                                 ((0x2033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                   ? 5U
                                                   : 
                                                  ((0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 1U
                                                    : 
                                                   ((0x503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 1U
                                                     : 
                                                    ((0x4033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x200703bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 1U
                                                        : 
                                                       ((0x2007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 0U
                                                         : 
                                                        ((0x200503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2006033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 1U
                                                            : 
                                                           ((0x2005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 0U
                                                             : 
                                                            ((0x2004033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                              ? 0U
                                                              : 
                                                             ((0x40005033U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                               ? 0U
                                                               : 
                                                              ((0x2000033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                                ? 0U
                                                                : (IData)(CoreTop__DOT__ID__DOT___Inst_decode_T_209))))))))))))))));
    vlSelf->CoreTop__DOT__EX_io_in_ready = (1U & ((~ 
                                                   ((((2U 
                                                       != (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)) 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)) 
                                                     | ((2U 
                                                         != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div))) 
                                                    & (IData)(vlSelf->CoreTop__DOT__valid_1))) 
                                                  & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239 
        = ((0x101bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 1U : ((0x4000501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 1U : ((0x501bU == (0xfc00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 1U : ((0x2013U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 5U : ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 4U
                                                : (
                                                   (0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x40000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0U
                                                     : 
                                                    ((0x33U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 5U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0U
                                                          : 
                                                         ((0x200003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0U
                                                           : 
                                                          ((0x200403bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 0U
                                                             : (IData)(CoreTop__DOT__ID__DOT___Inst_decode_T_224))))))))))))))));
    vlSelf->CoreTop__DOT__ICACHE__DOT___T_5 = ((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                               & (3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)));
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_10 = ((2U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   ? 
                                                  (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                                    & (3U 
                                                       == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)))
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                    ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                     ? 
                                                    (((IData)(vlSelf->CoreTop__DOT__ICACHE__DOT___T_5) 
                                                      | ((~ 
                                                          (((IData)(vlSelf->CoreTop__DOT__MMIO_io_out_raddr_req_valid) 
                                                            | (IData)(vlSelf->CoreTop__DOT__MMIO_io_out_waddr_req_valid)) 
                                                           & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))) 
                                                         & (((1U 
                                                              == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)) 
                                                             & (~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__state)))
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
                                                     : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__48(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__48\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_754 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0x14U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_782 
            = (1U & (vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
                     >> 0x15U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_carry));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_107_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_220) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_221) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_222))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_221) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_222)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1328_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2307) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2306));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_722_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2065) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2066) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2067))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2066) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2067)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_790_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2270) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2271) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2272))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2271) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2272)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_792_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2276) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2277) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2278))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2277) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2278)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_34_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_3));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1466) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1467));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1466) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1467));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1495) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1496));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1312) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1313) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1314))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1313) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1314)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_750_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2149) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2150) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2151))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2150) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2151)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1312) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1313)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1314));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_750_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2149) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2150)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2151));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_34_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_3));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1495) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1496));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2303) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2304));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_4) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_5)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_6));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2294) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2295)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2294) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2295)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2301) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2302)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2301) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2302)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2301) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2302)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2303) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2304));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_4) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_5) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_6))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_5) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_6)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_7) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_8)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_9));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_717_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2049) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2050) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2051))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2050) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2051)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2297) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2298)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2299));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2297) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2298) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2299))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2298) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2299)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2294) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2295)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_7) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_8) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_9))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_8) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_9)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_10) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_11)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_12));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_10) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_11) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_12))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_11) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_12)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_14) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_15)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_16));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_705_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2015) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2016) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2017))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2016) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2017)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_14) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_15) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_16))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_15) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_16)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_102_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_206) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_207));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_542_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1526) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1527)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_707_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2021) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2022)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_707_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2021) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2022)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2021) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2022)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_787_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2261) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2262)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_787_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2261) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2262)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2261) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2262)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_70) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_71)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_72));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_70) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_71) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_72))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_71) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_72)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_58_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_73) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_74)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_75));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_101_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_203) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_204)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_205));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_101_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_203) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_204) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_205))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_204) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_205)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_106_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_217) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_218)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_219));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_106_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_217) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_218) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_219))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_218) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_219)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_107_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_220) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_221)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_222));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_113_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_238) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_239)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_240));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_113_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_238) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_239) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_240))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_239) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_240)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_114_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_241) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_242)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_243));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_114_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_241) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_242) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_243))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_242) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_243)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_118_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_254) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_255)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_256));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_119_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_257) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_258)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_259));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_119_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_257) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_258) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_259))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_258) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_259)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_120_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_260) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_261)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_262));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_121_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_263) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_264) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_265))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_264) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_265)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_125_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_276) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_277)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_278));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_268_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_703) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_704) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_705))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_704) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_705)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_277_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_730) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_731) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_732))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_731) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_732)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_278_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_733) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_734)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_735));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_287_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_760) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_761)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_762));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_429_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1186) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1187)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1188));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_429_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1186) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1187) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1188))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1187) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1188)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_430_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1189) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1190)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1191));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_430_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1189) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1190) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1191))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1190) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1191)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_434_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1201) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1202)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1203));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_434_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1201) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1202) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1203))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1202) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1203)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_445_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1234) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1235)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1236));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_445_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1234) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1235) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1236))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1235) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1236)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_543_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1528) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1529)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1530));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_552_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1556) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1557)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1558));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_553_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1559) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1560)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1561));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_698_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1994) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1995) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1996))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1995) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1996)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_702_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2006) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2007)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2008));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_703_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2009) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2010)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2011));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_704_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2012) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2013)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2014));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_704_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2012) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2013) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2014))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2013) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2014)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_705_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2015) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2016)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2017));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_708_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2023) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2024)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2025));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_708_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2023) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2024) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2025))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2024) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2025)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_709_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2026) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2027)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2028));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_714_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2040) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2041)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2042));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_715_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2043) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2044)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2045));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_716_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2046) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2047)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2048));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_716_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2046) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2047) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2048))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2047) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2048)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_717_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2049) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2050)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2051));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_789_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2267) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2268)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2269));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_789_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2267) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2268) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2269))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2268) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2269)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_790_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2270) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2271)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2272));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_792_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2276) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2277)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2278));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2138_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2869) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2870));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2075_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2688) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2689) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2690))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2689) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2690)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1954_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2312) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2313));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1955_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2314) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2315));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1955_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2314) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2315));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1956_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2316) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2317));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1956_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2316) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2317));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_804_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_34_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1327_io_out_1 
        = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2306)) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_804_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_34_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_805_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_805_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1145_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1524) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1270_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_717_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2068));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1270_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_717_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2068));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1324_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1324_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1325_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1326_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1327_io_out_0 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2306) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_806_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_13));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_806_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_13))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_13)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_807_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_17));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_807_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_17))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_17)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1322_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_795_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2292))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_795_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2292)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1323_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2296));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1323_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2296))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2296)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_861_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_118_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_113_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_119_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_113_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_119_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_862_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_114_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_120_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_115_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_120_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_115_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_866_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_119_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_125_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_120_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_125_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_120_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_867_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_126_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_121_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_127_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_867_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_126_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_121_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_127_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_121_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_127_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_969_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_268_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_278_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_269_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_278_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_269_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_975_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_277_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_287_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_278_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_287_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_278_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1146_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_542_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_533_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_543_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_533_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_543_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1152_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_551_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_542_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_552_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_542_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_552_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1257_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_704_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_698_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_705_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1257_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_704_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_698_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_705_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_698_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_705_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1260_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_702_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_709_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_703_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_709_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_703_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1265_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_716_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_710_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_717_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1265_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_716_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_710_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_717_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_710_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_717_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1269_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_721_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_716_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_722_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1318_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_789_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_787_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_790_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_787_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_790_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1319_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_791_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_789_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_792_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2284_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2137_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2136_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2285_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2138_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2137_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2139_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1955_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1954_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2140_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1956_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1955_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2283_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2136_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2135_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2284_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2137_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2136_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2236_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2074_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2072_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2075_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2072_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2075_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2237_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2076_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2074_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2077_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2140_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1956_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1955_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2141_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1957_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1956_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2141_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1957_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1956_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2142_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1958_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1957_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2142_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1958_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1957_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2143_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1959_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1958_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2143_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1959_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1958_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2144_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1960_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1959_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2144_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1960_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1959_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2145_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1961_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1960_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2145_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1961_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1960_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2146_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1962_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1961_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2234_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2070_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2068_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2071_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2235_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2072_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2070_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2073_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2236_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2074_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2072_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2075_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2271_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2124_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2123_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2271_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2124_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2123_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2274_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2127_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2126_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2274_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2127_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2126_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2275_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2128_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2127_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2275_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2128_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2127_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2276_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2129_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2128_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2276_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2129_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2128_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2277_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2130_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2129_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2277_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2130_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2129_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2278_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2131_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2130_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2278_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2131_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2130_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2279_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2132_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2131_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2279_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2132_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2131_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2280_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2133_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2132_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2280_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2133_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2132_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2281_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2134_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2133_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2281_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2134_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2133_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2282_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2135_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2134_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2282_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2135_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2134_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2283_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2136_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2135_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1330_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_805_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_804_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1330_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_805_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_804_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1331_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_806_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_805_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1331_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_806_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_805_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1332_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_807_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_806_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1332_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_807_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_806_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1572_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1552) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1145_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1572_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1552) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1145_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1692_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1323_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1322_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1692_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1323_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1322_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1693_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1324_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1323_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1693_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1324_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1323_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1694_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1325_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1324_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1694_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1325_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1324_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1696_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1327_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1326_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1696_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1327_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1326_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1697_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1328_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1327_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1688_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1319_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1318_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_790_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1688_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1319_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1318_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_790_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1318_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_790_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_33_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2409_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2284_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2283_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2410_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2285_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2284_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2362_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2237_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2236_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2075_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2236_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2075_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2286_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2140_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2139_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2287_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2141_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2140_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2287_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2141_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2140_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2288_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2142_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2141_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2288_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2142_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2141_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2289_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2143_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2142_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2289_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2143_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2142_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2290_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2144_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2143_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2290_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2144_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2143_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2291_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2145_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2144_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2291_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2145_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2144_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2292_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2146_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2145_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2292_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2146_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2145_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2359_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2234_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2233_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2069_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2359_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2234_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2233_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2069_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2233_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2069_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2360_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2235_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2234_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2071_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2360_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2235_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2234_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2071_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2234_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2071_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2361_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2236_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2235_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2073_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2361_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2236_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2235_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2073_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2235_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2073_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2362_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2237_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2236_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2075_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2396_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2271_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2270_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2396_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2271_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2270_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2397_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2272_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2271_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2397_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2272_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2271_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2398_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2273_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2272_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2398_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2273_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2272_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2399_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2274_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2273_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2399_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2274_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2273_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2400_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2275_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2274_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2400_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2275_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2274_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2401_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2276_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2275_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2401_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2276_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2275_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2402_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2277_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2276_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2402_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2277_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2276_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2403_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2278_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2277_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2403_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2278_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2277_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2404_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2279_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2278_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2404_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2279_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2278_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2405_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2280_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2279_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2405_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2280_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2279_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2406_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2281_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2280_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2406_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2281_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2280_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2407_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2282_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2281_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2407_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2282_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2281_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2408_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2283_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2282_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2408_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2283_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2282_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2409_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2284_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2283_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_803_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_34_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_33_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1329_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_804_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_803_io_out_1));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__49(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__49\n"); );
    // Body
    if (vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_78 
            = (1U & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7_io_carry));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_373_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1020) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1021));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1052) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1053));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_472_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1315) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1316));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1117) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1118) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1119))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1118) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1119)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1150) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1151) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1152))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1151) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1152)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_428_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1183) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1184) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1185))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1184) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1185)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_439_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1216) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1217) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1218))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1217) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1218)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_450_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1249) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1250) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1251))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1250) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1251)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_461_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1282) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1283) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1284))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1283) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1284)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_224_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_571) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_572) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_573))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_572) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_573)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_655_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1865) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1866)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1867));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_655_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1865) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1866) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1867))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1866) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1867)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_342_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_925) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_926) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_927))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_926) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_927)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_955) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_956)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_957));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_986) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_987)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_988));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_373_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1020) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1021));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1017) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1018)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1019));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_68) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_69));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_68) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_69));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1052) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1053));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_472_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1315) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1316));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1017) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1018) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1019))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1018) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1019)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1049) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1050)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1051));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1049) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1050) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1051))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1050) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1051)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1084) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1085)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1086));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1114) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1115)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1116));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1114) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1115) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1116))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1115) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1116)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1117) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1118)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1119));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1147) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1148)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1149));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1147) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1148) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1149))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1148) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1149)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1150) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1151)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1152));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_428_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1183) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1184)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1185));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_439_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1216) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1217)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1218));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_450_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1249) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1250)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1251));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1279) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1280)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1281));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1279) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1280) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1281))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1280) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1281)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_461_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1282) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1283)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1284));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_76) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_77) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_78))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_77) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_78)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_706_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2018) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2019));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_706_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2018) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2019));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2035) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2036));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2035) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2036));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_699_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1997) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1998) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1999))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1998) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1999)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_700_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2000) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2001)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2002));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_700_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2000) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2001) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2002))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2001) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2002)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_711_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2032) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2033) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2034))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2033) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2034)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_224_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_571) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_572)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_573));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_601_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1702) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1703) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1704))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1703) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1704)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1727) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1728)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1729));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1727) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1728) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1729))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1728) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1729)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_594_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1680) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1681) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1682))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1681) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1682)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_577_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1631) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1632));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_577_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1631) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1632));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_586_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1657) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1658));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_695_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1986) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1987)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_695_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1986) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1987)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1986) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1987)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_776_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2229) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2230)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_776_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2229) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2230)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2229) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2230)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_782_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2246) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2247)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_782_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2246) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2247)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2246) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2247)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_222_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_565) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_566)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_567));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_222_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_565) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_566) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_567))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_566) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_567)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_369_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1008) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1009) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1010))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1009) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1010)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_371_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1014) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1015)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1016));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_380_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1040) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1041)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1042));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_380_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1040) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1041) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1042))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1041) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1042)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_381_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1043) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1044)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1045));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_382_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1046) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1047)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1048));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_391_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1072) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1073)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1074));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_392_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1075) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1076)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1077));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_413_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1138) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1139) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1140))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1139) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1140)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_424_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1171) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1172)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1173));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_425_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1174) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1175)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1176));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_425_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1174) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1175) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1176))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1175) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1176)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_437_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1210) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1211)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1212));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_557_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1571) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1572) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1573))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1572) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1573)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_567_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1601) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1602)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1603));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_567_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1601) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1602) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1603))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1602) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1603)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_568_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1604) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1605)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1606));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_584_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1651) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1652)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1653));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_584_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1651) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1652) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1653))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1652) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1653)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_585_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1654) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1655)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1656));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_585_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1654) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1655) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1656))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1655) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1656)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_593_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1677) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1678)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1679));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_593_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1677) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1678) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1679))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1678) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1679)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_594_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1680) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1681)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1682));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_601_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1702) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1703)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1704));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_696_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1988) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1989)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1990));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_697_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1991) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1992)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1993));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_697_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1991) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1992) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1993))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1992) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1993)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_701_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2003) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2004)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2005));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_701_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2003) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2004) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2005))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2004) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2005)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_710_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2029) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2030)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2031));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_711_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2032) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2033)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2034));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_779_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2237) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2238)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2239));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_779_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2237) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2238) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2239))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2238) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2239)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_785_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2253) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2254)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2255));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_785_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2253) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2254) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2255))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2254) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2255)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_788_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2263) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2264)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2265));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2003_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2451) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2452) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2453))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2452) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2453)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2005_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2457) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2458) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2459))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2458) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2459)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2007_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2463) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2464) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2465))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2464) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2465)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2009_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2469) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2470) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2471))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2470) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2471)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2011_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2475) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2476) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2477))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2476) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2477)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2013_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2481) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2482) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2483))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2482) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2483)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2015_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2487) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2488) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2489))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2488) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2489)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2017_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2493) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2494) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2495))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2494) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2495)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2016_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2490) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2491)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2492));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2017_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2493) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2494)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2495));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1019_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_342_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_958))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_342_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_958)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1026_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_989));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1026_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_989))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_989)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1266_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_711_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2052) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2052) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1187_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_594_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1708));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1187_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_594_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1708));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1032_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_360_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_371_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_361_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1038_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_380_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_369_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_381_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_369_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_381_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1039_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_370_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_382_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_371_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1039_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_370_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_382_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_371_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_382_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_371_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1045_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_391_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_380_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_392_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_380_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_392_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1066_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_424_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_413_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_425_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_413_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_425_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1074_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_425_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_437_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_426_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_437_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_426_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1162_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_566_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_557_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_567_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_557_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_567_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1168_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_575_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_566_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_576_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_566_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_576_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1174_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_584_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_575_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_585_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_575_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_585_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1175_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_576_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_586_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_577_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1181_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_585_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1683)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_586_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1181_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_585_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1683) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_586_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1683) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_586_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1252_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_690_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_697_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_691_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_697_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_691_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2212_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2045_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2596));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2209_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2044_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2042_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2045_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2042_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2045_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2211_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2046_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2044_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2047_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2177_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1998_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1996_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1999_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1996_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1999_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2178_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2000_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1998_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2001_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2178_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2000_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1998_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2001_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1998_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2001_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2179_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2002_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2000_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2003_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2179_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2002_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2000_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2003_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2000_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2003_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2180_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2004_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2002_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2005_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2180_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2004_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2002_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2005_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2002_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2005_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2181_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2006_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2004_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2007_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2181_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2006_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2004_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2007_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2004_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2007_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2182_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2008_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2006_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2009_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2182_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2008_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2006_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2009_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2006_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2009_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2183_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2010_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2008_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2011_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2183_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2010_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2008_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2011_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2008_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2011_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2184_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2012_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2010_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2013_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2184_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2012_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2010_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2013_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2010_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2013_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2185_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2014_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2012_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2015_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2185_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2014_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2012_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2015_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2012_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2015_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2186_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2016_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2014_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2017_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2186_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2016_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2014_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2017_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2014_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2017_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1482_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1026_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1019_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2347_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2211_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2209_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2212_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2209_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2212_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2324_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2178_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2177_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1999_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2324_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2178_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2177_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1999_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2177_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1999_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2347_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2211_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2209_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2212_io_out_0));
}
