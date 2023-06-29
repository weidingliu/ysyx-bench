// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop___024root.h"

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__70(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__70\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_610_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1730) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1731) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1732))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1731) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1732)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_618_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1754) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1755) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1756))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1755) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1756)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1192_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_601_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_610_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_601_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_610_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1197_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_618_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_618_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1202_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_626_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_626_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1207_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_633_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_634_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_634_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1604_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1192_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_610_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1604_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1192_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_610_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1608_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1197_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_618_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1608_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1197_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_618_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1612_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1202_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_626_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1612_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1202_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_626_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1616_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1207_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_634_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1616_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1207_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_634_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1411_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_923_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_918_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_924_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_918_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_924_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1415_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_928_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_923_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_929_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_923_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_929_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1416_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_924_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_930_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_925_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_930_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_925_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1417_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_931_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_926_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_932_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1417_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_931_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_926_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_932_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_926_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_932_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1419_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_933_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_928_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_934_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_928_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_934_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1420_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_929_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_935_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_930_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_935_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_930_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1421_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_936_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_931_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_937_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1424_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_934_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_940_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_935_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_940_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_935_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1425_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_941_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_936_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_942_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1425_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_941_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_936_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_942_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_936_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_942_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1429_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_947_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_941_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_948_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1429_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_947_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_941_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_948_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_941_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_948_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1433_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_953_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_947_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_954_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1437_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_959_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_953_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_960_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1437_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_959_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_953_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_960_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_953_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_960_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1441_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_965_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_959_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_966_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1441_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_965_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_959_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_966_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_959_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_966_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1470_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1009_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1002_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1010_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1002_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1010_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1475_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1016_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1009_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1017_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1009_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1017_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1478_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1020_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1013_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1021_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1480_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1023_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1016_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1024_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1016_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1024_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1483_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1027_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1020_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1028_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1483_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1027_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1020_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1028_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1020_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1028_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1484_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1021_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1029_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1022_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1485_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1030_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1023_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1031_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1485_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1030_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1023_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1031_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1023_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1031_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1488_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1034_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1027_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1035_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1489_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1028_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1036_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1029_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1489_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1028_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1036_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1029_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1036_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1029_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1490_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1037_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1030_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1038_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1490_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1037_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1030_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1038_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1030_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1038_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1493_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1041_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1034_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1042_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1494_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1035_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1043_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1036_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1495_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1044_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1037_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1045_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1495_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1044_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1037_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1045_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1037_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1045_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1499_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1042_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1050_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1043_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1500_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1051_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1044_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1052_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1500_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1051_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1044_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1052_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1044_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1052_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1503_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1055_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1048_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1056_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1048_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1056_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1505_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1058_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1051_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1059_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1505_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1058_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1051_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1059_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1051_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1059_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1508_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1062_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1055_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1063_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1055_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1063_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1509_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1056_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1064_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1057_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1064_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1057_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1510_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1065_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1058_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1066_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1513_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1069_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1062_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1070_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1062_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1070_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1514_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1063_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1071_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1064_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1071_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1064_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1518_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1076_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1069_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1077_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1069_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1077_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1519_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1070_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1078_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1071_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1078_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1071_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1520_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1079_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1072_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1080_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1072_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1080_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1524_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1077_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1085_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1078_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1085_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1078_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1535_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1100_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1093_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1101_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1535_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1100_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1093_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1101_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1093_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1101_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1536_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1094_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1102_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1095_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1536_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1094_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1102_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1095_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1102_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1095_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1540_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1107_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1100_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1108_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1540_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1107_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1100_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1108_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1100_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1108_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1541_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1101_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1109_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1102_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1541_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1101_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1109_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1102_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1109_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1102_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1545_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1114_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1107_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1115_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1546_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1108_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1116_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1109_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1548_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1118_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1111_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1119_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1551_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1115_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1123_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1116_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1553_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1125_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1118_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1126_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1553_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1125_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1118_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1126_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1118_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1126_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1554_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1119_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1127_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1120_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1556_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1122_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1130_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1123_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1556_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1122_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1130_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1123_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1130_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1123_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1559_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1126_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1134_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1127_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1559_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1126_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1134_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1127_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1134_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1127_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1561_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1129_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1137_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1130_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1561_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1129_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1137_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1130_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1137_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1130_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1565_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1142_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1135_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1143_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1135_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1143_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1566_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1136_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1144_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1137_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1566_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1136_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1144_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1137_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1144_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1137_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1570_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1149_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1142_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1150_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1570_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1149_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1142_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1150_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1142_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1150_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1571_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1143_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1151_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1144_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1571_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1143_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1151_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1144_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1151_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1144_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1575_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1155_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1149_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1156_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1576_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1150_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1157_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1151_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1576_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1150_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1157_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1151_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1157_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1151_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1579_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1161_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1155_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1162_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1582_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1159_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1166_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1160_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1583_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1167_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1161_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1168_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1596_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1180_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1187_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1181_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1597_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1188_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1182_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1189_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1600_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1186_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_602_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1187_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1601_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1193_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1188_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1194_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1601_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1193_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1188_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1194_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1188_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1194_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1602_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1189_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1195_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1190_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1605_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1198_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1193_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1199_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1605_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1198_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1193_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1199_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1193_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1199_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1606_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1194_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1200_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1195_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1606_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1194_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1200_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1195_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1200_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1195_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1607_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1201_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1196_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1202_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1609_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1203_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1198_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1204_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1610_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1199_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1205_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1200_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1610_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1199_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1205_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1200_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1205_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1200_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1613_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1208_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1203_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1209_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1614_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1204_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1210_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1205_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1617_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1213_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1208_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1214_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1208_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1214_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1618_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1209_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1215_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1210_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1621_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1214_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1220_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1215_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1220_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1215_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1622_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1221_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1216_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1222_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1622_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1221_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1216_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1222_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1216_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1222_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1625_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1226_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1221_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1227_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1625_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1226_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1221_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1227_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1221_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1227_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1628_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1231_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1226_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1232_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1628_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1231_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1226_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1232_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1226_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1232_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1619_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1216_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1211_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1217_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1619_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1216_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1211_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1217_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1211_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1217_io_s)));
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__18(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__18\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h142d788e__0;
    VlWide<3>/*95:0*/ __Vtemp_h953a1fd9__0;
    VlWide<3>/*95:0*/ __Vtemp_h93802347__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c31c3ec__0;
    // Body
    VL_EXTEND_WQ(95,64, __Vtemp_h142d788e__0, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T);
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h953a1fd9__0, __Vtemp_h142d788e__0, 
                  (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
        = __Vtemp_h953a1fd9__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[1U] 
        = __Vtemp_h953a1fd9__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[2U] 
        = (0x7fffffffU & __Vtemp_h953a1fd9__0[2U]);
    VL_EXTEND_WI(95,32, __Vtemp_h93802347__0, (IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T));
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h1c31c3ec__0, __Vtemp_h93802347__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
        = __Vtemp_h1c31c3ec__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[1U] 
        = __Vtemp_h1c31c3ec__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[2U] 
        = (0x7fffffffU & __Vtemp_h1c31c3ec__0[2U]);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T), 
                         (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T) 
           >> (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_60 = ((0x15U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? ((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                      : 
                                                     ((0x304U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                       : 
                                                      ((0x344U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT___T_39
                                                        : vlSelf->CoreTop__DOT__EX__DOT__mip))))))
                                               : ((0x16U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((0x300U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                      : 
                                                     ((0x342U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                       : 
                                                      ((0x304U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                        : 
                                                       ((0x344U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                         : vlSelf->CoreTop__DOT__EX__DOT__mip))))))
                                                   : vlSelf->CoreTop__DOT__EX__DOT__mip));
    vlSelf->CoreTop__DOT__EX_io_is_flush = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                                             | (IData)(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump)) 
                                            & (IData)(vlSelf->CoreTop__DOT__valid_1));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__71(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__71\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_valid 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul) 
           & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)));
    vlSelf->CoreTop__DOT__EX__DOT__div_io_in_valid 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div) 
           & (2U != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)));
    vlSelf->CoreTop__DOT__EX_io_out_valid = (((~ ((2U 
                                                   != (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)) 
                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul))) 
                                              & (~ 
                                                 ((2U 
                                                   != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div)))) 
                                             & (IData)(vlSelf->CoreTop__DOT__valid_1));
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__19(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__19\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__1;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__2;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__3;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__4;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__5;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__6;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__7;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__8;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__9;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__10;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__11;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__12;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__13;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__14;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__15;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__16;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__1;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__17;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__2;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__18;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__3;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__19;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__4;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__20;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__5;
    VlWide<3>/*95:0*/ __Vtemp_hf79295ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h0c529cbd__0;
    VlWide<4>/*127:0*/ __Vtemp_h84c74001__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_h14069084__0;
    VlWide<4>/*127:0*/ __Vtemp_hf92011cd__0;
    VlWide<4>/*127:0*/ __Vtemp_h6acab13b__0;
    // Body
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__0, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__1, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__2, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__3, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__4, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__5, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__6, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__0[1U] >> 0x1bU)))
            ? 0U : ((1U == (7U & (__Vtemp_h3d097fd2__1[1U] 
                                  >> 0x1bU))) ? 0U : 
                    ((2U == (7U & (__Vtemp_h3d097fd2__2[1U] 
                                   >> 0x1bU))) ? 0U
                      : ((3U == (7U & (__Vtemp_h3d097fd2__3[1U] 
                                       >> 0x1bU))) ? 0U
                          : ((4U == (7U & (__Vtemp_h3d097fd2__4[1U] 
                                           >> 0x1bU)))
                              ? 2U : ((5U == (7U & 
                                              (__Vtemp_h3d097fd2__5[1U] 
                                               >> 0x1bU)))
                                       ? 1U : ((6U 
                                                == 
                                                (7U 
                                                 & (__Vtemp_h3d097fd2__6[1U] 
                                                    >> 0x1bU)))
                                                ? 1U
                                                : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__7, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__8, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__9, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__10, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__11, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__12, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__13, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_carry 
        = ((0U == (__Vtemp_h3d097fd2__7[1U] >> 0x1dU))
            ? 0U : ((1U == (__Vtemp_h3d097fd2__8[1U] 
                            >> 0x1dU)) ? 0U : ((2U 
                                                == 
                                                (__Vtemp_h3d097fd2__9[1U] 
                                                 >> 0x1dU))
                                                ? 0U
                                                : (
                                                   (3U 
                                                    == 
                                                    (__Vtemp_h3d097fd2__10[1U] 
                                                     >> 0x1dU))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (__Vtemp_h3d097fd2__11[1U] 
                                                      >> 0x1dU))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (__Vtemp_h3d097fd2__12[1U] 
                                                       >> 0x1dU))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (__Vtemp_h3d097fd2__13[1U] 
                                                        >> 0x1dU))
                                                       ? 1U
                                                       : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__14, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__15, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__0, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__16, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__1, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__17, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__2, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__18, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__3, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__19, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__4, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__20, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__5, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__19[1U] >> 0x1bU)))) {
        __Vtemp_hf79295ef__0[0U] = (~ __Vtemp_h858419c6__4[0U]);
        __Vtemp_hf79295ef__0[1U] = (~ __Vtemp_h858419c6__4[1U]);
        __Vtemp_hf79295ef__0[2U] = (3U & (~ __Vtemp_h858419c6__4[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__20[1U] 
                             >> 0x1bU)))) {
        __Vtemp_hf79295ef__0[0U] = (~ __Vtemp_h858419c6__5[0U]);
        __Vtemp_hf79295ef__0[1U] = (~ __Vtemp_h858419c6__5[1U]);
        __Vtemp_hf79295ef__0[2U] = (3U & (~ __Vtemp_h858419c6__5[2U]));
    } else {
        __Vtemp_hf79295ef__0[0U] = 0U;
        __Vtemp_hf79295ef__0[1U] = 0U;
        __Vtemp_hf79295ef__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h0c529cbd__0, __Vtemp_hf79295ef__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__14[1U] >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__15[1U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__0[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__16[1U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__1[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__1[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__1[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__17[1U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__2[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__2[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__2[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__2[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__2[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__18[1U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__3[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__3[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__3[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__3[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__3[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
            = __Vtemp_h0c529cbd__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
            = __Vtemp_h0c529cbd__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
            = __Vtemp_h0c529cbd__0[2U];
    }
    vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = ((0x44U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                : (
                                                   (0x69U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                    : 
                                                   ((0x71U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                     : 
                                                    ((0x72U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                      : 
                                                     ((0x6dU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                       : 
                                                      ((0x78U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                        : 
                                                       ((0x79U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                         : 
                                                        ((0x7aU 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                             : 
                                                            ((0xfU 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                              : 
                                                             ((0x12U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                               : 
                                                              ((0x10U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                                : 
                                                               ((0x13U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                                 : 
                                                                ((0x43U 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                                                  : vlSelf->CoreTop__DOT__EX__DOT___GEN_60))))))))))))))));
    vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid 
        = ((((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
             & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit)) 
            | ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
               & (3U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state)))) 
           & (~ (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)));
    VL_EXTEND_WQ(127,64, __Vtemp_h84c74001__0, VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))));
    VL_EXTEND_WQ(127,64, __Vtemp_h8248920c__0, (((QData)((IData)(
                                                                 ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp_h14069084__0, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hf92011cd__0, __Vtemp_h14069084__0, 
                  (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    VL_EXTEND_WQ(127,64, __Vtemp_h6acab13b__0, ((0x75U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 
                                                (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U])))
                                                  : 
                                                 ((6U 
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
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                                       : 0ULL))))))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_207 = ((1U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((0x6eU 
                                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                      ? 
                                                                     __Vtemp_h84c74001__0[1U]
                                                                      : 
                                                                     ((0x73U 
                                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                       ? 
                                                                      __Vtemp_h8248920c__0[1U]
                                                                       : 
                                                                      ((0x41U 
                                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                        ? 
                                                                       __Vtemp_hf92011cd__0[1U]
                                                                        : 
                                                                       __Vtemp_h6acab13b__0[1U]))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x6eU 
                                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                       ? 
                                                                      __Vtemp_h84c74001__0[0U]
                                                                       : 
                                                                      ((0x73U 
                                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                        ? 
                                                                       __Vtemp_h8248920c__0[0U]
                                                                        : 
                                                                       ((0x41U 
                                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                         ? 
                                                                        __Vtemp_hf92011cd__0[0U]
                                                                         : 
                                                                        __Vtemp_h6acab13b__0[0U]))))))
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                                    ? 
                                                   ((0x6aU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    ((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                      < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                      ? 1ULL
                                                      : 0ULL)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                       ? 1ULL
                                                       : 0ULL)
                                                      : 0ULL))
                                                    : 0ULL));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__72(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__72\n"); );
    // Body
    vlSelf->CoreTop__DOT___T_4 = ((IData)(vlSelf->CoreTop__DOT__valid) 
                                  & (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready));
    vlSelf->CoreTop__DOT___T_7 = ((IData)(vlSelf->CoreTop__DOT__EX_io_out_valid) 
                                  & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)));
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_19 = ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                                   ? 
                                                  ((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready)
                                                    ? 0U
                                                    : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state))
                                                   : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__read_state));
    vlSelf->CoreTop__DOT___GEN_25 = (((IData)(vlSelf->CoreTop__DOT__EX_io_out_valid) 
                                      & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))) 
                                     | ((~ (IData)(vlSelf->CoreTop__DOT__MEM_io_out_valid)) 
                                        & (IData)(vlSelf->CoreTop__DOT__valid_2)));
    vlSelf->CoreTop__DOT___GEN_6 = (((IData)(vlSelf->CoreTop__DOT__valid) 
                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready)) 
                                    | ((~ ((~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)) 
                                           & (IData)(vlSelf->CoreTop__DOT__EX_io_out_valid))) 
                                       & (IData)(vlSelf->CoreTop__DOT__valid_1)));
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__20(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__20\n"); );
    // Body
    vlSelf->CoreTop__DOT___T_1 = ((IData)(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid) 
                                  & (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready));
    vlSelf->CoreTop__DOT___GEN_1 = (((IData)(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid) 
                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready)) 
                                    | ((~ ((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                           & (IData)(vlSelf->CoreTop__DOT__valid))) 
                                       & (IData)(vlSelf->CoreTop__DOT__valid)));
    if (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) {
        vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
            = (((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                   : 0ULL) | ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                               : 0ULL)) | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18
                                            : 0ULL)) 
               | ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13
                   : 0ULL));
        vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
            = (((((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                   : 0ULL) | ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16
                               : 0ULL)) | ((2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                                            : 0ULL)) 
               | ((3U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2))
                   ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26
                   : 0ULL));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S;
        vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])));
    }
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__73(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__73\n"); );
    // Body
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316 
        = ((0x1013U == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0x41U : ((0x6013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                        ? 0x44U : ((0x3003U == (0x707fU 
                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                    ? 0x45U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_313))));
}

VL_INLINE_OPT void VCoreTop___024root___combo__TOP__21(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___combo__TOP__21\n"); );
    // Init
    QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_26;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_30;
    // Body
    CoreTop__DOT__EX__DOT___alu_result_T_26 = (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient 
                                                                             >> 0x1fU)))
                                                                  ? 0xffffffffU
                                                                  : 0U))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient)));
    CoreTop__DOT__EX__DOT___alu_result_T_30 = (((QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder 
                                                                             >> 0x1fU)))
                                                                  ? 0xffffffffU
                                                                  : 0U))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder)));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_145 = ((0x72U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                   ^ vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                : (
                                                   (0x6dU 
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
                                                      ? CoreTop__DOT__EX__DOT___alu_result_T_26
                                                      : 
                                                     ((0x7aU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? CoreTop__DOT__EX__DOT___alu_result_T_30
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? CoreTop__DOT__EX__DOT___alu_result_T_30
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
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder
                                                           : 
                                                          ((0x12U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder
                                                            : 
                                                           ((0x10U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? CoreTop__DOT__EX__DOT___alu_result_T_26
                                                             : 
                                                            ((0x13U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient
                                                              : 
                                                             ((0x43U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient
                                                               : 
                                                              ((0x15U 
                                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57
                                                                : 
                                                               ((0x16U 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57
                                                                 : 0ULL)))))))))))))));
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
            ? ((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                : ((0x1aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                    ? vlSelf->CoreTop__DOT__EX__DOT__src2
                    : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                        ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                        : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                            ? (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                               | vlSelf->CoreTop__DOT__EX__DOT__src2)
                            : ((0x69U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                : ((0x71U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                    ? (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                       & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                    : vlSelf->CoreTop__DOT__EX__DOT___GEN_145))))))
            : ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                ? ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                    ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                    : 0ULL) : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                ? 0ULL : vlSelf->CoreTop__DOT__EX__DOT___GEN_207)));
}

VL_INLINE_OPT void VCoreTop___024root___sequent__TOP__74(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___sequent__TOP__74\n"); );
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1084) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1085) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1086))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1085) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1086)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_21) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_22));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_26) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_27));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_151) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_152)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_153));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_65) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_66) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_67))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_66) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_67)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_76) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_77)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_78));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_21) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_22));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_18) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_19)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_20));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_26) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_27));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_18) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_19) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_20))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_19) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_20)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_154) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_155) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_156))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_155) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_156)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_167) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_168)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_169));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_167) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_168) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_169))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_168) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_169)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_170) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_171)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_172));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_93_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_180) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_181)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_182));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_94_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_183) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_184)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_185));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_819_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_52_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_53_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_53_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_821_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_835_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_80_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_76_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_838_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_80_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_838_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_80_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_831_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_70_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_834_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_74_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_837_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_78_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_840_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_841_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_166))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_166)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1047_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1082_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_450_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_450_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1096_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_472_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1302_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_764_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1325_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1326_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_808_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_808_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_809_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_41_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_809_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_41_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_811_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_43_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_46_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_43_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_46_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_818_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_51_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_818_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_51_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_51_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_819_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_52_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_53_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_820_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_58_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_820_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_58_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_58_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_821_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_822_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_60_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_61_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_61_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_833_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_77_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_73_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_78_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_834_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_74_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_839_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_840_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_842_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_842_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_843_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_845_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_93_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_94_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_845_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_93_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_94_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_94_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_846_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_865_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_123_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_118_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_124_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_866_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_119_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_125_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_120_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_881_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_147_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_141_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_148_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_882_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_142_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_149_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_143_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_885_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_153_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_147_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_154_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_886_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_148_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_155_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_149_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_889_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_159_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_153_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_160_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_890_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_154_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_161_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_155_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_893_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_166_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_159_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_167_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_894_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_160_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_168_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_161_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_898_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_173_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_166_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_174_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_899_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_167_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_175_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_168_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1046_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_381_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_393_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_382_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1053_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_392_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_404_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_393_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1060_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_403_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_415_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_404_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1067_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_414_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_426_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_415_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1073_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_435_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_424_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_436_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_424_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_436_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1074_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_425_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_437_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_426_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1080_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_446_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_435_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_447_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_435_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_447_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1081_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_436_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_448_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_437_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1081_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_436_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_448_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_437_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_448_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_437_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1087_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_457_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_446_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_458_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_446_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_458_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1088_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_447_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_459_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_448_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1088_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_447_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_459_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_448_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_459_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_448_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1090_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_462_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_451_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_463_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1091_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_452_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_464_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_453_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1099_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_476_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_465_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_477_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1316_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_787_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_785_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_788_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_785_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_788_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1333_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_808_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_807_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1333_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_808_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_807_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1344_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_823_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_97));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1371_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_864_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_860_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1371_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_864_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_860_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1374_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_868_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_864_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1374_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_868_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_864_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1377_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_872_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_868_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1377_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_872_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_868_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1487_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1033_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1026_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1695_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1326_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1325_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1695_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1326_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1325_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1334_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_809_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_808_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1334_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_809_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_808_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_808_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1335_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_810_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_809_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1335_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_810_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_809_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_809_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1337_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_812_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_811_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_813_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1337_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_812_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_811_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_813_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_811_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_813_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1338_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_814_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_812_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_815_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1338_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_814_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_812_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_815_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_812_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_815_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1339_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_816_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_814_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_817_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1339_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_816_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_814_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_817_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_814_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_817_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1340_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_818_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_816_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_819_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1340_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_818_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_816_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_819_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_816_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_819_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1341_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_820_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_818_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_821_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1341_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_820_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_818_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_821_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_818_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_821_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1342_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_822_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_820_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_823_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1342_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_822_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_820_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_823_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_820_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_823_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1343_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_824_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_822_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_825_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1343_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_824_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_822_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_825_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_822_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_825_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1345_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_826_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_824_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_827_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1345_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_826_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_824_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_827_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_824_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_827_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1347_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_828_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_826_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_829_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1347_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_828_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_826_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_829_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_826_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_829_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1349_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_830_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_828_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_831_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1349_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_830_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_828_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_831_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_828_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_831_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1351_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_833_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_830_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_834_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1351_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_833_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_830_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_834_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_830_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_834_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1352_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_831_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_835_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_832_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1353_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_836_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_833_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_837_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1353_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_836_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_833_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_837_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_833_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_837_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1354_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_834_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_838_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_835_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1355_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_839_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_836_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_840_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1355_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_839_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_836_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_840_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_836_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_840_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1356_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_837_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_841_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_838_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1357_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_842_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_839_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_843_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1357_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_842_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_839_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_843_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_839_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_843_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1358_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_840_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_844_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_841_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1359_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_845_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_842_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_846_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1359_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_845_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_842_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_846_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_842_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_846_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1360_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_843_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_847_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_844_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1360_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_843_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_847_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_844_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_847_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_844_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1361_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_848_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_845_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_849_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1361_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_848_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_845_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_849_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_845_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_849_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1362_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_846_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_850_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_847_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1362_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_846_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_850_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_847_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_850_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_847_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1363_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_851_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_848_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_852_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1363_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_851_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_848_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_852_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_848_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_852_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1364_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_849_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_853_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_850_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1364_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_849_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_853_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_850_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_853_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_850_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1365_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_854_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_851_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_855_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1365_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_854_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_851_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_855_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_851_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_855_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1366_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_852_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_856_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_853_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1366_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_852_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_856_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_853_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_856_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_853_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1367_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_857_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_854_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_858_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1367_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_857_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_854_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_858_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_854_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_858_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1368_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_855_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_859_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_856_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1368_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_855_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_859_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_856_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_859_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_856_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1369_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_861_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_857_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_862_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1369_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_861_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_857_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_862_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_857_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_862_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1370_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_858_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_863_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_859_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1370_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_858_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_863_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_859_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_863_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_859_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1372_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_865_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_861_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_866_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1372_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_865_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_861_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_866_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_861_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_866_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1373_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_862_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_867_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_863_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1373_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_862_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_867_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_863_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_867_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_863_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1375_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_869_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_865_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_870_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1376_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_866_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_871_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_867_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1376_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_866_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_871_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_867_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_871_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_867_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1378_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_873_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_869_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_874_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1379_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_870_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_875_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_871_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1381_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_877_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_873_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_878_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1382_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_874_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_879_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_875_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1384_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_881_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_877_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_882_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1384_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_881_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_877_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_882_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_877_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_882_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1385_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_878_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_883_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_879_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1386_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_884_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_880_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_358));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1387_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_885_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_881_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_886_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1387_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_885_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_881_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_886_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_881_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_886_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1388_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_882_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_887_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_883_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1388_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_882_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_887_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_883_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_887_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_883_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1389_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_888_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_884_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_377));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1390_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_889_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_885_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_890_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1390_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_889_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_885_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_890_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_885_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_890_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1391_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_886_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_891_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_887_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1391_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_886_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_891_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_887_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_891_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_887_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1393_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_893_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_889_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_894_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1393_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_893_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_889_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_894_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_889_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_894_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1394_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_890_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_895_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_891_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1394_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_890_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_895_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_891_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_895_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_891_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1396_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_898_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_893_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_899_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1396_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_898_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_893_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_899_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_893_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_899_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1397_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_894_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_900_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_895_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1397_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_894_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_900_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_895_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_900_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_895_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1400_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_899_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_905_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_900_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1400_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_899_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_905_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_900_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_905_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_900_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1446_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_966_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_973_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_967_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1450_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_972_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_979_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_973_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1454_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_978_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_985_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_979_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1458_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_984_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_991_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_985_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1471_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1003_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1011_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1004_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1486_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1024_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1032_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1025_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1492_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1040_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1033_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_373_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1496_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1038_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1046_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1039_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1496_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1038_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1046_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1039_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1046_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1039_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1497_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1047_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1040_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1501_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1045_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1053_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1046_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1501_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1045_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1053_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1046_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1053_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1046_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1502_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1054_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1047_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1506_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1052_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1060_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1053_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1506_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1052_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1060_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1053_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1060_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1053_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1507_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1061_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1054_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1511_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1059_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1067_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1060_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1511_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1059_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1067_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1060_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1067_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1060_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1512_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1068_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1061_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1516_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1066_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1074_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1067_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1516_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1066_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1074_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1067_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1074_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1067_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1517_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1075_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1068_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_428_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1521_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1073_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1081_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1074_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1521_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1073_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1081_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1074_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1081_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1074_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1522_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1082_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1075_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_439_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1526_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1080_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1088_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1081_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1526_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1080_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1088_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1081_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1088_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1081_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1527_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1089_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1082_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_450_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1528_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1090_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1083_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1091_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1528_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1090_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1083_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1091_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1083_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1091_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1531_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1087_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1095_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1088_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1531_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1087_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1095_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1088_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1095_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1088_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1532_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1096_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1089_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_461_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1534_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1091_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1099_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1092_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1534_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1091_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1099_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1092_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1099_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1092_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1656_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1271_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1267_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1272_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1656_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1271_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1267_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1272_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1267_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1272_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1659_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1274_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1271_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1275_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1659_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1274_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1271_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1275_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1271_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1275_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1660_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1272_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1276_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1273_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1660_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1272_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1276_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1273_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1276_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1273_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1661_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1277_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1274_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1278_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1661_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1277_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1274_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1278_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1274_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1278_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1662_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1275_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1279_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1276_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1662_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1275_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1279_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1276_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1279_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1276_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1664_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1278_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1282_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1279_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1664_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1278_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1282_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1279_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1282_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1279_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1680_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1302_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2218)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1303_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1687_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1318_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1316_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_788_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1687_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1318_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1316_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_788_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1316_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_788_io_cout)));
}

#ifdef VL_DEBUG
void VCoreTop___024root___eval_debug_assertions(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
