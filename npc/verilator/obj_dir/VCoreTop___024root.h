// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCoreTop.h for the primary calling header

#ifndef VERILATED_VCORETOP___024ROOT_H_
#define VERILATED_VCORETOP___024ROOT_H_  // guard

#include "verilated.h"

class VCoreTop__Syms;
class VCoreTop___024unit;


class VCoreTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VCoreTop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ CoreTop__DOT__EX_io_in_ready;
        CData/*0:0*/ CoreTop__DOT__EX_io_branchIO_is_jump;
        CData/*0:0*/ CoreTop__DOT__EX_io_out_valid;
        CData/*0:0*/ CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen;
        CData/*0:0*/ CoreTop__DOT__EX_io_is_flush;
        CData/*0:0*/ CoreTop__DOT__MEM_io_out_valid;
        CData/*0:0*/ CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid;
        CData/*0:0*/ CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen;
        CData/*0:0*/ CoreTop__DOT__MEM_io_cache_io_addr_req_valid;
        CData/*0:0*/ CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we;
        CData/*7:0*/ CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wmask;
        CData/*0:0*/ CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen;
        CData/*0:0*/ CoreTop__DOT__ICACHE_io_in_rdata_rep_valid;
        CData/*0:0*/ CoreTop__DOT__If_axi_birdge_io_in_rdata_rep_valid;
        CData/*0:0*/ CoreTop__DOT__If_axi_birdge_io_out_raddr_req_valid;
        CData/*0:0*/ CoreTop__DOT__If_axi_birdge_io_out_wb_ready;
        CData/*0:0*/ CoreTop__DOT__MEM_axi_birdge_io_in_rdata_rep_valid;
        CData/*0:0*/ CoreTop__DOT__MEM_axi_birdge_io_out_raddr_req_valid;
        CData/*0:0*/ CoreTop__DOT__MEM_axi_birdge_io_out_waddr_req_valid;
        CData/*0:0*/ CoreTop__DOT__MEM_axi_birdge_io_out_wb_ready;
        CData/*0:0*/ CoreTop__DOT__IFMEM_r_valid;
        CData/*0:0*/ CoreTop__DOT__IFMEM_bvalid;
        CData/*0:0*/ CoreTop__DOT__MMEM_r_valid;
        CData/*0:0*/ CoreTop__DOT__MMEM_bvalid;
        CData/*0:0*/ CoreTop__DOT__MMIO_io_in_rdata_rep_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO_io_in_wdata_rep;
        CData/*0:0*/ CoreTop__DOT__MMIO_io_out_addr_req_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO_io_out_addr_req_bits_ce;
        CData/*0:0*/ CoreTop__DOT__MMIO_io_out_addr_req_bits_we;
        CData/*0:0*/ CoreTop__DOT__valid;
        CData/*0:0*/ CoreTop__DOT___T_1;
        CData/*0:0*/ CoreTop__DOT___GEN_1;
        CData/*0:0*/ CoreTop__DOT__valid_1;
        CData/*0:0*/ CoreTop__DOT___T_4;
        CData/*0:0*/ CoreTop__DOT___GEN_6;
        CData/*2:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type;
        CData/*2:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type;
        CData/*2:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType;
        CData/*0:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid;
        CData/*4:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc1;
        CData/*4:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfSrc2;
        CData/*0:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen;
        CData/*6:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype;
        CData/*4:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest;
        CData/*0:0*/ CoreTop__DOT__valid_2;
        CData/*0:0*/ CoreTop__DOT___T_7;
        CData/*0:0*/ CoreTop__DOT___GEN_25;
        CData/*2:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType;
        CData/*0:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid;
        CData/*0:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen;
        CData/*6:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype;
        CData/*4:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest;
        CData/*0:0*/ CoreTop__DOT__valid_3;
        CData/*0:0*/ CoreTop__DOT___GEN_47;
        CData/*0:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid;
        CData/*0:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen;
        CData/*0:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip;
        CData/*4:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest;
        CData/*0:0*/ CoreTop__DOT__DIP_io_is_break_REG;
        CData/*0:0*/ CoreTop__DOT__DIP_io_is_break_REG_1;
        CData/*0:0*/ CoreTop__DOT__DIP_io_is_skip_REG;
        CData/*0:0*/ CoreTop__DOT__DIP_io_inst_valid_REG;
    };
    struct {
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_144;
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_159;
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_174;
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_189;
        CData/*3:0*/ CoreTop__DOT__ID__DOT__Inst_decode_0;
        CData/*2:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_209;
        CData/*2:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_224;
        CData/*2:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_239;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_268;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_283;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_298;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_313;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_316;
        CData/*0:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_363;
        CData/*0:0*/ CoreTop__DOT__ID__DOT__Inst_decode_3;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__mul_io_in_valid;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__div_io_in_valid;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_flow_div_signed;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__is_mul;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__is_div;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__is_divw;
        CData/*0:0*/ CoreTop__DOT__EX__DOT___is_div_sign_T_2;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__branch_flag;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid;
        CData/*6:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count;
        CData/*6:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5;
        CData/*1:0*/ CoreTop__DOT__EX__DOT__div__DOT__state;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__div__DOT___T;
        CData/*5:0*/ CoreTop__DOT__EX__DOT__div__DOT__count;
        CData/*5:0*/ CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__div__DOT__s;
        CData/*1:0*/ CoreTop__DOT__EX__DOT__div__DOT___GEN_2;
        CData/*1:0*/ CoreTop__DOT__EX__DOT__div__DOT___s_o_T_2;
        CData/*7:0*/ CoreTop__DOT__MEM__DOT___GEN_32;
        CData/*7:0*/ CoreTop__DOT__MEM__DOT___mem_result_T_27;
        CData/*0:0*/ CoreTop__DOT__MEM__DOT___io_out_valid_T_6;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0;
        CData/*1:0*/ CoreTop__DOT__ICACHE__DOT__state;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__lru_r;
        CData/*3:0*/ CoreTop__DOT__ICACHE__DOT__count;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT___T;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT___T_1;
        CData/*3:0*/ CoreTop__DOT__ICACHE__DOT___GEN_45;
        CData/*1:0*/ CoreTop__DOT__ICACHE__DOT___GEN_121;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_valid_T_4;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result;
        CData/*0:0*/ CoreTop__DOT__If_axi_birdge__DOT__ar_state;
    };
    struct {
        CData/*0:0*/ CoreTop__DOT__If_axi_birdge__DOT__aw_state;
        CData/*0:0*/ CoreTop__DOT__If_axi_birdge__DOT___GEN_0;
        CData/*0:0*/ CoreTop__DOT__If_axi_birdge__DOT___GEN_4;
        CData/*0:0*/ CoreTop__DOT__MEM_axi_birdge__DOT__ar_state;
        CData/*0:0*/ CoreTop__DOT__MEM_axi_birdge__DOT__aw_state;
        CData/*0:0*/ CoreTop__DOT__MEM_axi_birdge__DOT___GEN_0;
        CData/*0:0*/ CoreTop__DOT__MEM_axi_birdge__DOT___GEN_4;
        CData/*1:0*/ CoreTop__DOT__IFMEM__DOT__state;
        CData/*1:0*/ CoreTop__DOT__IFMEM__DOT__next_state;
        CData/*1:0*/ CoreTop__DOT__MMEM__DOT__state;
        CData/*1:0*/ CoreTop__DOT__MMEM__DOT__next_state;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_rep;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_we;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_valid;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit_way_1;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r;
        CData/*3:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count;
        CData/*3:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_1;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_5;
        CData/*3:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_57;
        CData/*3:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_62;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_159;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_161;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_5;
        CData/*7:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_2;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___waymask_T_3;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__waymask;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT___hit_way_0_T;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT___hit_way_1_T;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result;
        CData/*4:0*/ __Vtableidx3;
        CData/*5:0*/ __Vtableidx5;
    };
    struct {
        CData/*0:0*/ __Vclklast__TOP__clock;
        SData/*15:0*/ CoreTop__DOT__MEM__DOT___mem_result_T_44;
        VL_OUT(io_inst,31,0);
        IData/*31:0*/ CoreTop__DOT__ID_io_in_bits_r_Inst;
        IData/*31:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst;
        IData/*31:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst;
        IData/*31:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst;
        IData/*31:0*/ CoreTop__DOT__DIP_io_inst_REG;
        VlWide<3>/*94:0*/ CoreTop__DOT__EX__DOT___shift_result_T_5;
        VlWide<3>/*94:0*/ CoreTop__DOT__EX__DOT___shift_result_T_16;
        IData/*31:0*/ CoreTop__DOT__EX__DOT___shift_result_T_25;
        IData/*31:0*/ CoreTop__DOT__EX__DOT___shift_result_T_31;
        VlWide<3>/*65:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier;
        VlWide<5>/*131:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand;
        VlWide<5>/*131:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p;
        VlWide<5>/*131:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp;
        VlWide<4>/*127:0*/ CoreTop__DOT__EX__DOT__div__DOT__dividend;
        VlWide<3>/*64:0*/ CoreTop__DOT__EX__DOT__div__DOT__res_div;
        VlWide<5>/*128:0*/ CoreTop__DOT__EX__DOT__div__DOT___GEN_12;
        VlWide<3>/*64:0*/ CoreTop__DOT__EX__DOT__div__DOT___GEN_13;
        VlWide<16>/*511:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_wdata;
        VlWide<16>/*511:0*/ CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data;
        VlWide<16>/*511:0*/ CoreTop__DOT__ICACHE__DOT__data_line_reg;
        VlWide<16>/*511:0*/ CoreTop__DOT__ICACHE__DOT___GEN_26;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_wdata;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_38;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_64;
        VlWide<4>/*127:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo;
        VlWide<8>/*255:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo;
        VlWide<4>/*127:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo;
        VlWide<8>/*255:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_6;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data;
        VL_OUT64(io_pc,63,0);
        QData/*63:0*/ CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__MEM_io_cache_io_wdata_req_bits_wdata;
        QData/*63:0*/ CoreTop__DOT__mem_bypass_io_Bypass_REG1;
        QData/*63:0*/ CoreTop__DOT__mem_bypass_io_Bypass_REG2;
        QData/*63:0*/ CoreTop__DOT__IFMEM_rdata;
        QData/*63:0*/ CoreTop__DOT__MMEM_rdata;
        QData/*63:0*/ CoreTop__DOT__MMIO_io_in_rdata_rep_bits_rdata;
        QData/*63:0*/ CoreTop__DOT__MMIO_io_out_addr_req_bits_addr;
        QData/*63:0*/ CoreTop__DOT__ID_io_in_bits_r_PC;
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1;
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2;
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm;
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm;
        QData/*63:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC;
        QData/*63:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc;
        QData/*63:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__DIP_io_pc_REG;
        QData/*63:0*/ CoreTop__DOT__DIP_io_dnpc_REG;
    };
    struct {
        QData/*63:0*/ CoreTop__DOT__IF__DOT__temp;
        QData/*63:0*/ CoreTop__DOT__IF__DOT___temp_T_3;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div_io_in_bits_ctrl_data_src2;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div_io_out_bits_result_quotient;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div_io_out_bits_result_remainder;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__mepc;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__mcause;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__mstatus;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__mtvec;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__mie;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__mip;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__src1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_3;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__src2;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_7;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_10;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_26;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_30;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_57;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___T_39;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_60;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_80;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_100;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_120;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_145;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_147;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_167;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_168;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_169;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_171;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_172;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_177;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_181;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___shift_result_T_28;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___shift_result_T_35;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_207;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___branch_result_T_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___T_92;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___T_112;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__csr_data;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___dnpc_T_11;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_289;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT__divisor;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT__S;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT___S_T_6;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT___T_13;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT___T_16;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT___T_18;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT___T_26;
        QData/*63:0*/ CoreTop__DOT__MEM__DOT___addr_temp_T_1;
        QData/*63:0*/ CoreTop__DOT__MEM__DOT___GEN_16;
        QData/*63:0*/ CoreTop__DOT__MEM__DOT__addr_temp;
        QData/*63:0*/ CoreTop__DOT__MEM__DOT___wdata_temp_T_21;
    };
    struct {
        QData/*63:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data_io_write_bus_addr;
        QData/*63:0*/ CoreTop__DOT__ICACHE__DOT__mem_addr_reg;
        QData/*63:0*/ CoreTop__DOT__ICACHE__DOT___GEN_25;
        QData/*63:0*/ CoreTop__DOT__ICACHE__DOT__hit_data;
        QData/*63:0*/ CoreTop__DOT__ICACHE__DOT__mem_data;
        QData/*52:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data;
        QData/*52:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_in_rdata_rep_bits_rdata;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_addr;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_37;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_63;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask;
        QData/*52:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data;
        QData/*52:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data;
        VlUnpacked<QData/*63:0*/, 32> CoreTop__DOT__rf;
        VlUnpacked<QData/*63:0*/, 6> CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr;
        VlUnpacked<QData/*63:0*/, 32> CoreTop__DOT__DIP__DOT__rf;
        VlUnpacked<IData/*31:0*/, 7> CoreTop__DOT__DIP__DOT__IN;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__ICACHE__DOT__lru;
        VlUnpacked<VlWide<16>/*511:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0;
        VlUnpacked<VlWide<16>/*511:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1;
        VlUnpacked<QData/*52:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0;
        VlUnpacked<QData/*52:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1;
        VlUnpacked<VlWide<16>/*511:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0;
        VlUnpacked<VlWide<16>/*511:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1;
        VlUnpacked<QData/*52:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0;
        VlUnpacked<QData/*52:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VCoreTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCoreTop___024root(VCoreTop__Syms* symsp, const char* name);
    ~VCoreTop___024root();
    VL_UNCOPYABLE(VCoreTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
