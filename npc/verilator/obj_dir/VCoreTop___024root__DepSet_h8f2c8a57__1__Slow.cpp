// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop___024root.h"

extern const VlUnpacked<CData/*1:0*/, 64> VCoreTop__ConstPool__TABLE_h61881c40_0;

VL_ATTR_COLD void VCoreTop___024root___settle__TOP__2(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___settle__TOP__2\n"); );
    // Init
    QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_26;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_30;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___T_39;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_60;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_80;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_100;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_120;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_147;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_167;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_207;
    QData/*63:0*/ CoreTop__DOT__EX__DOT___dnpc_T_11;
    CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1;
    VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6;
    CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_2;
    CData/*5:0*/ __Vtableidx3;
    VlWide<3>/*95:0*/ __Vtemp_h98e576ab__0;
    VlWide<3>/*95:0*/ __Vtemp_hb83b8734__0;
    VlWide<3>/*95:0*/ __Vtemp_h754902ca__0;
    VlWide<3>/*95:0*/ __Vtemp_hc2a14447__0;
    VlWide<3>/*95:0*/ __Vtemp_h142d788e__0;
    VlWide<3>/*95:0*/ __Vtemp_h953a1fd9__0;
    VlWide<3>/*95:0*/ __Vtemp_h93802347__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c31c3ec__0;
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
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__16;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__17;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__18;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__19;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__20;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__21;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__22;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__23;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__24;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__25;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__26;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__27;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__28;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__29;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__30;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__31;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__32;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__33;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__34;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__35;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__36;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__37;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__38;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__39;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__40;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__41;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__42;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__43;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__44;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__45;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__46;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__47;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__48;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__49;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__50;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__51;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__52;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__53;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__54;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__55;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__56;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__57;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__58;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__59;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__60;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__61;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__62;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__63;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__64;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__65;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__66;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__67;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__68;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__69;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__70;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__71;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__72;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__73;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__74;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__75;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__76;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__77;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__78;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__79;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__80;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__81;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__82;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__83;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__84;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__85;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__86;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__87;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__88;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__89;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__90;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__91;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__92;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__93;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__94;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__95;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__96;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__97;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__98;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__99;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__100;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__101;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__102;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__103;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__104;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__105;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__106;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__107;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__108;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__109;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__110;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__111;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__112;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__113;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__114;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__115;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__116;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__117;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__118;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__119;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__120;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__121;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__122;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__123;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__124;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__125;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__126;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__127;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__128;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__129;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__130;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__131;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__132;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__133;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__134;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__135;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__136;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__137;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__138;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__139;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__140;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__141;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__142;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__143;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__144;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__145;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__146;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__147;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__148;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__149;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__150;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__151;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__152;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__153;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__154;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__155;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__156;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__157;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__158;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__159;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__160;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__161;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__162;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__163;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__164;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__165;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__166;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__167;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__168;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__169;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__170;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__171;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__172;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__173;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__174;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__175;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__176;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__177;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__178;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__179;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__180;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__181;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__182;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__183;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__184;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__185;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__186;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__187;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__188;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__189;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__190;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__191;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__192;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__193;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__194;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__195;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__196;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__197;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__198;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__199;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__200;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__201;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__202;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__203;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__204;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__205;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__206;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__207;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__208;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__209;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__210;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__211;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__212;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__213;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__214;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__215;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__216;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__217;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__218;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__219;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__220;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__221;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__222;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__223;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__224;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__225;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__226;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__1;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__227;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__2;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__228;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__3;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__229;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__4;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__230;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__5;
    VlWide<3>/*95:0*/ __Vtemp_h0ce8362d__0;
    VlWide<3>/*95:0*/ __Vtemp_h6c9ebc60__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__231;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__232;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__6;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__233;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__7;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__234;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__8;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__235;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__9;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__236;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__10;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__237;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__11;
    VlWide<3>/*95:0*/ __Vtemp_h868168b5__0;
    VlWide<3>/*95:0*/ __Vtemp_h290c66f2__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__238;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__239;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__12;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__240;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__13;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__241;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__14;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__242;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__15;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__243;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__16;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__244;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__17;
    VlWide<3>/*95:0*/ __Vtemp_he798f560__0;
    VlWide<3>/*95:0*/ __Vtemp_h3bce99b2__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__245;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__246;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__18;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__247;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__19;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__248;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__20;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__249;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__21;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__250;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__22;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__251;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__23;
    VlWide<3>/*95:0*/ __Vtemp_h5ebda43d__0;
    VlWide<3>/*95:0*/ __Vtemp_h290b48d8__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__252;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__253;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__24;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__254;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__25;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__255;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__26;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__256;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__27;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__257;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__28;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__258;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__29;
    VlWide<3>/*95:0*/ __Vtemp_h9f0854d4__0;
    VlWide<3>/*95:0*/ __Vtemp_h9a5b9220__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__259;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__260;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__30;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__261;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__31;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__262;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__32;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__263;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__33;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__264;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__34;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__265;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__35;
    VlWide<3>/*95:0*/ __Vtemp_hf9a144d9__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a3c5832__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__266;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__267;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__36;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__268;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__37;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__269;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__38;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__270;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__39;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__271;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__40;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__272;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__41;
    VlWide<3>/*95:0*/ __Vtemp_h6694df71__0;
    VlWide<3>/*95:0*/ __Vtemp_h86d3d605__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__273;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__274;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__42;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__275;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__43;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__276;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__44;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__277;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__45;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__278;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__46;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__279;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__47;
    VlWide<3>/*95:0*/ __Vtemp_h46320a6f__0;
    VlWide<3>/*95:0*/ __Vtemp_h09637d0a__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__280;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__281;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__48;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__282;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__49;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__283;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__50;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__284;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__51;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__285;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__52;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__286;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__53;
    VlWide<3>/*95:0*/ __Vtemp_h5ec30dc3__0;
    VlWide<3>/*95:0*/ __Vtemp_habb2d473__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__287;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__288;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__54;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__289;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__55;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__290;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__56;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__291;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__57;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__292;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__58;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__293;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__59;
    VlWide<3>/*95:0*/ __Vtemp_hdc7cb6fb__0;
    VlWide<3>/*95:0*/ __Vtemp_hbeeed270__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__294;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__295;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__60;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__296;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__61;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__297;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__62;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__298;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__63;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__299;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__64;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__300;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__65;
    VlWide<3>/*95:0*/ __Vtemp_hd86eede0__0;
    VlWide<3>/*95:0*/ __Vtemp_h9c928e59__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__301;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__302;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__66;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__303;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__67;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__304;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__68;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__305;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__69;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__306;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__70;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__307;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__71;
    VlWide<3>/*95:0*/ __Vtemp_h5cd679d2__0;
    VlWide<3>/*95:0*/ __Vtemp_hae6a442c__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__308;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__309;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__72;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__310;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__73;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__311;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__74;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__312;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__75;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__313;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__76;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__314;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__77;
    VlWide<3>/*95:0*/ __Vtemp_hdd205b38__0;
    VlWide<3>/*95:0*/ __Vtemp_hbf4ecad8__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__315;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__316;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__78;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__317;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__79;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__318;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__80;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__319;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__81;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__320;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__82;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__321;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__83;
    VlWide<3>/*95:0*/ __Vtemp_h94114985__0;
    VlWide<3>/*95:0*/ __Vtemp_ha473db26__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__322;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__323;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__84;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__324;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__85;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__325;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__86;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__326;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__87;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__327;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__88;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__328;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__89;
    VlWide<3>/*95:0*/ __Vtemp_h79beac53__0;
    VlWide<3>/*95:0*/ __Vtemp_hdc1a9f5b__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__329;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__330;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__90;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__331;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__91;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__332;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__92;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__333;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__93;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__334;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__94;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__335;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__95;
    VlWide<3>/*95:0*/ __Vtemp_haa7b9ab0__0;
    VlWide<3>/*95:0*/ __Vtemp_h54811f5a__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__336;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__337;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__96;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__338;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__97;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__339;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__98;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__340;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__99;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__341;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__100;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__342;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__101;
    VlWide<3>/*95:0*/ __Vtemp_h461606a8__0;
    VlWide<3>/*95:0*/ __Vtemp_hf44b5906__0;
    VlWide<3>/*95:0*/ __Vtemp_h6f36491a__0;
    VlWide<3>/*95:0*/ __Vtemp_h1297b3ff__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__343;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__344;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__102;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__345;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__103;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__346;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__104;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__347;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__105;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__348;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__106;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__349;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__107;
    VlWide<3>/*95:0*/ __Vtemp_h6d7d3b64__0;
    VlWide<3>/*95:0*/ __Vtemp_h0dbaa521__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__350;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__351;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__108;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__352;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__109;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__353;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__110;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__354;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__111;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__355;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__112;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__356;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__113;
    VlWide<3>/*95:0*/ __Vtemp_h864e4001__0;
    VlWide<3>/*95:0*/ __Vtemp_hf9c49f07__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__357;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__358;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__114;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__359;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__115;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__360;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__116;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__361;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__117;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__362;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__118;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__363;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__119;
    VlWide<3>/*95:0*/ __Vtemp_h63371670__0;
    VlWide<3>/*95:0*/ __Vtemp_h40be48a1__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__364;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__365;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__120;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__366;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__121;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__367;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__122;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__368;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__123;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__369;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__124;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__370;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__125;
    VlWide<3>/*95:0*/ __Vtemp_h9d824b79__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ca65954__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__371;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__372;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__126;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__373;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__127;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__374;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__128;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__375;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__129;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__376;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__130;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__377;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__131;
    VlWide<3>/*95:0*/ __Vtemp_h00f7e2cc__0;
    VlWide<3>/*95:0*/ __Vtemp_h8f82102b__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__378;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__379;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__132;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__380;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__133;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__381;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__134;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__382;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__135;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__383;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__136;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__384;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__137;
    VlWide<3>/*95:0*/ __Vtemp_h8579c4f2__0;
    VlWide<3>/*95:0*/ __Vtemp_ha1e2c4da__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__385;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__386;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__138;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__387;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__139;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__388;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__140;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__389;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__141;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__390;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__142;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__391;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__143;
    VlWide<3>/*95:0*/ __Vtemp_h95f2ed65__0;
    VlWide<3>/*95:0*/ __Vtemp_h65081628__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__392;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__393;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__144;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__394;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__145;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__395;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__146;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__396;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__147;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__397;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__148;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__398;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__149;
    VlWide<3>/*95:0*/ __Vtemp_hee439e28__0;
    VlWide<3>/*95:0*/ __Vtemp_h3055a237__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__399;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__400;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__150;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__401;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__151;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__402;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__152;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__403;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__153;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__404;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__154;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__405;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__155;
    VlWide<3>/*95:0*/ __Vtemp_hc52b9f6d__0;
    VlWide<3>/*95:0*/ __Vtemp_h688d3655__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__406;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__407;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__156;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__408;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__157;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__409;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__158;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__410;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__159;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__411;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__160;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__412;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__161;
    VlWide<3>/*95:0*/ __Vtemp_hefb85986__0;
    VlWide<3>/*95:0*/ __Vtemp_h6a6cce3f__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__413;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__414;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__162;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__415;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__163;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__416;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__164;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__417;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__165;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__418;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__166;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__419;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__167;
    VlWide<3>/*95:0*/ __Vtemp_hbfbaa527__0;
    VlWide<3>/*95:0*/ __Vtemp_h33afd780__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__420;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__421;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__168;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__422;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__169;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__423;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__170;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__424;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__171;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__425;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__172;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__426;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__173;
    VlWide<3>/*95:0*/ __Vtemp_h843827e6__0;
    VlWide<3>/*95:0*/ __Vtemp_h62a80a67__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__427;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__428;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__174;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__429;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__175;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__430;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__176;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__431;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__177;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__432;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__178;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__433;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__179;
    VlWide<3>/*95:0*/ __Vtemp_h7b511df4__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a55c872__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__434;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__435;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__180;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__436;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__181;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__437;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__182;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__438;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__183;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__439;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__184;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__440;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__185;
    VlWide<3>/*95:0*/ __Vtemp_h6a52b92a__0;
    VlWide<3>/*95:0*/ __Vtemp_h5244360b__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__441;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__442;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__186;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__443;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__187;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__444;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__188;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__445;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__189;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__446;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__190;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__447;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__191;
    VlWide<3>/*95:0*/ __Vtemp_hb0182e67__0;
    VlWide<3>/*95:0*/ __Vtemp_he97e4669__0;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__448;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__449;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__192;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__450;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__193;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__451;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__194;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__452;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__195;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__453;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__196;
    VlWide<3>/*95:0*/ __Vtemp_h3d097fd2__454;
    VlWide<3>/*95:0*/ __Vtemp_h858419c6__197;
    VlWide<3>/*95:0*/ __Vtemp_h34245a5f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6a79dc60__0;
    VlWide<3>/*95:0*/ __Vtemp_h08e19294__0;
    VlWide<3>/*95:0*/ __Vtemp_h14dbb106__0;
    VlWide<5>/*159:0*/ __Vtemp_h5943c197__0;
    VlWide<5>/*159:0*/ __Vtemp_h97a97068__0;
    VlWide<4>/*127:0*/ __Vtemp_h84c74001__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_h14069084__0;
    VlWide<4>/*127:0*/ __Vtemp_hf92011cd__0;
    VlWide<4>/*127:0*/ __Vtemp_h6acab13b__0;
    // Body
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_2 
        = (((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
            & (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we)) 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit));
    if (((1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
         & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit))) {
        CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 = 1U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_bits_rdata 
            = ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                     >> 3U)))) ? (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U])))
                : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U])))
                    : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U])))
                        : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U])) 
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
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU])))
                                    : ((6U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU])))
                                        : ((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU])))
                                            : 0ULL))))))));
    } else {
        CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1 = 0U;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_bits_rdata 
            = ((0U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                     >> 3U)))) ? (((QData)((IData)(
                                                                   vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U])))
                : ((1U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                         >> 3U)))) ? 
                   (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U])))
                    : ((2U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                             >> 3U))))
                        ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U])))
                        : ((3U == (7U & (IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                 >> 3U))))
                            ? (((QData)((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U])) 
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
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU])))
                                    : ((6U == (7U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                             >> 3U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU])))
                                        : ((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr 
                                                              >> 3U))))
                                            ? (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU])))
                                            : 0ULL))))))));
    }
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
    __Vtableidx3 = (((IData)(vlSelf->CoreTop__DOT__ARBITER_io_out_waddr_req_valid) 
                     << 5U) | (((IData)(vlSelf->CoreTop__DOT__ARBITER_io_out_raddr_req_valid) 
                                << 4U) | ((8U & (((~ 
                                                   ((IData)(vlSelf->CoreTop__DOT__MMEM_r_valid) 
                                                    | (IData)(vlSelf->CoreTop__DOT__MMEM_bvalid))) 
                                                  | ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)
                                                      ? (IData)(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__aw_state)
                                                      : (IData)(vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT__aw_state))) 
                                                 << 3U)) 
                                          | (((IData)(vlSelf->CoreTop__DOT__MMEM__DOT__state) 
                                              << 1U) 
                                             | (IData)(vlSelf->reset)))));
    vlSelf->CoreTop__DOT__MMEM__DOT__next_state = VCoreTop__ConstPool__TABLE_h61881c40_0
        [__Vtableidx3];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr 
        = (((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
            | (IData)(CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_2))
            ? vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr
            : 0ULL);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_rep 
        = ((IData)(CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_2) 
           | ((IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) 
              & (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_5 
        = ((IData)(CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
           | ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
              & (8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count))));
    if (((IData)(CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
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
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_valid 
        = (((IData)(CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1) 
            | ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
               & (8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)))) 
           & (~ (IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we)));
    if (vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_valid) {
        if (((0xa0000000ULL <= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr) 
             & (0xa2000000ULL >= vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_addr))) {
            vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                = vlSelf->CoreTop__DOT__MMEM_rdata;
            vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep 
                = vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid;
            vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid 
                = vlSelf->CoreTop__DOT__MEM_axi_birdge_io_in_rdata_rep_valid;
        } else {
            vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_bits_rdata;
            vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_rep;
            vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid 
                = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_valid;
        }
    } else {
        vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_bits_rdata;
        vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_rep;
        vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_valid;
    }
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
    vlSelf->CoreTop__DOT__MEM_io_out_valid = (1U & 
                                              (~ ((~ (IData)(vlSelf->CoreTop__DOT__valid_2)) 
                                                  | (((IData)(vlSelf->CoreTop__DOT__valid_2) 
                                                      & (4U 
                                                         == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))) 
                                                     & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid)) 
                                                        & (~ (IData)(vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep)))))));
    vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6 
        = (((IData)(vlSelf->CoreTop__DOT__valid_2) 
            & (4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))) 
           & ((~ (IData)(vlSelf->CoreTop__DOT__MMIO_io_in_rdata_rep_valid)) 
              & (~ (IData)(vlSelf->CoreTop__DOT__MMIO_io_in_wdata_rep))));
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
    vlSelf->CoreTop__DOT___GEN_47 = vlSelf->CoreTop__DOT__MEM_io_out_valid;
    vlSelf->CoreTop__DOT___T_7 = ((IData)(vlSelf->CoreTop__DOT__EX_io_out_valid) 
                                  & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)));
    vlSelf->CoreTop__DOT___GEN_25 = (((IData)(vlSelf->CoreTop__DOT__EX_io_out_valid) 
                                      & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))) 
                                     | ((~ (IData)(vlSelf->CoreTop__DOT__MEM_io_out_valid)) 
                                        & (IData)(vlSelf->CoreTop__DOT__valid_2)));
    vlSelf->CoreTop__DOT__EX_io_in_ready = (1U & ((~ 
                                                   ((((2U 
                                                       != (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)) 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_mul)) 
                                                     | ((2U 
                                                         != (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX__DOT__is_div))) 
                                                    & (IData)(vlSelf->CoreTop__DOT__valid_1))) 
                                                  & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6))));
    vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump = 
        ((((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType)) 
           & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
          & (IData)(vlSelf->CoreTop__DOT__valid_1)) 
         & (~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)));
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
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0U] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[1U] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[2U] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[3U] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[4U] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[5U] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[6U] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[7U] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[8U] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[9U] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xaU] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xbU] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xcU] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xdU] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xeU] 
        = ((IData)(vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata) 
           & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU]);
    CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xfU] 
        = ((IData)((vlSelf->CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata 
                    >> 0x20U)) & vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU]);
    vlSelf->CoreTop__DOT___T_4 = ((IData)(vlSelf->CoreTop__DOT__valid) 
                                  & (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready));
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_45 = (((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                                   & (8U 
                                                      == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count)))
                                                   ? 0U
                                                   : 
                                                  (0xfU 
                                                   & ((1U 
                                                       & (((~ (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready)) 
                                                           & (8U 
                                                              == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                                          | (~ (IData)(vlSelf->CoreTop__DOT__If_axi_birdge_io_in_rdata_rep_valid))))
                                                       ? (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count)
                                                       : 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count)))));
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_121 = (
                                                   (2U 
                                                    == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                    ? 
                                                   (((8U 
                                                      == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count)) 
                                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready))
                                                     ? 0U
                                                     : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state))
                                                    : (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state));
    vlSelf->CoreTop__DOT__ICACHE__DOT___GEN_25 = ((1U 
                                                   & (((~ (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready)) 
                                                       & (8U 
                                                          == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count))) 
                                                      | (~ (IData)(vlSelf->CoreTop__DOT__If_axi_birdge_io_in_rdata_rep_valid))))
                                                   ? vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg
                                                   : 
                                                  (8ULL 
                                                   + vlSelf->CoreTop__DOT__ICACHE__DOT__mem_addr_reg));
    vlSelf->CoreTop__DOT___GEN_6 = (((IData)(vlSelf->CoreTop__DOT__valid) 
                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready)) 
                                    | ((~ ((~ (IData)(vlSelf->CoreTop__DOT__MEM__DOT___io_out_valid_T_6)) 
                                           & (IData)(vlSelf->CoreTop__DOT__EX_io_out_valid))) 
                                       & (IData)(vlSelf->CoreTop__DOT__valid_1)));
    vlSelf->CoreTop__DOT__EX__DOT__src2 = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                            ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG2
                                            : vlSelf->CoreTop__DOT__EX__DOT___GEN_3);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
            ? vlSelf->CoreTop__DOT__mem_bypass_io_Bypass_REG1
            : vlSelf->CoreTop__DOT__EX__DOT___GEN_1);
    if (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[1U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[1U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[1U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[2U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[2U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[2U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[3U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[3U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[3U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[4U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[4U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[4U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[5U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[5U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[5U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[6U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[6U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[6U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[7U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[7U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[7U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[8U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[8U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[8U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[9U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[9U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[9U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xaU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xaU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xaU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xbU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xbU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xbU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xcU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xcU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xcU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xdU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xdU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xdU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xeU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xeU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xeU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xfU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg[0xfU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xfU]);
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[1U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[1U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[1U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[1U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[2U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[2U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[2U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[2U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[3U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[3U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[3U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[3U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[4U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[4U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[4U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[4U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[5U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[5U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[5U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[5U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[6U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[6U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[6U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[6U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[7U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[7U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[7U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[7U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[8U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[8U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[8U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[8U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[9U] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[9U] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[9U])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[9U]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xaU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xaU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xaU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xaU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xbU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xbU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xbU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xbU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xcU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xcU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xcU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xcU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xdU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xdU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xdU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xdU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xeU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xeU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xeU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xeU]);
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata[0xfU] 
            = ((vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data[0xfU] 
                & (~ vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend[0xfU])) 
               | CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6[0xfU]);
    }
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
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
        = (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
           - vlSelf->CoreTop__DOT__EX__DOT__src2);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T), 
                         (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T) 
           >> (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
    vlSelf->CoreTop__DOT__EX__DOT__branch_flag = ((0x6bU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                   == vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                   : 
                                                  ((0x6cU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                    != vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x76U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    VL_GTES_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                     : 
                                                    ((0x7bU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 
                                                      (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                       < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 
                                                       (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                        >= vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                        | (0x18U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)))))))));
    CoreTop__DOT__EX__DOT___T_39 = (vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57 
                                    | vlSelf->CoreTop__DOT__EX__DOT___shift_result_T);
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
        = (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
           + vlSelf->CoreTop__DOT__EX__DOT__src2);
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25)));
    vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35 
        = (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31)));
    CoreTop__DOT__EX__DOT___dnpc_T_11 = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag)
                                          ? ((0x6bU 
                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                              : ((0x6cU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                  : 
                                                 ((0x76U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                   : 
                                                  ((0x7bU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                      : 0ULL))))))
                                          : (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC));
    vlSelf->CoreTop__DOT__EX_io_is_flush = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__branch_flag) 
                                             | (IData)(vlSelf->CoreTop__DOT__EX_io_branchIO_is_jump)) 
                                            & (IData)(vlSelf->CoreTop__DOT__valid_1));
    CoreTop__DOT__EX__DOT___GEN_60 = ((0x15U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? ((0x300U == 
                                           (0xfffU 
                                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                           ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                           : ((0x305U 
                                               == (0xfffU 
                                                   & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                               ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                               : ((0x341U 
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
                                                      ? CoreTop__DOT__EX__DOT___T_39
                                                      : vlSelf->CoreTop__DOT__EX__DOT__mip))))))
                                       : ((0x16U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? ((0x300U 
                                               == (0xfffU 
                                                   & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                               ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                               : ((0x305U 
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
    CoreTop__DOT__EX__DOT___GEN_80 = ((0x10U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                       : ((0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                           : ((0x43U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                               : ((0x15U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((0x300U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                      : 
                                                     ((0x342U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                       : 
                                                      ((0x304U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? CoreTop__DOT__EX__DOT___T_39
                                                        : vlSelf->CoreTop__DOT__EX__DOT__mie)))))
                                                   : 
                                                  ((0x16U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((0x300U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                     : 
                                                    ((0x305U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                      : 
                                                     ((0x341U 
                                                       == 
                                                       (0xfffU 
                                                        & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                       : 
                                                      ((0x342U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mie
                                                        : 
                                                       ((0x304U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                         : vlSelf->CoreTop__DOT__EX__DOT__mie)))))
                                                    : vlSelf->CoreTop__DOT__EX__DOT__mie)))));
    CoreTop__DOT__EX__DOT___GEN_100 = ((7U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                        : ((0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                            : ((0x12U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                     : 
                                                    ((0x43U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                      : 
                                                     ((0x15U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 
                                                      ((0x300U 
                                                        == 
                                                        (0xfffU 
                                                         & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                        : 
                                                       ((0x305U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                         : 
                                                        ((0x341U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                          : 
                                                         ((0x342U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                           ? CoreTop__DOT__EX__DOT___T_39
                                                           : vlSelf->CoreTop__DOT__EX__DOT__mcause))))
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? 
                                                       ((0x300U 
                                                         == 
                                                         (0xfffU 
                                                          & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                         : 
                                                        ((0x305U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                          : 
                                                         ((0x341U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                           : 
                                                          ((0x342U 
                                                            == 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                            : vlSelf->CoreTop__DOT__EX__DOT__mcause))))
                                                        : vlSelf->CoreTop__DOT__EX__DOT__mcause))))))));
    CoreTop__DOT__EX__DOT___GEN_120 = ((0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                        : ((0xdU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                            : ((1U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                : (
                                                   (7U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                       : 
                                                      ((0x13U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                        : 
                                                       ((0x43U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? 
                                                         ((0x300U 
                                                           == 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                           : 
                                                          ((0x305U 
                                                            == 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                            : 
                                                           ((0x341U 
                                                             == 
                                                             (0xfffU 
                                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                             ? CoreTop__DOT__EX__DOT___T_39
                                                             : vlSelf->CoreTop__DOT__EX__DOT__mepc)))
                                                          : 
                                                         ((0x16U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? 
                                                          ((0x300U 
                                                            == 
                                                            (0xfffU 
                                                             & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                            : 
                                                           ((0x305U 
                                                             == 
                                                             (0xfffU 
                                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                             : 
                                                            ((0x341U 
                                                              == 
                                                              (0xfffU 
                                                               & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                              ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                              : vlSelf->CoreTop__DOT__EX__DOT__mepc)))
                                                           : vlSelf->CoreTop__DOT__EX__DOT__mepc)))))))))));
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7 
        = (((QData)((IData)(((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__0, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__1, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__2, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__3, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__4, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__5, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__6, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_io_carry 
        = ((0U == (6U & (__Vtemp_h3d097fd2__0[0U] << 1U)))
            ? 0U : ((1U == (6U & (__Vtemp_h3d097fd2__1[0U] 
                                  << 1U))) ? 0U : (
                                                   (2U 
                                                    == 
                                                    (6U 
                                                     & (__Vtemp_h3d097fd2__2[0U] 
                                                        << 1U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (6U 
                                                      & (__Vtemp_h3d097fd2__3[0U] 
                                                         << 1U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (6U 
                                                       & (__Vtemp_h3d097fd2__4[0U] 
                                                          << 1U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (6U 
                                                        & (__Vtemp_h3d097fd2__5[0U] 
                                                           << 1U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (6U 
                                                         & (__Vtemp_h3d097fd2__6[0U] 
                                                            << 1U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__7, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__8, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__9, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__10, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__11, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__12, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__13, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__7[0U] >> 1U)))
            ? 0U : ((1U == (7U & (__Vtemp_h3d097fd2__8[0U] 
                                  >> 1U))) ? 0U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__9[0U] 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__10[0U] 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__11[0U] 
                                                          >> 1U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (__Vtemp_h3d097fd2__12[0U] 
                                                           >> 1U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (__Vtemp_h3d097fd2__13[0U] 
                                                            >> 1U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__14, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__15, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__16, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__17, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__18, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__19, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__20, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__14[0U] 
                         >> 3U))) ? 0U : ((1U == (7U 
                                                  & (__Vtemp_h3d097fd2__15[0U] 
                                                     >> 3U)))
                                           ? 0U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__16[0U] 
                                                        >> 3U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__17[0U] 
                                                         >> 3U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__18[0U] 
                                                          >> 3U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (__Vtemp_h3d097fd2__19[0U] 
                                                           >> 3U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (__Vtemp_h3d097fd2__20[0U] 
                                                            >> 3U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__21, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__22, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__23, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__24, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__25, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__26, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__27, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__21[0U] 
                         >> 5U))) ? 0U : ((1U == (7U 
                                                  & (__Vtemp_h3d097fd2__22[0U] 
                                                     >> 5U)))
                                           ? 0U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__23[0U] 
                                                        >> 5U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__24[0U] 
                                                         >> 5U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__25[0U] 
                                                          >> 5U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (__Vtemp_h3d097fd2__26[0U] 
                                                           >> 5U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (__Vtemp_h3d097fd2__27[0U] 
                                                            >> 5U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__28, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__29, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__30, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__31, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__32, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__33, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__34, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__28[0U] 
                         >> 7U))) ? 0U : ((1U == (7U 
                                                  & (__Vtemp_h3d097fd2__29[0U] 
                                                     >> 7U)))
                                           ? 0U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__30[0U] 
                                                        >> 7U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__31[0U] 
                                                         >> 7U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__32[0U] 
                                                          >> 7U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (__Vtemp_h3d097fd2__33[0U] 
                                                           >> 7U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (__Vtemp_h3d097fd2__34[0U] 
                                                            >> 7U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__35, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__36, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__37, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__38, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__39, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__40, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__41, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__35[0U] 
                         >> 9U))) ? 0U : ((1U == (7U 
                                                  & (__Vtemp_h3d097fd2__36[0U] 
                                                     >> 9U)))
                                           ? 0U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__37[0U] 
                                                        >> 9U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__38[0U] 
                                                         >> 9U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__39[0U] 
                                                          >> 9U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (__Vtemp_h3d097fd2__40[0U] 
                                                           >> 9U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (__Vtemp_h3d097fd2__41[0U] 
                                                            >> 9U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__42, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__43, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__44, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__45, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__46, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__47, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__48, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__42[0U] 
                         >> 0xbU))) ? 0U : ((1U == 
                                             (7U & 
                                              (__Vtemp_h3d097fd2__43[0U] 
                                               >> 0xbU)))
                                             ? 0U : 
                                            ((2U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__44[0U] 
                                                >> 0xbU)))
                                              ? 0U : 
                                             ((3U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__45[0U] 
                                                   >> 0xbU)))
                                               ? 0U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__46[0U] 
                                                       >> 0xbU)))
                                                   ? 2U
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__47[0U] 
                                                        >> 0xbU)))
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__48[0U] 
                                                         >> 0xbU)))
                                                     ? 1U
                                                     : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__49, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__50, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__51, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__52, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__53, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__54, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__55, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__49[0U] 
                         >> 0xdU))) ? 0U : ((1U == 
                                             (7U & 
                                              (__Vtemp_h3d097fd2__50[0U] 
                                               >> 0xdU)))
                                             ? 0U : 
                                            ((2U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__51[0U] 
                                                >> 0xdU)))
                                              ? 0U : 
                                             ((3U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__52[0U] 
                                                   >> 0xdU)))
                                               ? 0U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__53[0U] 
                                                       >> 0xdU)))
                                                   ? 2U
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__54[0U] 
                                                        >> 0xdU)))
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__55[0U] 
                                                         >> 0xdU)))
                                                     ? 1U
                                                     : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__56, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__57, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__58, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__59, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__60, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__61, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__62, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__56[0U] 
                         >> 0xfU))) ? 0U : ((1U == 
                                             (7U & 
                                              (__Vtemp_h3d097fd2__57[0U] 
                                               >> 0xfU)))
                                             ? 0U : 
                                            ((2U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__58[0U] 
                                                >> 0xfU)))
                                              ? 0U : 
                                             ((3U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__59[0U] 
                                                   >> 0xfU)))
                                               ? 0U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__60[0U] 
                                                       >> 0xfU)))
                                                   ? 2U
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__61[0U] 
                                                        >> 0xfU)))
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__62[0U] 
                                                         >> 0xfU)))
                                                     ? 1U
                                                     : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__63, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__64, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__65, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__66, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__67, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__68, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__69, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__63[0U] 
                         >> 0x11U))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__64[0U] 
                                                >> 0x11U)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__65[0U] 
                                                   >> 0x11U)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__66[0U] 
                                                       >> 0x11U)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__67[0U] 
                                                        >> 0x11U)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__68[0U] 
                                                         >> 0x11U)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__69[0U] 
                                                          >> 0x11U)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__70, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__71, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__72, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__73, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__74, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__75, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__76, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__70[0U] 
                         >> 0x13U))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__71[0U] 
                                                >> 0x13U)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__72[0U] 
                                                   >> 0x13U)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__73[0U] 
                                                       >> 0x13U)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__74[0U] 
                                                        >> 0x13U)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__75[0U] 
                                                         >> 0x13U)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__76[0U] 
                                                          >> 0x13U)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__77, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__78, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__79, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__80, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__81, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__82, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__83, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__77[0U] 
                         >> 0x15U))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__78[0U] 
                                                >> 0x15U)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__79[0U] 
                                                   >> 0x15U)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__80[0U] 
                                                       >> 0x15U)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__81[0U] 
                                                        >> 0x15U)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__82[0U] 
                                                         >> 0x15U)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__83[0U] 
                                                          >> 0x15U)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__84, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__85, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__86, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__87, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__88, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__89, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__90, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__84[0U] 
                         >> 0x17U))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__85[0U] 
                                                >> 0x17U)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__86[0U] 
                                                   >> 0x17U)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__87[0U] 
                                                       >> 0x17U)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__88[0U] 
                                                        >> 0x17U)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__89[0U] 
                                                         >> 0x17U)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__90[0U] 
                                                          >> 0x17U)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__91, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__92, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__93, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__94, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__95, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__96, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__97, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__91[0U] 
                         >> 0x19U))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__92[0U] 
                                                >> 0x19U)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__93[0U] 
                                                   >> 0x19U)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__94[0U] 
                                                       >> 0x19U)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__95[0U] 
                                                        >> 0x19U)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__96[0U] 
                                                         >> 0x19U)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__97[0U] 
                                                          >> 0x19U)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__98, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__99, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__100, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__101, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__102, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__103, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__104, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__98[0U] 
                         >> 0x1bU))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__99[0U] 
                                                >> 0x1bU)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__100[0U] 
                                                   >> 0x1bU)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__101[0U] 
                                                       >> 0x1bU)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__102[0U] 
                                                        >> 0x1bU)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__103[0U] 
                                                         >> 0x1bU)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__104[0U] 
                                                          >> 0x1bU)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__105, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__106, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__107, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__108, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__109, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__110, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__111, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15_io_carry 
        = ((0U == (__Vtemp_h3d097fd2__105[0U] >> 0x1dU))
            ? 0U : ((1U == (__Vtemp_h3d097fd2__106[0U] 
                            >> 0x1dU)) ? 0U : ((2U 
                                                == 
                                                (__Vtemp_h3d097fd2__107[0U] 
                                                 >> 0x1dU))
                                                ? 0U
                                                : (
                                                   (3U 
                                                    == 
                                                    (__Vtemp_h3d097fd2__108[0U] 
                                                     >> 0x1dU))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (__Vtemp_h3d097fd2__109[0U] 
                                                      >> 0x1dU))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (__Vtemp_h3d097fd2__110[0U] 
                                                       >> 0x1dU))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (__Vtemp_h3d097fd2__111[0U] 
                                                        >> 0x1dU))
                                                       ? 1U
                                                       : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__112, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__113, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__114, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__115, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__116, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__117, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__118, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16_io_carry 
        = ((0U == (7U & ((__Vtemp_h3d097fd2__112[1U] 
                          << 1U) | (__Vtemp_h3d097fd2__112[0U] 
                                    >> 0x1fU)))) ? 0U
            : ((1U == (7U & ((__Vtemp_h3d097fd2__113[1U] 
                              << 1U) | (__Vtemp_h3d097fd2__113[0U] 
                                        >> 0x1fU))))
                ? 0U : ((2U == (7U & ((__Vtemp_h3d097fd2__114[1U] 
                                       << 1U) | (__Vtemp_h3d097fd2__114[0U] 
                                                 >> 0x1fU))))
                         ? 0U : ((3U == (7U & ((__Vtemp_h3d097fd2__115[1U] 
                                                << 1U) 
                                               | (__Vtemp_h3d097fd2__115[0U] 
                                                  >> 0x1fU))))
                                  ? 0U : ((4U == (7U 
                                                  & ((__Vtemp_h3d097fd2__116[1U] 
                                                      << 1U) 
                                                     | (__Vtemp_h3d097fd2__116[0U] 
                                                        >> 0x1fU))))
                                           ? 2U : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & ((__Vtemp_h3d097fd2__117[1U] 
                                                         << 1U) 
                                                        | (__Vtemp_h3d097fd2__117[0U] 
                                                           >> 0x1fU))))
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((__Vtemp_h3d097fd2__118[1U] 
                                                          << 1U) 
                                                         | (__Vtemp_h3d097fd2__118[0U] 
                                                            >> 0x1fU))))
                                                     ? 1U
                                                     : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__119, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__120, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__121, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__122, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__123, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__124, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__125, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__119[1U] 
                         >> 1U))) ? 0U : ((1U == (7U 
                                                  & (__Vtemp_h3d097fd2__120[1U] 
                                                     >> 1U)))
                                           ? 0U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__121[1U] 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__122[1U] 
                                                         >> 1U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__123[1U] 
                                                          >> 1U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (__Vtemp_h3d097fd2__124[1U] 
                                                           >> 1U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (__Vtemp_h3d097fd2__125[1U] 
                                                            >> 1U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__126, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__127, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__128, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__129, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__130, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__131, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__132, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__126[1U] 
                         >> 3U))) ? 0U : ((1U == (7U 
                                                  & (__Vtemp_h3d097fd2__127[1U] 
                                                     >> 3U)))
                                           ? 0U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__128[1U] 
                                                        >> 3U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__129[1U] 
                                                         >> 3U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__130[1U] 
                                                          >> 3U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (__Vtemp_h3d097fd2__131[1U] 
                                                           >> 3U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (__Vtemp_h3d097fd2__132[1U] 
                                                            >> 3U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__133, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__134, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__135, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__136, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__137, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__138, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__139, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__133[1U] 
                         >> 5U))) ? 0U : ((1U == (7U 
                                                  & (__Vtemp_h3d097fd2__134[1U] 
                                                     >> 5U)))
                                           ? 0U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__135[1U] 
                                                        >> 5U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__136[1U] 
                                                         >> 5U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__137[1U] 
                                                          >> 5U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (__Vtemp_h3d097fd2__138[1U] 
                                                           >> 5U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (__Vtemp_h3d097fd2__139[1U] 
                                                            >> 5U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__140, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__141, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__142, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__143, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__144, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__145, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__146, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__140[1U] 
                         >> 7U))) ? 0U : ((1U == (7U 
                                                  & (__Vtemp_h3d097fd2__141[1U] 
                                                     >> 7U)))
                                           ? 0U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__142[1U] 
                                                        >> 7U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__143[1U] 
                                                         >> 7U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__144[1U] 
                                                          >> 7U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (__Vtemp_h3d097fd2__145[1U] 
                                                           >> 7U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (__Vtemp_h3d097fd2__146[1U] 
                                                            >> 7U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__147, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__148, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__149, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__150, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__151, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__152, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__153, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__147[1U] 
                         >> 9U))) ? 0U : ((1U == (7U 
                                                  & (__Vtemp_h3d097fd2__148[1U] 
                                                     >> 9U)))
                                           ? 0U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__149[1U] 
                                                        >> 9U)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__150[1U] 
                                                         >> 9U)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__151[1U] 
                                                          >> 9U)))
                                                      ? 2U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (__Vtemp_h3d097fd2__152[1U] 
                                                           >> 9U)))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (__Vtemp_h3d097fd2__153[1U] 
                                                            >> 9U)))
                                                        ? 1U
                                                        : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__154, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__155, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__156, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__157, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__158, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__159, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__160, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__154[1U] 
                         >> 0xbU))) ? 0U : ((1U == 
                                             (7U & 
                                              (__Vtemp_h3d097fd2__155[1U] 
                                               >> 0xbU)))
                                             ? 0U : 
                                            ((2U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__156[1U] 
                                                >> 0xbU)))
                                              ? 0U : 
                                             ((3U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__157[1U] 
                                                   >> 0xbU)))
                                               ? 0U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__158[1U] 
                                                       >> 0xbU)))
                                                   ? 2U
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__159[1U] 
                                                        >> 0xbU)))
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__160[1U] 
                                                         >> 0xbU)))
                                                     ? 1U
                                                     : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__161, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__162, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__163, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__164, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__165, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__166, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__167, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__161[1U] 
                         >> 0xdU))) ? 0U : ((1U == 
                                             (7U & 
                                              (__Vtemp_h3d097fd2__162[1U] 
                                               >> 0xdU)))
                                             ? 0U : 
                                            ((2U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__163[1U] 
                                                >> 0xdU)))
                                              ? 0U : 
                                             ((3U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__164[1U] 
                                                   >> 0xdU)))
                                               ? 0U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__165[1U] 
                                                       >> 0xdU)))
                                                   ? 2U
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__166[1U] 
                                                        >> 0xdU)))
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__167[1U] 
                                                         >> 0xdU)))
                                                     ? 1U
                                                     : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__168, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__169, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__170, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__171, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__172, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__173, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__174, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__168[1U] 
                         >> 0xfU))) ? 0U : ((1U == 
                                             (7U & 
                                              (__Vtemp_h3d097fd2__169[1U] 
                                               >> 0xfU)))
                                             ? 0U : 
                                            ((2U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__170[1U] 
                                                >> 0xfU)))
                                              ? 0U : 
                                             ((3U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__171[1U] 
                                                   >> 0xfU)))
                                               ? 0U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__172[1U] 
                                                       >> 0xfU)))
                                                   ? 2U
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__173[1U] 
                                                        >> 0xfU)))
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__174[1U] 
                                                         >> 0xfU)))
                                                     ? 1U
                                                     : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__175, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__176, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__177, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__178, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__179, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__180, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__181, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__175[1U] 
                         >> 0x11U))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__176[1U] 
                                                >> 0x11U)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__177[1U] 
                                                   >> 0x11U)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__178[1U] 
                                                       >> 0x11U)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__179[1U] 
                                                        >> 0x11U)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__180[1U] 
                                                         >> 0x11U)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__181[1U] 
                                                          >> 0x11U)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__182, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__183, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__184, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__185, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__186, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__187, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__188, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__182[1U] 
                         >> 0x13U))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__183[1U] 
                                                >> 0x13U)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__184[1U] 
                                                   >> 0x13U)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__185[1U] 
                                                       >> 0x13U)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__186[1U] 
                                                        >> 0x13U)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__187[1U] 
                                                         >> 0x13U)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__188[1U] 
                                                          >> 0x13U)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__189, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__190, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__191, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__192, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__193, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__194, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__195, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__189[1U] 
                         >> 0x15U))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__190[1U] 
                                                >> 0x15U)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__191[1U] 
                                                   >> 0x15U)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__192[1U] 
                                                       >> 0x15U)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__193[1U] 
                                                        >> 0x15U)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__194[1U] 
                                                         >> 0x15U)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__195[1U] 
                                                          >> 0x15U)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__196, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__197, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__198, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__199, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__200, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__201, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__202, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__196[1U] 
                         >> 0x17U))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__197[1U] 
                                                >> 0x17U)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__198[1U] 
                                                   >> 0x17U)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__199[1U] 
                                                       >> 0x17U)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__200[1U] 
                                                        >> 0x17U)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__201[1U] 
                                                         >> 0x17U)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__202[1U] 
                                                          >> 0x17U)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__203, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__204, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__205, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__206, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__207, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__208, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__209, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__203[1U] 
                         >> 0x19U))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__204[1U] 
                                                >> 0x19U)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__205[1U] 
                                                   >> 0x19U)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__206[1U] 
                                                       >> 0x19U)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__207[1U] 
                                                        >> 0x19U)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__208[1U] 
                                                         >> 0x19U)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__209[1U] 
                                                          >> 0x19U)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__210, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__211, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__212, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__213, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__214, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__215, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__216, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30_io_carry 
        = ((0U == (7U & (__Vtemp_h3d097fd2__210[1U] 
                         >> 0x1bU))) ? 0U : ((1U == 
                                              (7U & 
                                               (__Vtemp_h3d097fd2__211[1U] 
                                                >> 0x1bU)))
                                              ? 0U : 
                                             ((2U == 
                                               (7U 
                                                & (__Vtemp_h3d097fd2__212[1U] 
                                                   >> 0x1bU)))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (__Vtemp_h3d097fd2__213[1U] 
                                                       >> 0x1bU)))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (__Vtemp_h3d097fd2__214[1U] 
                                                        >> 0x1bU)))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (__Vtemp_h3d097fd2__215[1U] 
                                                         >> 0x1bU)))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (__Vtemp_h3d097fd2__216[1U] 
                                                          >> 0x1bU)))
                                                      ? 1U
                                                      : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__217, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__218, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__219, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__220, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__221, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__222, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__223, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31_io_carry 
        = ((0U == (__Vtemp_h3d097fd2__217[1U] >> 0x1dU))
            ? 0U : ((1U == (__Vtemp_h3d097fd2__218[1U] 
                            >> 0x1dU)) ? 0U : ((2U 
                                                == 
                                                (__Vtemp_h3d097fd2__219[1U] 
                                                 >> 0x1dU))
                                                ? 0U
                                                : (
                                                   (3U 
                                                    == 
                                                    (__Vtemp_h3d097fd2__220[1U] 
                                                     >> 0x1dU))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (__Vtemp_h3d097fd2__221[1U] 
                                                      >> 0x1dU))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (__Vtemp_h3d097fd2__222[1U] 
                                                       >> 0x1dU))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (__Vtemp_h3d097fd2__223[1U] 
                                                        >> 0x1dU))
                                                       ? 1U
                                                       : 0U)))))));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__224, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__225, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__0, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__226, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__1, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__227, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__2, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__228, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__3, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__229, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__4, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__230, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__5, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (6U & (__Vtemp_h3d097fd2__229[0U] << 1U)))) {
        __Vtemp_h0ce8362d__0[0U] = (~ __Vtemp_h858419c6__4[0U]);
        __Vtemp_h0ce8362d__0[1U] = (~ __Vtemp_h858419c6__4[1U]);
        __Vtemp_h0ce8362d__0[2U] = (3U & (~ __Vtemp_h858419c6__4[2U]));
    } else if ((6U == (6U & (__Vtemp_h3d097fd2__230[0U] 
                             << 1U)))) {
        __Vtemp_h0ce8362d__0[0U] = (~ __Vtemp_h858419c6__5[0U]);
        __Vtemp_h0ce8362d__0[1U] = (~ __Vtemp_h858419c6__5[1U]);
        __Vtemp_h0ce8362d__0[2U] = (3U & (~ __Vtemp_h858419c6__5[2U]));
    } else {
        __Vtemp_h0ce8362d__0[0U] = 0U;
        __Vtemp_h0ce8362d__0[1U] = 0U;
        __Vtemp_h0ce8362d__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h6c9ebc60__0, __Vtemp_h0ce8362d__0);
    if ((0U == (6U & (__Vtemp_h3d097fd2__224[0U] << 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (6U & (__Vtemp_h3d097fd2__225[0U] 
                             << 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__0[2U];
    } else if ((2U == (6U & (__Vtemp_h3d097fd2__226[0U] 
                             << 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__1[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__1[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__1[2U];
    } else if ((3U == (6U & (__Vtemp_h3d097fd2__227[0U] 
                             << 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__2[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__2[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__2[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__2[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__2[2U] << 1U));
    } else if ((4U == (6U & (__Vtemp_h3d097fd2__228[0U] 
                             << 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__3[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__3[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__3[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__3[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__3[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[0U] 
            = __Vtemp_h6c9ebc60__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[1U] 
            = __Vtemp_h6c9ebc60__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m__DOT___io_p_T_20[2U] 
            = __Vtemp_h6c9ebc60__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__231, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__232, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__6, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__233, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__7, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__234, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__8, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__235, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__9, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__236, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__10, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__237, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__11, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__236[0U] >> 1U)))) {
        __Vtemp_h868168b5__0[0U] = (~ __Vtemp_h858419c6__10[0U]);
        __Vtemp_h868168b5__0[1U] = (~ __Vtemp_h858419c6__10[1U]);
        __Vtemp_h868168b5__0[2U] = (3U & (~ __Vtemp_h858419c6__10[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__237[0U] 
                             >> 1U)))) {
        __Vtemp_h868168b5__0[0U] = (~ __Vtemp_h858419c6__11[0U]);
        __Vtemp_h868168b5__0[1U] = (~ __Vtemp_h858419c6__11[1U]);
        __Vtemp_h868168b5__0[2U] = (3U & (~ __Vtemp_h858419c6__11[2U]));
    } else {
        __Vtemp_h868168b5__0[0U] = 0U;
        __Vtemp_h868168b5__0[1U] = 0U;
        __Vtemp_h868168b5__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h290c66f2__0, __Vtemp_h868168b5__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__231[0U] >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__232[0U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__6[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__6[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__6[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__233[0U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__7[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__7[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__7[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__234[0U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__8[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__8[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__8[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__8[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__8[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__235[0U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__9[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__9[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__9[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__9[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__9[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[0U] 
            = __Vtemp_h290c66f2__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[1U] 
            = __Vtemp_h290c66f2__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1__DOT___io_p_T_20[2U] 
            = __Vtemp_h290c66f2__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__238, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__239, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__12, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__240, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__13, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__241, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__14, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__242, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__15, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__243, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__16, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__244, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__17, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__243[0U] >> 3U)))) {
        __Vtemp_he798f560__0[0U] = (~ __Vtemp_h858419c6__16[0U]);
        __Vtemp_he798f560__0[1U] = (~ __Vtemp_h858419c6__16[1U]);
        __Vtemp_he798f560__0[2U] = (3U & (~ __Vtemp_h858419c6__16[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__244[0U] 
                             >> 3U)))) {
        __Vtemp_he798f560__0[0U] = (~ __Vtemp_h858419c6__17[0U]);
        __Vtemp_he798f560__0[1U] = (~ __Vtemp_h858419c6__17[1U]);
        __Vtemp_he798f560__0[2U] = (3U & (~ __Vtemp_h858419c6__17[2U]));
    } else {
        __Vtemp_he798f560__0[0U] = 0U;
        __Vtemp_he798f560__0[1U] = 0U;
        __Vtemp_he798f560__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h3bce99b2__0, __Vtemp_he798f560__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__238[0U] >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__239[0U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__12[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__12[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__12[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__240[0U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__13[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__13[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__13[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__241[0U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__14[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__14[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__14[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__14[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__14[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__242[0U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__15[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__15[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__15[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__15[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__15[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[0U] 
            = __Vtemp_h3bce99b2__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[1U] 
            = __Vtemp_h3bce99b2__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2__DOT___io_p_T_20[2U] 
            = __Vtemp_h3bce99b2__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__245, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__246, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__18, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__247, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__19, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__248, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__20, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__249, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__21, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__250, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__22, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__251, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__23, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__250[0U] >> 5U)))) {
        __Vtemp_h5ebda43d__0[0U] = (~ __Vtemp_h858419c6__22[0U]);
        __Vtemp_h5ebda43d__0[1U] = (~ __Vtemp_h858419c6__22[1U]);
        __Vtemp_h5ebda43d__0[2U] = (3U & (~ __Vtemp_h858419c6__22[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__251[0U] 
                             >> 5U)))) {
        __Vtemp_h5ebda43d__0[0U] = (~ __Vtemp_h858419c6__23[0U]);
        __Vtemp_h5ebda43d__0[1U] = (~ __Vtemp_h858419c6__23[1U]);
        __Vtemp_h5ebda43d__0[2U] = (3U & (~ __Vtemp_h858419c6__23[2U]));
    } else {
        __Vtemp_h5ebda43d__0[0U] = 0U;
        __Vtemp_h5ebda43d__0[1U] = 0U;
        __Vtemp_h5ebda43d__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h290b48d8__0, __Vtemp_h5ebda43d__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__245[0U] >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__246[0U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__18[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__18[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__18[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__247[0U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__19[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__19[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__19[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__248[0U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__20[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__20[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__20[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__20[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__20[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__249[0U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__21[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__21[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__21[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__21[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__21[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[0U] 
            = __Vtemp_h290b48d8__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[1U] 
            = __Vtemp_h290b48d8__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_3__DOT___io_p_T_20[2U] 
            = __Vtemp_h290b48d8__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__252, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__253, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__24, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__254, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__25, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__255, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__26, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__256, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__27, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__257, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__28, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__258, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__29, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__257[0U] >> 7U)))) {
        __Vtemp_h9f0854d4__0[0U] = (~ __Vtemp_h858419c6__28[0U]);
        __Vtemp_h9f0854d4__0[1U] = (~ __Vtemp_h858419c6__28[1U]);
        __Vtemp_h9f0854d4__0[2U] = (3U & (~ __Vtemp_h858419c6__28[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__258[0U] 
                             >> 7U)))) {
        __Vtemp_h9f0854d4__0[0U] = (~ __Vtemp_h858419c6__29[0U]);
        __Vtemp_h9f0854d4__0[1U] = (~ __Vtemp_h858419c6__29[1U]);
        __Vtemp_h9f0854d4__0[2U] = (3U & (~ __Vtemp_h858419c6__29[2U]));
    } else {
        __Vtemp_h9f0854d4__0[0U] = 0U;
        __Vtemp_h9f0854d4__0[1U] = 0U;
        __Vtemp_h9f0854d4__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h9a5b9220__0, __Vtemp_h9f0854d4__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__252[0U] >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__253[0U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__24[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__24[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__24[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__254[0U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__25[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__25[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__25[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__255[0U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__26[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__26[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__26[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__26[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__26[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__256[0U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__27[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__27[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__27[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__27[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__27[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[0U] 
            = __Vtemp_h9a5b9220__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[1U] 
            = __Vtemp_h9a5b9220__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_4__DOT___io_p_T_20[2U] 
            = __Vtemp_h9a5b9220__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__259, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__260, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__30, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__261, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__31, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__262, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__32, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__263, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__33, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__264, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__34, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__265, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__35, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__264[0U] >> 9U)))) {
        __Vtemp_hf9a144d9__0[0U] = (~ __Vtemp_h858419c6__34[0U]);
        __Vtemp_hf9a144d9__0[1U] = (~ __Vtemp_h858419c6__34[1U]);
        __Vtemp_hf9a144d9__0[2U] = (3U & (~ __Vtemp_h858419c6__34[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__265[0U] 
                             >> 9U)))) {
        __Vtemp_hf9a144d9__0[0U] = (~ __Vtemp_h858419c6__35[0U]);
        __Vtemp_hf9a144d9__0[1U] = (~ __Vtemp_h858419c6__35[1U]);
        __Vtemp_hf9a144d9__0[2U] = (3U & (~ __Vtemp_h858419c6__35[2U]));
    } else {
        __Vtemp_hf9a144d9__0[0U] = 0U;
        __Vtemp_hf9a144d9__0[1U] = 0U;
        __Vtemp_hf9a144d9__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h3a3c5832__0, __Vtemp_hf9a144d9__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__259[0U] >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__260[0U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__30[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__30[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__30[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__261[0U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__31[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__31[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__31[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__262[0U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__32[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__32[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__32[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__32[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__32[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__263[0U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__33[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__33[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__33[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__33[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__33[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[0U] 
            = __Vtemp_h3a3c5832__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[1U] 
            = __Vtemp_h3a3c5832__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_5__DOT___io_p_T_20[2U] 
            = __Vtemp_h3a3c5832__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__266, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__267, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__36, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__268, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__37, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__269, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__38, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__270, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__39, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__271, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__40, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__272, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__41, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__271[0U] >> 0xbU)))) {
        __Vtemp_h6694df71__0[0U] = (~ __Vtemp_h858419c6__40[0U]);
        __Vtemp_h6694df71__0[1U] = (~ __Vtemp_h858419c6__40[1U]);
        __Vtemp_h6694df71__0[2U] = (3U & (~ __Vtemp_h858419c6__40[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__272[0U] 
                             >> 0xbU)))) {
        __Vtemp_h6694df71__0[0U] = (~ __Vtemp_h858419c6__41[0U]);
        __Vtemp_h6694df71__0[1U] = (~ __Vtemp_h858419c6__41[1U]);
        __Vtemp_h6694df71__0[2U] = (3U & (~ __Vtemp_h858419c6__41[2U]));
    } else {
        __Vtemp_h6694df71__0[0U] = 0U;
        __Vtemp_h6694df71__0[1U] = 0U;
        __Vtemp_h6694df71__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h86d3d605__0, __Vtemp_h6694df71__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__266[0U] >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__267[0U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__36[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__36[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__36[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__268[0U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__37[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__37[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__37[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__269[0U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__38[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__38[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__38[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__38[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__38[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__270[0U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__39[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__39[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__39[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__39[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__39[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[0U] 
            = __Vtemp_h86d3d605__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[1U] 
            = __Vtemp_h86d3d605__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_6__DOT___io_p_T_20[2U] 
            = __Vtemp_h86d3d605__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__273, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__274, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__42, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__275, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__43, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__276, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__44, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__277, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__45, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__278, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__46, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__279, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__47, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__278[0U] >> 0xdU)))) {
        __Vtemp_h46320a6f__0[0U] = (~ __Vtemp_h858419c6__46[0U]);
        __Vtemp_h46320a6f__0[1U] = (~ __Vtemp_h858419c6__46[1U]);
        __Vtemp_h46320a6f__0[2U] = (3U & (~ __Vtemp_h858419c6__46[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__279[0U] 
                             >> 0xdU)))) {
        __Vtemp_h46320a6f__0[0U] = (~ __Vtemp_h858419c6__47[0U]);
        __Vtemp_h46320a6f__0[1U] = (~ __Vtemp_h858419c6__47[1U]);
        __Vtemp_h46320a6f__0[2U] = (3U & (~ __Vtemp_h858419c6__47[2U]));
    } else {
        __Vtemp_h46320a6f__0[0U] = 0U;
        __Vtemp_h46320a6f__0[1U] = 0U;
        __Vtemp_h46320a6f__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h09637d0a__0, __Vtemp_h46320a6f__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__273[0U] >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__274[0U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__42[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__42[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__42[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__275[0U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__43[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__43[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__43[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__276[0U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__44[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__44[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__44[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__44[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__44[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__277[0U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__45[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__45[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__45[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__45[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__45[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[0U] 
            = __Vtemp_h09637d0a__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[1U] 
            = __Vtemp_h09637d0a__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_7__DOT___io_p_T_20[2U] 
            = __Vtemp_h09637d0a__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__280, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__281, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__48, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__282, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__49, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__283, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__50, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__284, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__51, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__285, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__52, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__286, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__53, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__285[0U] >> 0xfU)))) {
        __Vtemp_h5ec30dc3__0[0U] = (~ __Vtemp_h858419c6__52[0U]);
        __Vtemp_h5ec30dc3__0[1U] = (~ __Vtemp_h858419c6__52[1U]);
        __Vtemp_h5ec30dc3__0[2U] = (3U & (~ __Vtemp_h858419c6__52[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__286[0U] 
                             >> 0xfU)))) {
        __Vtemp_h5ec30dc3__0[0U] = (~ __Vtemp_h858419c6__53[0U]);
        __Vtemp_h5ec30dc3__0[1U] = (~ __Vtemp_h858419c6__53[1U]);
        __Vtemp_h5ec30dc3__0[2U] = (3U & (~ __Vtemp_h858419c6__53[2U]));
    } else {
        __Vtemp_h5ec30dc3__0[0U] = 0U;
        __Vtemp_h5ec30dc3__0[1U] = 0U;
        __Vtemp_h5ec30dc3__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_habb2d473__0, __Vtemp_h5ec30dc3__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__280[0U] >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__281[0U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__48[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__48[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__48[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__282[0U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__49[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__49[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__49[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__283[0U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__50[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__50[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__50[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__50[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__50[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__284[0U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__51[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__51[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__51[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__51[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__51[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[0U] 
            = __Vtemp_habb2d473__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[1U] 
            = __Vtemp_habb2d473__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_8__DOT___io_p_T_20[2U] 
            = __Vtemp_habb2d473__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__287, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__288, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__54, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = vlSelf->CoreTop__DOT__EX__DOT__mip;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
    } else if ((0x69U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = vlSelf->CoreTop__DOT__EX__DOT__mip;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
    } else if ((0x71U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = vlSelf->CoreTop__DOT__EX__DOT__mip;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
    } else if ((0x72U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = vlSelf->CoreTop__DOT__EX__DOT__mip;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
    } else if ((0x6dU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = vlSelf->CoreTop__DOT__EX__DOT__mip;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
    } else if ((0x78U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = vlSelf->CoreTop__DOT__EX__DOT__mip;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
    } else if ((0x79U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
        CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_172 = vlSelf->CoreTop__DOT__EX__DOT__mip;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_171 = vlSelf->CoreTop__DOT__EX__DOT__mie;
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = vlSelf->CoreTop__DOT__EX__DOT__mepc;
    } else {
        if ((0x7aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                = vlSelf->CoreTop__DOT__EX__DOT__mip;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
        } else if ((0xdU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                = vlSelf->CoreTop__DOT__EX__DOT__mip;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
        } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                = vlSelf->CoreTop__DOT__EX__DOT__mip;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
        } else if ((7U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                = vlSelf->CoreTop__DOT__EX__DOT__mip;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
        } else if ((0xfU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                = vlSelf->CoreTop__DOT__EX__DOT__mip;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
        } else if ((0x12U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
            CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                = vlSelf->CoreTop__DOT__EX__DOT__mip;
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = vlSelf->CoreTop__DOT__EX__DOT__mie;
        } else {
            if ((0x10U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                    = vlSelf->CoreTop__DOT__EX__DOT__mip;
            } else if ((0x13U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                    = vlSelf->CoreTop__DOT__EX__DOT__mip;
            } else if ((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) {
                CoreTop__DOT__EX__DOT___GEN_167 = vlSelf->CoreTop__DOT__EX__DOT__mstatus;
                vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                    = vlSelf->CoreTop__DOT__EX__DOT__mip;
            } else {
                CoreTop__DOT__EX__DOT___GEN_167 = (
                                                   (0x15U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((0x300U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                     ? CoreTop__DOT__EX__DOT___T_39
                                                     : vlSelf->CoreTop__DOT__EX__DOT__mstatus)
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    ((0x300U 
                                                      == 
                                                      (0xfffU 
                                                       & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                      : vlSelf->CoreTop__DOT__EX__DOT__mstatus)
                                                     : vlSelf->CoreTop__DOT__EX__DOT__mstatus));
                vlSelf->CoreTop__DOT__EX__DOT___GEN_172 
                    = CoreTop__DOT__EX__DOT___GEN_60;
            }
            vlSelf->CoreTop__DOT__EX__DOT___GEN_171 
                = CoreTop__DOT__EX__DOT___GEN_80;
        }
        vlSelf->CoreTop__DOT__EX__DOT___GEN_169 = CoreTop__DOT__EX__DOT___GEN_120;
    }
    CoreTop__DOT__EX__DOT___GEN_147 = ((0x72U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                        ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                        : ((0x6dU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                            ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                            : ((0x78U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                : (
                                                   (0x79U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                    : 
                                                   ((0x7aU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                         : 
                                                        ((0x12U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                           : 
                                                          ((0x13U 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                            : 
                                                           ((0x43U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                             : 
                                                            ((0x15U 
                                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                              ? 
                                                             ((0x300U 
                                                               == 
                                                               (0xfffU 
                                                                & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                               ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                               : 
                                                              ((0x305U 
                                                                == 
                                                                (0xfffU 
                                                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                ? CoreTop__DOT__EX__DOT___T_39
                                                                : vlSelf->CoreTop__DOT__EX__DOT__mtvec))
                                                              : 
                                                             ((0x16U 
                                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                               ? 
                                                              ((0x300U 
                                                                == 
                                                                (0xfffU 
                                                                 & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                                : 
                                                               ((0x305U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                                                 ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T
                                                                 : vlSelf->CoreTop__DOT__EX__DOT__mtvec))
                                                               : vlSelf->CoreTop__DOT__EX__DOT__mtvec)))))))))))))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_168 = ((0x44U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                : (
                                                   (0x69U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                    : 
                                                   ((0x71U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                     : CoreTop__DOT__EX__DOT___GEN_147)));
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__289, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__55, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__290, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__56, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__291, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__57, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__292, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__58, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__293, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__59, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__292[0U] >> 0x11U)))) {
        __Vtemp_hdc7cb6fb__0[0U] = (~ __Vtemp_h858419c6__58[0U]);
        __Vtemp_hdc7cb6fb__0[1U] = (~ __Vtemp_h858419c6__58[1U]);
        __Vtemp_hdc7cb6fb__0[2U] = (3U & (~ __Vtemp_h858419c6__58[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__293[0U] 
                             >> 0x11U)))) {
        __Vtemp_hdc7cb6fb__0[0U] = (~ __Vtemp_h858419c6__59[0U]);
        __Vtemp_hdc7cb6fb__0[1U] = (~ __Vtemp_h858419c6__59[1U]);
        __Vtemp_hdc7cb6fb__0[2U] = (3U & (~ __Vtemp_h858419c6__59[2U]));
    } else {
        __Vtemp_hdc7cb6fb__0[0U] = 0U;
        __Vtemp_hdc7cb6fb__0[1U] = 0U;
        __Vtemp_hdc7cb6fb__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_hbeeed270__0, __Vtemp_hdc7cb6fb__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__287[0U] >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__288[0U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__54[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__54[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__54[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__289[0U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__55[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__55[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__55[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__290[0U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__56[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__56[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__56[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__56[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__56[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__291[0U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__57[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__57[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__57[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__57[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__57[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[0U] 
            = __Vtemp_hbeeed270__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[1U] 
            = __Vtemp_hbeeed270__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_9__DOT___io_p_T_20[2U] 
            = __Vtemp_hbeeed270__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__294, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__295, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__60, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__296, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__61, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__297, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__62, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__298, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__63, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__299, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__64, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__300, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__65, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__299[0U] >> 0x13U)))) {
        __Vtemp_hd86eede0__0[0U] = (~ __Vtemp_h858419c6__64[0U]);
        __Vtemp_hd86eede0__0[1U] = (~ __Vtemp_h858419c6__64[1U]);
        __Vtemp_hd86eede0__0[2U] = (3U & (~ __Vtemp_h858419c6__64[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__300[0U] 
                             >> 0x13U)))) {
        __Vtemp_hd86eede0__0[0U] = (~ __Vtemp_h858419c6__65[0U]);
        __Vtemp_hd86eede0__0[1U] = (~ __Vtemp_h858419c6__65[1U]);
        __Vtemp_hd86eede0__0[2U] = (3U & (~ __Vtemp_h858419c6__65[2U]));
    } else {
        __Vtemp_hd86eede0__0[0U] = 0U;
        __Vtemp_hd86eede0__0[1U] = 0U;
        __Vtemp_hd86eede0__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h9c928e59__0, __Vtemp_hd86eede0__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__294[0U] >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__295[0U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__60[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__60[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__60[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__296[0U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__61[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__61[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__61[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__297[0U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__62[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__62[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__62[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__62[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__62[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__298[0U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__63[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__63[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__63[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__63[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__63[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[0U] 
            = __Vtemp_h9c928e59__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[1U] 
            = __Vtemp_h9c928e59__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_10__DOT___io_p_T_20[2U] 
            = __Vtemp_h9c928e59__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__301, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__302, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__66, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__303, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__67, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__304, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__68, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__305, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__69, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__306, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__70, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__307, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__71, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__306[0U] >> 0x15U)))) {
        __Vtemp_h5cd679d2__0[0U] = (~ __Vtemp_h858419c6__70[0U]);
        __Vtemp_h5cd679d2__0[1U] = (~ __Vtemp_h858419c6__70[1U]);
        __Vtemp_h5cd679d2__0[2U] = (3U & (~ __Vtemp_h858419c6__70[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__307[0U] 
                             >> 0x15U)))) {
        __Vtemp_h5cd679d2__0[0U] = (~ __Vtemp_h858419c6__71[0U]);
        __Vtemp_h5cd679d2__0[1U] = (~ __Vtemp_h858419c6__71[1U]);
        __Vtemp_h5cd679d2__0[2U] = (3U & (~ __Vtemp_h858419c6__71[2U]));
    } else {
        __Vtemp_h5cd679d2__0[0U] = 0U;
        __Vtemp_h5cd679d2__0[1U] = 0U;
        __Vtemp_h5cd679d2__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_hae6a442c__0, __Vtemp_h5cd679d2__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__301[0U] >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__302[0U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__66[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__66[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__66[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__303[0U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__67[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__67[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__67[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__304[0U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__68[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__68[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__68[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__68[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__68[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__305[0U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__69[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__69[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__69[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__69[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__69[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[0U] 
            = __Vtemp_hae6a442c__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[1U] 
            = __Vtemp_hae6a442c__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_11__DOT___io_p_T_20[2U] 
            = __Vtemp_hae6a442c__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__308, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__309, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__72, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__310, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__73, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__311, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__74, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__312, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__75, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__313, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__76, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__314, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__77, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__313[0U] >> 0x17U)))) {
        __Vtemp_hdd205b38__0[0U] = (~ __Vtemp_h858419c6__76[0U]);
        __Vtemp_hdd205b38__0[1U] = (~ __Vtemp_h858419c6__76[1U]);
        __Vtemp_hdd205b38__0[2U] = (3U & (~ __Vtemp_h858419c6__76[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__314[0U] 
                             >> 0x17U)))) {
        __Vtemp_hdd205b38__0[0U] = (~ __Vtemp_h858419c6__77[0U]);
        __Vtemp_hdd205b38__0[1U] = (~ __Vtemp_h858419c6__77[1U]);
        __Vtemp_hdd205b38__0[2U] = (3U & (~ __Vtemp_h858419c6__77[2U]));
    } else {
        __Vtemp_hdd205b38__0[0U] = 0U;
        __Vtemp_hdd205b38__0[1U] = 0U;
        __Vtemp_hdd205b38__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_hbf4ecad8__0, __Vtemp_hdd205b38__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__308[0U] >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__309[0U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__72[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__72[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__72[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__310[0U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__73[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__73[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__73[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__311[0U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__74[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__74[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__74[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__74[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__74[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__312[0U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__75[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__75[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__75[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__75[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__75[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[0U] 
            = __Vtemp_hbf4ecad8__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[1U] 
            = __Vtemp_hbf4ecad8__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_12__DOT___io_p_T_20[2U] 
            = __Vtemp_hbf4ecad8__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__315, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__316, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__78, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__317, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__79, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__318, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__80, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__319, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__81, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__320, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__82, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__321, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__83, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__320[0U] >> 0x19U)))) {
        __Vtemp_h94114985__0[0U] = (~ __Vtemp_h858419c6__82[0U]);
        __Vtemp_h94114985__0[1U] = (~ __Vtemp_h858419c6__82[1U]);
        __Vtemp_h94114985__0[2U] = (3U & (~ __Vtemp_h858419c6__82[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__321[0U] 
                             >> 0x19U)))) {
        __Vtemp_h94114985__0[0U] = (~ __Vtemp_h858419c6__83[0U]);
        __Vtemp_h94114985__0[1U] = (~ __Vtemp_h858419c6__83[1U]);
        __Vtemp_h94114985__0[2U] = (3U & (~ __Vtemp_h858419c6__83[2U]));
    } else {
        __Vtemp_h94114985__0[0U] = 0U;
        __Vtemp_h94114985__0[1U] = 0U;
        __Vtemp_h94114985__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_ha473db26__0, __Vtemp_h94114985__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__315[0U] >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__316[0U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__78[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__78[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__78[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__317[0U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__79[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__79[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__79[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__318[0U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__80[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__80[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__80[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__80[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__80[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__319[0U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__81[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__81[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__81[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__81[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__81[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[0U] 
            = __Vtemp_ha473db26__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[1U] 
            = __Vtemp_ha473db26__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_13__DOT___io_p_T_20[2U] 
            = __Vtemp_ha473db26__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__322, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__323, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__84, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__324, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__85, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__325, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__86, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__326, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__87, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__327, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__88, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__328, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__89, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__327[0U] >> 0x1bU)))) {
        __Vtemp_h79beac53__0[0U] = (~ __Vtemp_h858419c6__88[0U]);
        __Vtemp_h79beac53__0[1U] = (~ __Vtemp_h858419c6__88[1U]);
        __Vtemp_h79beac53__0[2U] = (3U & (~ __Vtemp_h858419c6__88[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__328[0U] 
                             >> 0x1bU)))) {
        __Vtemp_h79beac53__0[0U] = (~ __Vtemp_h858419c6__89[0U]);
        __Vtemp_h79beac53__0[1U] = (~ __Vtemp_h858419c6__89[1U]);
        __Vtemp_h79beac53__0[2U] = (3U & (~ __Vtemp_h858419c6__89[2U]));
    } else {
        __Vtemp_h79beac53__0[0U] = 0U;
        __Vtemp_h79beac53__0[1U] = 0U;
        __Vtemp_h79beac53__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_hdc1a9f5b__0, __Vtemp_h79beac53__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__322[0U] >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__323[0U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__84[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__84[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__84[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__324[0U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__85[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__85[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__85[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__325[0U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__86[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__86[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__86[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__86[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__86[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__326[0U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__87[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__87[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__87[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__87[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__87[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[0U] 
            = __Vtemp_hdc1a9f5b__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[1U] 
            = __Vtemp_hdc1a9f5b__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_14__DOT___io_p_T_20[2U] 
            = __Vtemp_hdc1a9f5b__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__329, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__330, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__90, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__331, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__91, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__332, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__92, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__333, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__93, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__334, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__94, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__335, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__95, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (__Vtemp_h3d097fd2__334[0U] >> 0x1dU))) {
        __Vtemp_haa7b9ab0__0[0U] = (~ __Vtemp_h858419c6__94[0U]);
        __Vtemp_haa7b9ab0__0[1U] = (~ __Vtemp_h858419c6__94[1U]);
        __Vtemp_haa7b9ab0__0[2U] = (3U & (~ __Vtemp_h858419c6__94[2U]));
    } else if ((6U == (__Vtemp_h3d097fd2__335[0U] >> 0x1dU))) {
        __Vtemp_haa7b9ab0__0[0U] = (~ __Vtemp_h858419c6__95[0U]);
        __Vtemp_haa7b9ab0__0[1U] = (~ __Vtemp_h858419c6__95[1U]);
        __Vtemp_haa7b9ab0__0[2U] = (3U & (~ __Vtemp_h858419c6__95[2U]));
    } else {
        __Vtemp_haa7b9ab0__0[0U] = 0U;
        __Vtemp_haa7b9ab0__0[1U] = 0U;
        __Vtemp_haa7b9ab0__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h54811f5a__0, __Vtemp_haa7b9ab0__0);
    if ((0U == (__Vtemp_h3d097fd2__329[0U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (__Vtemp_h3d097fd2__330[0U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__90[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__90[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__90[2U];
    } else if ((2U == (__Vtemp_h3d097fd2__331[0U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__91[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__91[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__91[2U];
    } else if ((3U == (__Vtemp_h3d097fd2__332[0U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__92[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__92[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__92[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__92[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__92[2U] << 1U));
    } else if ((4U == (__Vtemp_h3d097fd2__333[0U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__93[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__93[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__93[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__93[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__93[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[0U] 
            = __Vtemp_h54811f5a__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[1U] 
            = __Vtemp_h54811f5a__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_15__DOT___io_p_T_20[2U] 
            = __Vtemp_h54811f5a__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__336, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__337, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__96, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__338, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__97, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__339, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__98, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__340, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__99, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__341, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__100, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__342, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__101, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & ((__Vtemp_h3d097fd2__341[1U] << 1U) 
                      | (__Vtemp_h3d097fd2__341[0U] 
                         >> 0x1fU))))) {
        __Vtemp_h461606a8__0[0U] = (~ __Vtemp_h858419c6__100[0U]);
        __Vtemp_h461606a8__0[1U] = (~ __Vtemp_h858419c6__100[1U]);
        __Vtemp_h461606a8__0[2U] = (3U & (~ __Vtemp_h858419c6__100[2U]));
    } else if ((6U == (7U & ((__Vtemp_h3d097fd2__342[1U] 
                              << 1U) | (__Vtemp_h3d097fd2__342[0U] 
                                        >> 0x1fU))))) {
        __Vtemp_h461606a8__0[0U] = (~ __Vtemp_h858419c6__101[0U]);
        __Vtemp_h461606a8__0[1U] = (~ __Vtemp_h858419c6__101[1U]);
        __Vtemp_h461606a8__0[2U] = (3U & (~ __Vtemp_h858419c6__101[2U]));
    } else {
        __Vtemp_h461606a8__0[0U] = 0U;
        __Vtemp_h461606a8__0[1U] = 0U;
        __Vtemp_h461606a8__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_hf44b5906__0, __Vtemp_h461606a8__0);
    if ((1U == (7U & ((__Vtemp_h3d097fd2__337[1U] << 1U) 
                      | (__Vtemp_h3d097fd2__337[0U] 
                         >> 0x1fU))))) {
        __Vtemp_h6f36491a__0[1U] = __Vtemp_h858419c6__96[1U];
        __Vtemp_h6f36491a__0[2U] = __Vtemp_h858419c6__96[2U];
    } else if ((2U == (7U & ((__Vtemp_h3d097fd2__338[1U] 
                              << 1U) | (__Vtemp_h3d097fd2__338[0U] 
                                        >> 0x1fU))))) {
        __Vtemp_h6f36491a__0[1U] = __Vtemp_h858419c6__97[1U];
        __Vtemp_h6f36491a__0[2U] = __Vtemp_h858419c6__97[2U];
    } else if ((3U == (7U & ((__Vtemp_h3d097fd2__339[1U] 
                              << 1U) | (__Vtemp_h3d097fd2__339[0U] 
                                        >> 0x1fU))))) {
        __Vtemp_h6f36491a__0[1U] = ((__Vtemp_h858419c6__98[0U] 
                                     >> 0x1fU) | (__Vtemp_h858419c6__98[1U] 
                                                  << 1U));
        __Vtemp_h6f36491a__0[2U] = ((__Vtemp_h858419c6__98[1U] 
                                     >> 0x1fU) | (__Vtemp_h858419c6__98[2U] 
                                                  << 1U));
    } else if ((4U == (7U & ((__Vtemp_h3d097fd2__340[1U] 
                              << 1U) | (__Vtemp_h3d097fd2__340[0U] 
                                        >> 0x1fU))))) {
        __Vtemp_h6f36491a__0[1U] = (((~ __Vtemp_h858419c6__99[0U]) 
                                     >> 0x1fU) | ((~ 
                                                   __Vtemp_h858419c6__99[1U]) 
                                                  << 1U));
        __Vtemp_h6f36491a__0[2U] = (((~ __Vtemp_h858419c6__99[1U]) 
                                     >> 0x1fU) | (6U 
                                                  & ((~ 
                                                      __Vtemp_h858419c6__99[2U]) 
                                                     << 1U)));
    } else {
        __Vtemp_h6f36491a__0[1U] = __Vtemp_hf44b5906__0[1U];
        __Vtemp_h6f36491a__0[2U] = __Vtemp_hf44b5906__0[2U];
    }
    if ((0U == (7U & ((__Vtemp_h3d097fd2__336[1U] << 1U) 
                      | (__Vtemp_h3d097fd2__336[0U] 
                         >> 0x1fU))))) {
        __Vtemp_h1297b3ff__0[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
            = __Vtemp_h1297b3ff__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[2U] = 0U;
    } else {
        __Vtemp_h1297b3ff__0[0U] = ((1U == (7U & ((
                                                   __Vtemp_h3d097fd2__337[1U] 
                                                   << 1U) 
                                                  | (__Vtemp_h3d097fd2__337[0U] 
                                                     >> 0x1fU))))
                                     ? __Vtemp_h858419c6__96[0U]
                                     : ((2U == (7U 
                                                & ((__Vtemp_h3d097fd2__338[1U] 
                                                    << 1U) 
                                                   | (__Vtemp_h3d097fd2__338[0U] 
                                                      >> 0x1fU))))
                                         ? __Vtemp_h858419c6__97[0U]
                                         : ((3U == 
                                             (7U & 
                                              ((__Vtemp_h3d097fd2__339[1U] 
                                                << 1U) 
                                               | (__Vtemp_h3d097fd2__339[0U] 
                                                  >> 0x1fU))))
                                             ? (__Vtemp_h858419c6__98[0U] 
                                                << 1U)
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & ((__Vtemp_h3d097fd2__340[1U] 
                                                      << 1U) 
                                                     | (__Vtemp_h3d097fd2__340[0U] 
                                                        >> 0x1fU))))
                                                 ? 
                                                ((~ 
                                                  __Vtemp_h858419c6__99[0U]) 
                                                 << 1U)
                                                 : 
                                                __Vtemp_hf44b5906__0[0U]))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[0U] 
            = __Vtemp_h1297b3ff__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[1U] 
            = __Vtemp_h6f36491a__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_16__DOT___io_p_T_20[2U] 
            = __Vtemp_h6f36491a__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__343, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__344, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__102, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__345, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__103, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__346, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__104, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__347, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__105, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__348, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__106, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__349, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__107, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__348[1U] >> 1U)))) {
        __Vtemp_h6d7d3b64__0[0U] = (~ __Vtemp_h858419c6__106[0U]);
        __Vtemp_h6d7d3b64__0[1U] = (~ __Vtemp_h858419c6__106[1U]);
        __Vtemp_h6d7d3b64__0[2U] = (3U & (~ __Vtemp_h858419c6__106[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__349[1U] 
                             >> 1U)))) {
        __Vtemp_h6d7d3b64__0[0U] = (~ __Vtemp_h858419c6__107[0U]);
        __Vtemp_h6d7d3b64__0[1U] = (~ __Vtemp_h858419c6__107[1U]);
        __Vtemp_h6d7d3b64__0[2U] = (3U & (~ __Vtemp_h858419c6__107[2U]));
    } else {
        __Vtemp_h6d7d3b64__0[0U] = 0U;
        __Vtemp_h6d7d3b64__0[1U] = 0U;
        __Vtemp_h6d7d3b64__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h0dbaa521__0, __Vtemp_h6d7d3b64__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__343[1U] >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__344[1U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__102[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__102[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__102[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__345[1U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__103[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__103[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__103[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__346[1U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__104[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__104[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__104[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__104[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__104[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__347[1U] 
                             >> 1U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__105[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__105[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__105[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__105[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__105[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[0U] 
            = __Vtemp_h0dbaa521__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[1U] 
            = __Vtemp_h0dbaa521__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_17__DOT___io_p_T_20[2U] 
            = __Vtemp_h0dbaa521__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__350, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__351, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__108, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__352, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__109, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__353, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__110, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__354, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__111, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__355, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__112, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__356, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__113, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__355[1U] >> 3U)))) {
        __Vtemp_h864e4001__0[0U] = (~ __Vtemp_h858419c6__112[0U]);
        __Vtemp_h864e4001__0[1U] = (~ __Vtemp_h858419c6__112[1U]);
        __Vtemp_h864e4001__0[2U] = (3U & (~ __Vtemp_h858419c6__112[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__356[1U] 
                             >> 3U)))) {
        __Vtemp_h864e4001__0[0U] = (~ __Vtemp_h858419c6__113[0U]);
        __Vtemp_h864e4001__0[1U] = (~ __Vtemp_h858419c6__113[1U]);
        __Vtemp_h864e4001__0[2U] = (3U & (~ __Vtemp_h858419c6__113[2U]));
    } else {
        __Vtemp_h864e4001__0[0U] = 0U;
        __Vtemp_h864e4001__0[1U] = 0U;
        __Vtemp_h864e4001__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_hf9c49f07__0, __Vtemp_h864e4001__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__350[1U] >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__351[1U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__108[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__108[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__108[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__352[1U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__109[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__109[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__109[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__353[1U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__110[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__110[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__110[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__110[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__110[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__354[1U] 
                             >> 3U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__111[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__111[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__111[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__111[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__111[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[0U] 
            = __Vtemp_hf9c49f07__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[1U] 
            = __Vtemp_hf9c49f07__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_18__DOT___io_p_T_20[2U] 
            = __Vtemp_hf9c49f07__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__357, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__358, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__114, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__359, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__115, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__360, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__116, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__361, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__117, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__362, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__118, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__363, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__119, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__362[1U] >> 5U)))) {
        __Vtemp_h63371670__0[0U] = (~ __Vtemp_h858419c6__118[0U]);
        __Vtemp_h63371670__0[1U] = (~ __Vtemp_h858419c6__118[1U]);
        __Vtemp_h63371670__0[2U] = (3U & (~ __Vtemp_h858419c6__118[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__363[1U] 
                             >> 5U)))) {
        __Vtemp_h63371670__0[0U] = (~ __Vtemp_h858419c6__119[0U]);
        __Vtemp_h63371670__0[1U] = (~ __Vtemp_h858419c6__119[1U]);
        __Vtemp_h63371670__0[2U] = (3U & (~ __Vtemp_h858419c6__119[2U]));
    } else {
        __Vtemp_h63371670__0[0U] = 0U;
        __Vtemp_h63371670__0[1U] = 0U;
        __Vtemp_h63371670__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h40be48a1__0, __Vtemp_h63371670__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__357[1U] >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__358[1U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__114[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__114[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__114[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__359[1U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__115[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__115[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__115[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__360[1U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__116[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__116[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__116[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__116[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__116[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__361[1U] 
                             >> 5U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__117[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__117[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__117[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__117[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__117[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[0U] 
            = __Vtemp_h40be48a1__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[1U] 
            = __Vtemp_h40be48a1__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_19__DOT___io_p_T_20[2U] 
            = __Vtemp_h40be48a1__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__364, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__365, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__120, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__366, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__121, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__367, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__122, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__368, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__123, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__369, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__124, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__370, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__125, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__369[1U] >> 7U)))) {
        __Vtemp_h9d824b79__0[0U] = (~ __Vtemp_h858419c6__124[0U]);
        __Vtemp_h9d824b79__0[1U] = (~ __Vtemp_h858419c6__124[1U]);
        __Vtemp_h9d824b79__0[2U] = (3U & (~ __Vtemp_h858419c6__124[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__370[1U] 
                             >> 7U)))) {
        __Vtemp_h9d824b79__0[0U] = (~ __Vtemp_h858419c6__125[0U]);
        __Vtemp_h9d824b79__0[1U] = (~ __Vtemp_h858419c6__125[1U]);
        __Vtemp_h9d824b79__0[2U] = (3U & (~ __Vtemp_h858419c6__125[2U]));
    } else {
        __Vtemp_h9d824b79__0[0U] = 0U;
        __Vtemp_h9d824b79__0[1U] = 0U;
        __Vtemp_h9d824b79__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h5ca65954__0, __Vtemp_h9d824b79__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__364[1U] >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__365[1U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__120[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__120[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__120[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__366[1U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__121[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__121[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__121[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__367[1U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__122[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__122[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__122[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__122[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__122[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__368[1U] 
                             >> 7U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__123[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__123[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__123[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__123[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__123[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[0U] 
            = __Vtemp_h5ca65954__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[1U] 
            = __Vtemp_h5ca65954__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_20__DOT___io_p_T_20[2U] 
            = __Vtemp_h5ca65954__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__371, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__372, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__126, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__373, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__127, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__374, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__128, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__375, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__129, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__376, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__130, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__377, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__131, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__376[1U] >> 9U)))) {
        __Vtemp_h00f7e2cc__0[0U] = (~ __Vtemp_h858419c6__130[0U]);
        __Vtemp_h00f7e2cc__0[1U] = (~ __Vtemp_h858419c6__130[1U]);
        __Vtemp_h00f7e2cc__0[2U] = (3U & (~ __Vtemp_h858419c6__130[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__377[1U] 
                             >> 9U)))) {
        __Vtemp_h00f7e2cc__0[0U] = (~ __Vtemp_h858419c6__131[0U]);
        __Vtemp_h00f7e2cc__0[1U] = (~ __Vtemp_h858419c6__131[1U]);
        __Vtemp_h00f7e2cc__0[2U] = (3U & (~ __Vtemp_h858419c6__131[2U]));
    } else {
        __Vtemp_h00f7e2cc__0[0U] = 0U;
        __Vtemp_h00f7e2cc__0[1U] = 0U;
        __Vtemp_h00f7e2cc__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h8f82102b__0, __Vtemp_h00f7e2cc__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__371[1U] >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__372[1U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__126[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__126[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__126[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__373[1U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__127[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__127[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__127[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__374[1U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__128[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__128[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__128[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__128[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__128[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__375[1U] 
                             >> 9U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__129[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__129[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__129[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__129[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__129[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[0U] 
            = __Vtemp_h8f82102b__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[1U] 
            = __Vtemp_h8f82102b__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_21__DOT___io_p_T_20[2U] 
            = __Vtemp_h8f82102b__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__378, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__379, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__132, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__380, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__133, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__381, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__134, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__382, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__135, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__383, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__136, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__384, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__137, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__383[1U] >> 0xbU)))) {
        __Vtemp_h8579c4f2__0[0U] = (~ __Vtemp_h858419c6__136[0U]);
        __Vtemp_h8579c4f2__0[1U] = (~ __Vtemp_h858419c6__136[1U]);
        __Vtemp_h8579c4f2__0[2U] = (3U & (~ __Vtemp_h858419c6__136[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__384[1U] 
                             >> 0xbU)))) {
        __Vtemp_h8579c4f2__0[0U] = (~ __Vtemp_h858419c6__137[0U]);
        __Vtemp_h8579c4f2__0[1U] = (~ __Vtemp_h858419c6__137[1U]);
        __Vtemp_h8579c4f2__0[2U] = (3U & (~ __Vtemp_h858419c6__137[2U]));
    } else {
        __Vtemp_h8579c4f2__0[0U] = 0U;
        __Vtemp_h8579c4f2__0[1U] = 0U;
        __Vtemp_h8579c4f2__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_ha1e2c4da__0, __Vtemp_h8579c4f2__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__378[1U] >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__379[1U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__132[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__132[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__132[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__380[1U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__133[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__133[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__133[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__381[1U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__134[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__134[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__134[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__134[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__134[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__382[1U] 
                             >> 0xbU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__135[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__135[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__135[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__135[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__135[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[0U] 
            = __Vtemp_ha1e2c4da__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[1U] 
            = __Vtemp_ha1e2c4da__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_22__DOT___io_p_T_20[2U] 
            = __Vtemp_ha1e2c4da__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__385, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__386, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__138, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__387, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__139, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__388, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__140, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__389, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__141, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__390, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__142, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__391, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__143, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__390[1U] >> 0xdU)))) {
        __Vtemp_h95f2ed65__0[0U] = (~ __Vtemp_h858419c6__142[0U]);
        __Vtemp_h95f2ed65__0[1U] = (~ __Vtemp_h858419c6__142[1U]);
        __Vtemp_h95f2ed65__0[2U] = (3U & (~ __Vtemp_h858419c6__142[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__391[1U] 
                             >> 0xdU)))) {
        __Vtemp_h95f2ed65__0[0U] = (~ __Vtemp_h858419c6__143[0U]);
        __Vtemp_h95f2ed65__0[1U] = (~ __Vtemp_h858419c6__143[1U]);
        __Vtemp_h95f2ed65__0[2U] = (3U & (~ __Vtemp_h858419c6__143[2U]));
    } else {
        __Vtemp_h95f2ed65__0[0U] = 0U;
        __Vtemp_h95f2ed65__0[1U] = 0U;
        __Vtemp_h95f2ed65__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h65081628__0, __Vtemp_h95f2ed65__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__385[1U] >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__386[1U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__138[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__138[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__138[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__387[1U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__139[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__139[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__139[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__388[1U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__140[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__140[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__140[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__140[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__140[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__389[1U] 
                             >> 0xdU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__141[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__141[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__141[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__141[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__141[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[0U] 
            = __Vtemp_h65081628__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[1U] 
            = __Vtemp_h65081628__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_23__DOT___io_p_T_20[2U] 
            = __Vtemp_h65081628__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__392, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__393, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__144, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__394, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__145, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__395, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__146, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__396, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__147, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__397, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__148, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__398, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__149, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__397[1U] >> 0xfU)))) {
        __Vtemp_hee439e28__0[0U] = (~ __Vtemp_h858419c6__148[0U]);
        __Vtemp_hee439e28__0[1U] = (~ __Vtemp_h858419c6__148[1U]);
        __Vtemp_hee439e28__0[2U] = (3U & (~ __Vtemp_h858419c6__148[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__398[1U] 
                             >> 0xfU)))) {
        __Vtemp_hee439e28__0[0U] = (~ __Vtemp_h858419c6__149[0U]);
        __Vtemp_hee439e28__0[1U] = (~ __Vtemp_h858419c6__149[1U]);
        __Vtemp_hee439e28__0[2U] = (3U & (~ __Vtemp_h858419c6__149[2U]));
    } else {
        __Vtemp_hee439e28__0[0U] = 0U;
        __Vtemp_hee439e28__0[1U] = 0U;
        __Vtemp_hee439e28__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h3055a237__0, __Vtemp_hee439e28__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__392[1U] >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__393[1U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__144[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__144[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__144[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__394[1U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__145[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__145[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__145[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__395[1U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__146[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__146[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__146[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__146[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__146[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__396[1U] 
                             >> 0xfU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__147[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__147[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__147[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__147[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__147[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[0U] 
            = __Vtemp_h3055a237__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[1U] 
            = __Vtemp_h3055a237__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_24__DOT___io_p_T_20[2U] 
            = __Vtemp_h3055a237__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__399, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__400, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__150, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__401, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__151, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__402, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__152, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__403, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__153, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__404, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__154, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__405, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__155, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__404[1U] >> 0x11U)))) {
        __Vtemp_hc52b9f6d__0[0U] = (~ __Vtemp_h858419c6__154[0U]);
        __Vtemp_hc52b9f6d__0[1U] = (~ __Vtemp_h858419c6__154[1U]);
        __Vtemp_hc52b9f6d__0[2U] = (3U & (~ __Vtemp_h858419c6__154[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__405[1U] 
                             >> 0x11U)))) {
        __Vtemp_hc52b9f6d__0[0U] = (~ __Vtemp_h858419c6__155[0U]);
        __Vtemp_hc52b9f6d__0[1U] = (~ __Vtemp_h858419c6__155[1U]);
        __Vtemp_hc52b9f6d__0[2U] = (3U & (~ __Vtemp_h858419c6__155[2U]));
    } else {
        __Vtemp_hc52b9f6d__0[0U] = 0U;
        __Vtemp_hc52b9f6d__0[1U] = 0U;
        __Vtemp_hc52b9f6d__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h688d3655__0, __Vtemp_hc52b9f6d__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__399[1U] >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__400[1U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__150[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__150[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__150[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__401[1U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__151[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__151[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__151[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__402[1U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__152[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__152[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__152[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__152[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__152[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__403[1U] 
                             >> 0x11U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__153[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__153[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__153[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__153[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__153[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[0U] 
            = __Vtemp_h688d3655__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[1U] 
            = __Vtemp_h688d3655__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_25__DOT___io_p_T_20[2U] 
            = __Vtemp_h688d3655__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__406, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__407, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__156, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__408, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__157, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__409, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__158, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__410, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__159, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__411, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__160, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__412, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__161, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__411[1U] >> 0x13U)))) {
        __Vtemp_hefb85986__0[0U] = (~ __Vtemp_h858419c6__160[0U]);
        __Vtemp_hefb85986__0[1U] = (~ __Vtemp_h858419c6__160[1U]);
        __Vtemp_hefb85986__0[2U] = (3U & (~ __Vtemp_h858419c6__160[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__412[1U] 
                             >> 0x13U)))) {
        __Vtemp_hefb85986__0[0U] = (~ __Vtemp_h858419c6__161[0U]);
        __Vtemp_hefb85986__0[1U] = (~ __Vtemp_h858419c6__161[1U]);
        __Vtemp_hefb85986__0[2U] = (3U & (~ __Vtemp_h858419c6__161[2U]));
    } else {
        __Vtemp_hefb85986__0[0U] = 0U;
        __Vtemp_hefb85986__0[1U] = 0U;
        __Vtemp_hefb85986__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h6a6cce3f__0, __Vtemp_hefb85986__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__406[1U] >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__407[1U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__156[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__156[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__156[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__408[1U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__157[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__157[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__157[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__409[1U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__158[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__158[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__158[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__158[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__158[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__410[1U] 
                             >> 0x13U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__159[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__159[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__159[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__159[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__159[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[0U] 
            = __Vtemp_h6a6cce3f__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[1U] 
            = __Vtemp_h6a6cce3f__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_26__DOT___io_p_T_20[2U] 
            = __Vtemp_h6a6cce3f__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__413, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__414, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__162, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__415, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__163, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__416, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__164, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__417, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__165, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__418, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__166, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__419, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__167, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__418[1U] >> 0x15U)))) {
        __Vtemp_hbfbaa527__0[0U] = (~ __Vtemp_h858419c6__166[0U]);
        __Vtemp_hbfbaa527__0[1U] = (~ __Vtemp_h858419c6__166[1U]);
        __Vtemp_hbfbaa527__0[2U] = (3U & (~ __Vtemp_h858419c6__166[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__419[1U] 
                             >> 0x15U)))) {
        __Vtemp_hbfbaa527__0[0U] = (~ __Vtemp_h858419c6__167[0U]);
        __Vtemp_hbfbaa527__0[1U] = (~ __Vtemp_h858419c6__167[1U]);
        __Vtemp_hbfbaa527__0[2U] = (3U & (~ __Vtemp_h858419c6__167[2U]));
    } else {
        __Vtemp_hbfbaa527__0[0U] = 0U;
        __Vtemp_hbfbaa527__0[1U] = 0U;
        __Vtemp_hbfbaa527__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h33afd780__0, __Vtemp_hbfbaa527__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__413[1U] >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__414[1U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__162[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__162[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__162[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__415[1U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__163[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__163[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__163[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__416[1U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__164[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__164[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__164[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__164[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__164[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__417[1U] 
                             >> 0x15U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__165[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__165[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__165[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__165[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__165[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[0U] 
            = __Vtemp_h33afd780__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[1U] 
            = __Vtemp_h33afd780__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_27__DOT___io_p_T_20[2U] 
            = __Vtemp_h33afd780__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__420, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__421, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__168, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__422, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__169, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__423, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__170, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__424, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__171, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__425, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__172, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__426, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__173, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__425[1U] >> 0x17U)))) {
        __Vtemp_h843827e6__0[0U] = (~ __Vtemp_h858419c6__172[0U]);
        __Vtemp_h843827e6__0[1U] = (~ __Vtemp_h858419c6__172[1U]);
        __Vtemp_h843827e6__0[2U] = (3U & (~ __Vtemp_h858419c6__172[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__426[1U] 
                             >> 0x17U)))) {
        __Vtemp_h843827e6__0[0U] = (~ __Vtemp_h858419c6__173[0U]);
        __Vtemp_h843827e6__0[1U] = (~ __Vtemp_h858419c6__173[1U]);
        __Vtemp_h843827e6__0[2U] = (3U & (~ __Vtemp_h858419c6__173[2U]));
    } else {
        __Vtemp_h843827e6__0[0U] = 0U;
        __Vtemp_h843827e6__0[1U] = 0U;
        __Vtemp_h843827e6__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h62a80a67__0, __Vtemp_h843827e6__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__420[1U] >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__421[1U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__168[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__168[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__168[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__422[1U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__169[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__169[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__169[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__423[1U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__170[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__170[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__170[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__170[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__170[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__424[1U] 
                             >> 0x17U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__171[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__171[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__171[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__171[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__171[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[0U] 
            = __Vtemp_h62a80a67__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[1U] 
            = __Vtemp_h62a80a67__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_28__DOT___io_p_T_20[2U] 
            = __Vtemp_h62a80a67__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__427, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__428, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__174, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__429, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__175, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__430, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__176, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__431, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__177, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__432, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__178, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__433, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__179, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__432[1U] >> 0x19U)))) {
        __Vtemp_h7b511df4__0[0U] = (~ __Vtemp_h858419c6__178[0U]);
        __Vtemp_h7b511df4__0[1U] = (~ __Vtemp_h858419c6__178[1U]);
        __Vtemp_h7b511df4__0[2U] = (3U & (~ __Vtemp_h858419c6__178[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__433[1U] 
                             >> 0x19U)))) {
        __Vtemp_h7b511df4__0[0U] = (~ __Vtemp_h858419c6__179[0U]);
        __Vtemp_h7b511df4__0[1U] = (~ __Vtemp_h858419c6__179[1U]);
        __Vtemp_h7b511df4__0[2U] = (3U & (~ __Vtemp_h858419c6__179[2U]));
    } else {
        __Vtemp_h7b511df4__0[0U] = 0U;
        __Vtemp_h7b511df4__0[1U] = 0U;
        __Vtemp_h7b511df4__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h3a55c872__0, __Vtemp_h7b511df4__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__427[1U] >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__428[1U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__174[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__174[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__174[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__429[1U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__175[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__175[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__175[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__430[1U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__176[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__176[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__176[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__176[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__176[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__431[1U] 
                             >> 0x19U)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__177[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__177[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__177[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__177[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__177[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[0U] 
            = __Vtemp_h3a55c872__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[1U] 
            = __Vtemp_h3a55c872__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_29__DOT___io_p_T_20[2U] 
            = __Vtemp_h3a55c872__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__434, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__435, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__180, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__436, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__181, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__437, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__182, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__438, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__183, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__439, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__184, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__440, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__185, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & (__Vtemp_h3d097fd2__439[1U] >> 0x1bU)))) {
        __Vtemp_h6a52b92a__0[0U] = (~ __Vtemp_h858419c6__184[0U]);
        __Vtemp_h6a52b92a__0[1U] = (~ __Vtemp_h858419c6__184[1U]);
        __Vtemp_h6a52b92a__0[2U] = (3U & (~ __Vtemp_h858419c6__184[2U]));
    } else if ((6U == (7U & (__Vtemp_h3d097fd2__440[1U] 
                             >> 0x1bU)))) {
        __Vtemp_h6a52b92a__0[0U] = (~ __Vtemp_h858419c6__185[0U]);
        __Vtemp_h6a52b92a__0[1U] = (~ __Vtemp_h858419c6__185[1U]);
        __Vtemp_h6a52b92a__0[2U] = (3U & (~ __Vtemp_h858419c6__185[2U]));
    } else {
        __Vtemp_h6a52b92a__0[0U] = 0U;
        __Vtemp_h6a52b92a__0[1U] = 0U;
        __Vtemp_h6a52b92a__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h5244360b__0, __Vtemp_h6a52b92a__0);
    if ((0U == (7U & (__Vtemp_h3d097fd2__434[1U] >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (7U & (__Vtemp_h3d097fd2__435[1U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__180[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__180[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__180[2U];
    } else if ((2U == (7U & (__Vtemp_h3d097fd2__436[1U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__181[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__181[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__181[2U];
    } else if ((3U == (7U & (__Vtemp_h3d097fd2__437[1U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__182[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__182[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__182[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__182[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__182[2U] << 1U));
    } else if ((4U == (7U & (__Vtemp_h3d097fd2__438[1U] 
                             >> 0x1bU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__183[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__183[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__183[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__183[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__183[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[0U] 
            = __Vtemp_h5244360b__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[1U] 
            = __Vtemp_h5244360b__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_30__DOT___io_p_T_20[2U] 
            = __Vtemp_h5244360b__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__441, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__442, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__186, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__443, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__187, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__444, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__188, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__445, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__189, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__446, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__190, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__447, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__191, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (__Vtemp_h3d097fd2__446[1U] >> 0x1dU))) {
        __Vtemp_hb0182e67__0[0U] = (~ __Vtemp_h858419c6__190[0U]);
        __Vtemp_hb0182e67__0[1U] = (~ __Vtemp_h858419c6__190[1U]);
        __Vtemp_hb0182e67__0[2U] = (3U & (~ __Vtemp_h858419c6__190[2U]));
    } else if ((6U == (__Vtemp_h3d097fd2__447[1U] >> 0x1dU))) {
        __Vtemp_hb0182e67__0[0U] = (~ __Vtemp_h858419c6__191[0U]);
        __Vtemp_hb0182e67__0[1U] = (~ __Vtemp_h858419c6__191[1U]);
        __Vtemp_hb0182e67__0[2U] = (3U & (~ __Vtemp_h858419c6__191[2U]));
    } else {
        __Vtemp_hb0182e67__0[0U] = 0U;
        __Vtemp_hb0182e67__0[1U] = 0U;
        __Vtemp_hb0182e67__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_he97e4669__0, __Vtemp_hb0182e67__0);
    if ((0U == (__Vtemp_h3d097fd2__441[1U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] = 0U;
    } else if ((1U == (__Vtemp_h3d097fd2__442[1U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__186[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__186[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__186[2U];
    } else if ((2U == (__Vtemp_h3d097fd2__443[1U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
            = __Vtemp_h858419c6__187[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
            = __Vtemp_h858419c6__187[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
            = __Vtemp_h858419c6__187[2U];
    } else if ((3U == (__Vtemp_h3d097fd2__444[1U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
            = (__Vtemp_h858419c6__188[0U] << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
            = ((__Vtemp_h858419c6__188[0U] >> 0x1fU) 
               | (__Vtemp_h858419c6__188[1U] << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
            = ((__Vtemp_h858419c6__188[1U] >> 0x1fU) 
               | (__Vtemp_h858419c6__188[2U] << 1U));
    } else if ((4U == (__Vtemp_h3d097fd2__445[1U] >> 0x1dU))) {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
            = ((~ __Vtemp_h858419c6__189[0U]) << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
            = (((~ __Vtemp_h858419c6__189[0U]) >> 0x1fU) 
               | ((~ __Vtemp_h858419c6__189[1U]) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
            = (((~ __Vtemp_h858419c6__189[1U]) >> 0x1fU) 
               | (6U & ((~ __Vtemp_h858419c6__189[2U]) 
                        << 1U)));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[0U] 
            = __Vtemp_he97e4669__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[1U] 
            = __Vtemp_he97e4669__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_31__DOT___io_p_T_20[2U] 
            = __Vtemp_he97e4669__0[2U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__448, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__449, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__192, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__450, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(67,64, __Vtemp_h858419c6__193, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__451, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__194, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__452, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__195, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__453, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__196, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    VL_EXTEND_WQ(66,64, __Vtemp_h3d097fd2__454, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src1);
    VL_EXTEND_WQ(66,64, __Vtemp_h858419c6__197, vlSelf->CoreTop__DOT__EX__DOT__mul_io_in_bits_ctrl_data_src2);
    if ((5U == (7U & ((__Vtemp_h3d097fd2__453[2U] << 1U) 
                      | (__Vtemp_h3d097fd2__453[1U] 
                         >> 0x1fU))))) {
        __Vtemp_h34245a5f__0[0U] = (~ __Vtemp_h858419c6__196[0U]);
        __Vtemp_h34245a5f__0[1U] = (~ __Vtemp_h858419c6__196[1U]);
        __Vtemp_h34245a5f__0[2U] = (3U & (~ __Vtemp_h858419c6__196[2U]));
    } else if ((6U == (7U & ((__Vtemp_h3d097fd2__454[2U] 
                              << 1U) | (__Vtemp_h3d097fd2__454[1U] 
                                        >> 0x1fU))))) {
        __Vtemp_h34245a5f__0[0U] = (~ __Vtemp_h858419c6__197[0U]);
        __Vtemp_h34245a5f__0[1U] = (~ __Vtemp_h858419c6__197[1U]);
        __Vtemp_h34245a5f__0[2U] = (3U & (~ __Vtemp_h858419c6__197[2U]));
    } else {
        __Vtemp_h34245a5f__0[0U] = 0U;
        __Vtemp_h34245a5f__0[1U] = 0U;
        __Vtemp_h34245a5f__0[2U] = (3U & 0U);
    }
    VL_EXTEND_WW(67,66, __Vtemp_h6a79dc60__0, __Vtemp_h34245a5f__0);
    if ((1U == (7U & ((__Vtemp_h3d097fd2__449[2U] << 1U) 
                      | (__Vtemp_h3d097fd2__449[1U] 
                         >> 0x1fU))))) {
        __Vtemp_h08e19294__0[1U] = __Vtemp_h858419c6__192[1U];
        __Vtemp_h08e19294__0[2U] = __Vtemp_h858419c6__192[2U];
    } else if ((2U == (7U & ((__Vtemp_h3d097fd2__450[2U] 
                              << 1U) | (__Vtemp_h3d097fd2__450[1U] 
                                        >> 0x1fU))))) {
        __Vtemp_h08e19294__0[1U] = __Vtemp_h858419c6__193[1U];
        __Vtemp_h08e19294__0[2U] = __Vtemp_h858419c6__193[2U];
    } else if ((3U == (7U & ((__Vtemp_h3d097fd2__451[2U] 
                              << 1U) | (__Vtemp_h3d097fd2__451[1U] 
                                        >> 0x1fU))))) {
        __Vtemp_h08e19294__0[1U] = ((__Vtemp_h858419c6__194[0U] 
                                     >> 0x1fU) | (__Vtemp_h858419c6__194[1U] 
                                                  << 1U));
        __Vtemp_h08e19294__0[2U] = ((__Vtemp_h858419c6__194[1U] 
                                     >> 0x1fU) | (__Vtemp_h858419c6__194[2U] 
                                                  << 1U));
    } else if ((4U == (7U & ((__Vtemp_h3d097fd2__452[2U] 
                              << 1U) | (__Vtemp_h3d097fd2__452[1U] 
                                        >> 0x1fU))))) {
        __Vtemp_h08e19294__0[1U] = (((~ __Vtemp_h858419c6__195[0U]) 
                                     >> 0x1fU) | ((~ 
                                                   __Vtemp_h858419c6__195[1U]) 
                                                  << 1U));
        __Vtemp_h08e19294__0[2U] = (((~ __Vtemp_h858419c6__195[1U]) 
                                     >> 0x1fU) | (6U 
                                                  & ((~ 
                                                      __Vtemp_h858419c6__195[2U]) 
                                                     << 1U)));
    } else {
        __Vtemp_h08e19294__0[1U] = __Vtemp_h6a79dc60__0[1U];
        __Vtemp_h08e19294__0[2U] = __Vtemp_h6a79dc60__0[2U];
    }
    if ((0U == (7U & ((__Vtemp_h3d097fd2__448[2U] << 1U) 
                      | (__Vtemp_h3d097fd2__448[1U] 
                         >> 0x1fU))))) {
        __Vtemp_h14dbb106__0[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[0U] 
            = __Vtemp_h14dbb106__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[2U] = 0U;
    } else {
        __Vtemp_h14dbb106__0[0U] = ((1U == (7U & ((
                                                   __Vtemp_h3d097fd2__449[2U] 
                                                   << 1U) 
                                                  | (__Vtemp_h3d097fd2__449[1U] 
                                                     >> 0x1fU))))
                                     ? __Vtemp_h858419c6__192[0U]
                                     : ((2U == (7U 
                                                & ((__Vtemp_h3d097fd2__450[2U] 
                                                    << 1U) 
                                                   | (__Vtemp_h3d097fd2__450[1U] 
                                                      >> 0x1fU))))
                                         ? __Vtemp_h858419c6__193[0U]
                                         : ((3U == 
                                             (7U & 
                                              ((__Vtemp_h3d097fd2__451[2U] 
                                                << 1U) 
                                               | (__Vtemp_h3d097fd2__451[1U] 
                                                  >> 0x1fU))))
                                             ? (__Vtemp_h858419c6__194[0U] 
                                                << 1U)
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & ((__Vtemp_h3d097fd2__452[2U] 
                                                      << 1U) 
                                                     | (__Vtemp_h3d097fd2__452[1U] 
                                                        >> 0x1fU))))
                                                 ? 
                                                ((~ 
                                                  __Vtemp_h858419c6__195[0U]) 
                                                 << 1U)
                                                 : 
                                                __Vtemp_h6a79dc60__0[0U]))));
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[0U] 
            = __Vtemp_h14dbb106__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[1U] 
            = __Vtemp_h08e19294__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_32__DOT___io_p_T_20[2U] 
            = __Vtemp_h08e19294__0[2U];
    }
    VL_EXTEND_WQ(129,64, __Vtemp_h5943c197__0, (((IData)(vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed) 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                                                            >> 0x3fU)))
                                                 ? 
                                                (- vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1)
                                                 : vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1));
    VL_EXTEND_WW(129,128, __Vtemp_h97a97068__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend);
    if (vlSelf->reset) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] = 0U;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] = 0U;
    } else if ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
            = __Vtemp_h5943c197__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
            = __Vtemp_h5943c197__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] 
            = __Vtemp_h5943c197__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] 
            = __Vtemp_h5943c197__0[3U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] 
            = __Vtemp_h5943c197__0[4U];
    } else if ((1U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U]
                 : (IData)((0x7fffffffffffffffULL & 
                            (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))))) 
               << 1U);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
            = ((((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U]
                  : (IData)((0x7fffffffffffffffULL 
                             & (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))))) 
                >> 0x1fU) | (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U]
                               : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                                   << 0x1fU) | (IData)(
                                                       ((0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))) 
                                                        >> 0x20U)))) 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] 
            = ((((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U]
                  : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                      << 0x1fU) | (IData)(((0x7fffffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[0U])))) 
                                           >> 0x20U)))) 
                >> 0x1fU) | (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                               ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]
                               : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                                   >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                                             << 0x1fU))) 
                             << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] 
            = ((((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                  ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]
                  : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
                      >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                                << 0x1fU))) >> 0x1fU) 
               | (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                    ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U]
                    : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                        >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
                                  << 0x1fU))) << 1U));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] 
            = (((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
                 ? vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U]
                 : ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
                     >> 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
                               << 0x1fU))) >> 0x1fU);
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[0U] 
            = __Vtemp_h97a97068__0[0U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[1U] 
            = __Vtemp_h97a97068__0[1U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[2U] 
            = __Vtemp_h97a97068__0[2U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[3U] 
            = __Vtemp_h97a97068__0[3U];
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_12[4U] 
            = __Vtemp_h97a97068__0[4U];
    }
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2 
        = ((2U & ((IData)((vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1 
                           >> 0x3fU)) << 1U)) | (1U 
                                                 & (IData)(
                                                           (vlSelf->CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2 
                                                            >> 0x3fU))));
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
    CoreTop__DOT__EX__DOT___GEN_207 = ((1U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                        ? (((QData)((IData)(
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
                                        : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                            ? ((0x6aU 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (
                                                   (vlSelf->CoreTop__DOT__EX__DOT___shift_result_T 
                                                    < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    ? 1ULL
                                                    : 0ULL)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___shift_result_T, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                     ? 1ULL
                                                     : 0ULL)
                                                    : 0ULL))
                                            : 0ULL));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_289 = ((0x48U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? (0xfffffffffffffffeULL 
                                                   & vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)
                                                : (
                                                   (0x6bU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? CoreTop__DOT__EX__DOT___dnpc_T_11
                                                    : 
                                                   ((0x6cU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? CoreTop__DOT__EX__DOT___dnpc_T_11
                                                     : 
                                                    ((0x76U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? CoreTop__DOT__EX__DOT___dnpc_T_11
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? CoreTop__DOT__EX__DOT___dnpc_T_11
                                                       : 
                                                      ((0x7bU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? CoreTop__DOT__EX__DOT___dnpc_T_11
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? CoreTop__DOT__EX__DOT___dnpc_T_11
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__csr_data
                                                          : 
                                                         ((0x18U 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__csr_data
                                                           : 
                                                          (4ULL 
                                                           + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC))))))))));
    vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid 
        = ((((1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
             & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit)) 
            | ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
               & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count)))) 
           & (~ (IData)(vlSelf->CoreTop__DOT__EX_io_is_flush)));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_177 = ((0x68U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                : (
                                                   (0x44U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                    : 
                                                   ((0x69U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                     : 
                                                    ((0x71U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                      : 
                                                     ((0x72U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                       : 
                                                      ((0x6dU 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                        ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                        : 
                                                       ((0x78U 
                                                         == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                         ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                         : 
                                                        ((0x79U 
                                                          == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                          ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                          : 
                                                         ((0x7aU 
                                                           == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                           ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                            ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                             ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                                                             : CoreTop__DOT__EX__DOT___GEN_100)))))))))));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_181 = ((0x1aU 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                : (
                                                   (0x68U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
                                                    : CoreTop__DOT__EX__DOT___GEN_167));
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
    vlSelf->CoreTop__DOT___T_1 = ((IData)(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid) 
                                  & (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready));
    vlSelf->CoreTop__DOT___GEN_1 = (((IData)(vlSelf->CoreTop__DOT__ICACHE_io_in_rdata_rep_valid) 
                                     & (IData)(vlSelf->CoreTop__DOT__EX_io_in_ready)) 
                                    | ((~ ((IData)(vlSelf->CoreTop__DOT__EX_io_in_ready) 
                                           & (IData)(vlSelf->CoreTop__DOT__valid))) 
                                       & (IData)(vlSelf->CoreTop__DOT__valid)));
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
                                ? 0ULL : CoreTop__DOT__EX__DOT___GEN_207)));
}
