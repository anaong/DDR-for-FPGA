// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_ddr.h for the primary calling header

#ifndef VERILATED_VTOP_DDR___024ROOT_H_
#define VERILATED_VTOP_DDR___024ROOT_H_  // guard

#include "verilated.h"

class Vtop_ddr__Syms;

class Vtop_ddr___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_pix,0,0);
        VL_IN8(sim_rst,0,0);
        VL_IN8(btn_fire,0,0);
        VL_IN8(btn_up,0,0);
        VL_IN8(btn_dn,0,0);
        VL_OUT8(sdl_de,0,0);
        VL_OUT8(sdl_r,7,0);
        VL_OUT8(sdl_g,7,0);
        VL_OUT8(sdl_b,7,0);
        CData/*0:0*/ top_pong__DOT__de;
        CData/*0:0*/ top_pong__DOT__frame;
        CData/*3:0*/ top_pong__DOT__paint_r;
        CData/*3:0*/ top_pong__DOT__paint_g;
        CData/*3:0*/ top_pong__DOT__paint_b;
        CData/*0:0*/ top_pong__DOT__display_inst__DOT__rst_pix;
        CData/*6:0*/ top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_r;
        CData/*6:0*/ top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_n;
        CData/*0:0*/ top_pong__DOT__deb_fire__DOT__out;
        CData/*0:0*/ top_pong__DOT__deb_fire__DOT__sync_0;
        CData/*0:0*/ top_pong__DOT__deb_fire__DOT__sync_1;
        CData/*0:0*/ top_pong__DOT__deb_fire__DOT__idle;
        CData/*0:0*/ top_pong__DOT__deb_fire__DOT__max;
        CData/*0:0*/ top_pong__DOT__deb_up__DOT__out;
        CData/*0:0*/ top_pong__DOT__deb_up__DOT__sync_0;
        CData/*0:0*/ top_pong__DOT__deb_up__DOT__sync_1;
        CData/*0:0*/ top_pong__DOT__deb_up__DOT__idle;
        CData/*0:0*/ top_pong__DOT__deb_up__DOT__max;
        CData/*0:0*/ top_pong__DOT__deb_dn__DOT__out;
        CData/*0:0*/ top_pong__DOT__deb_dn__DOT__sync_0;
        CData/*0:0*/ top_pong__DOT__deb_dn__DOT__sync_1;
        CData/*0:0*/ top_pong__DOT__deb_dn__DOT__idle;
        CData/*0:0*/ top_pong__DOT__deb_dn__DOT__max;
        CData/*0:0*/ top_pong__DOT__deb_rst__DOT__out;
        CData/*0:0*/ top_pong__DOT__deb_rst__DOT__sync_0;
        CData/*0:0*/ top_pong__DOT__deb_rst__DOT__sync_1;
        CData/*0:0*/ top_pong__DOT__deb_rst__DOT__idle;
        CData/*0:0*/ top_pong__DOT__deb_rst__DOT__max;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r1;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n1;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r2;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n2;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r3;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n3;
        CData/*2:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__btn_l;
        CData/*2:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__count_up_l;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_r;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_n;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r1;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n1;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r2;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n2;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r3;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n3;
        CData/*2:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__btn_l;
        CData/*2:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__count_up_l;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_r;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_n;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r1;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n1;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r2;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n2;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r3;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n3;
        CData/*2:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__btn_l;
    };
    struct {
        CData/*2:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__count_up_l;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_r;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_n;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r1;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n1;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r2;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n2;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r3;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n3;
        CData/*2:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__btn_l;
        CData/*2:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__count_up_l;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_r;
        CData/*1:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_n;
        CData/*0:0*/ __Vtrigrprev__TOP__clk_pix;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(sdl_sx,9,0);
        VL_OUT16(sdl_sy,9,0);
        SData/*9:0*/ top_pong__DOT__sx;
        SData/*9:0*/ top_pong__DOT__sy;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l;
        SData/*9:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l;
        IData/*17:0*/ top_pong__DOT__deb_fire__DOT__cnt;
        IData/*17:0*/ top_pong__DOT__deb_up__DOT__cnt;
        IData/*17:0*/ top_pong__DOT__deb_dn__DOT__cnt;
        IData/*17:0*/ top_pong__DOT__deb_rst__DOT__cnt;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*35:0*/ top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_quarter_l;
        QData/*35:0*/ top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_eigth_l;
        QData/*35:0*/ top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_sixteenth_l;
        VlUnpacked<CData/*7:0*/, 128> top_pong__DOT__chart_inst__DOT__ram_1r1w_sync_inst__DOT__mem_l;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_ddr__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_ddr___024root(Vtop_ddr__Syms* symsp, const char* name);
    ~Vtop_ddr___024root();
    VL_UNCOPYABLE(Vtop_ddr___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
