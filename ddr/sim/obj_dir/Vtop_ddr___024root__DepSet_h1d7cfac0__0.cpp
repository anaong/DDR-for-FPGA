// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ddr.h for the primary calling header

#include "verilated.h"

#include "Vtop_ddr___024root.h"

void Vtop_ddr___024root___eval_act(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*1:0*/, 512> Vtop_ddr__ConstPool__TABLE_hc7f9dc8c_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vtop_ddr__ConstPool__TABLE_h2516eafb_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vtop_ddr__ConstPool__TABLE_h3cd8f8e4_0;

VL_INLINE_OPT void Vtop_ddr___024root___nba_sequent__TOP__0(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top_pong__DOT__sig_fire;
    top_pong__DOT__sig_fire = 0;
    CData/*0:0*/ top_pong__DOT__sig_up;
    top_pong__DOT__sig_up = 0;
    CData/*0:0*/ top_pong__DOT__sig_dn;
    top_pong__DOT__sig_dn = 0;
    CData/*0:0*/ top_pong__DOT__sig_rst;
    top_pong__DOT__sig_rst = 0;
    CData/*2:0*/ top_pong__DOT__arrow_left_l;
    top_pong__DOT__arrow_left_l = 0;
    CData/*2:0*/ top_pong__DOT__arrow_up_l;
    top_pong__DOT__arrow_up_l = 0;
    CData/*2:0*/ top_pong__DOT__arrow_down_l;
    top_pong__DOT__arrow_down_l = 0;
    CData/*2:0*/ top_pong__DOT__arrow_right_l;
    top_pong__DOT__arrow_right_l = 0;
    CData/*7:0*/ top_pong__DOT__chart_inst__DOT____Vcellout__ram_1r1w_sync_inst__rd_data_o;
    top_pong__DOT__chart_inst__DOT____Vcellout__ram_1r1w_sync_inst__rd_data_o = 0;
    CData/*0:0*/ top_pong__DOT__arrow_logic_inst__DOT__launch_left_w;
    top_pong__DOT__arrow_logic_inst__DOT__launch_left_w = 0;
    CData/*0:0*/ top_pong__DOT__arrow_logic_inst__DOT__launch_up_w;
    top_pong__DOT__arrow_logic_inst__DOT__launch_up_w = 0;
    CData/*0:0*/ top_pong__DOT__arrow_logic_inst__DOT__launch_down_w;
    top_pong__DOT__arrow_logic_inst__DOT__launch_down_w = 0;
    CData/*0:0*/ top_pong__DOT__arrow_logic_inst__DOT__launch_right_w;
    top_pong__DOT__arrow_logic_inst__DOT__launch_right_w = 0;
    IData/*29:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_left_y_l;
    top_pong__DOT__arrow_logic_inst__DOT__arrow_left_y_l = 0;
    IData/*29:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_up_y_l;
    top_pong__DOT__arrow_logic_inst__DOT__arrow_up_y_l = 0;
    IData/*29:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_down_y_l;
    top_pong__DOT__arrow_logic_inst__DOT__arrow_down_y_l = 0;
    IData/*29:0*/ top_pong__DOT__arrow_logic_inst__DOT__arrow_right_y_l;
    top_pong__DOT__arrow_logic_inst__DOT__arrow_right_y_l = 0;
    CData/*0:0*/ top_pong__DOT__arrow_logic_inst__DOT____VdfgTmp_hfe3e273b__0;
    top_pong__DOT__arrow_logic_inst__DOT____VdfgTmp_hfe3e273b__0 = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*8:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*8:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*8:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*8:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    SData/*8:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    SData/*8:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    SData/*8:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    SData/*8:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    SData/*8:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__sy;
    __Vdly__top_pong__DOT__sy = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__sx;
    __Vdly__top_pong__DOT__sx = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l = 0;
    SData/*9:0*/ __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l = 0;
    // Body
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l;
    __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l;
    __Vdly__top_pong__DOT__sx = vlSelf->top_pong__DOT__sx;
    __Vdly__top_pong__DOT__sy = vlSelf->top_pong__DOT__sy;
    vlSelf->top_pong__DOT__deb_rst__DOT__cnt = ((IData)(vlSelf->top_pong__DOT__deb_rst__DOT__idle)
                                                 ? 0U
                                                 : 
                                                (0x3ffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->top_pong__DOT__deb_rst__DOT__cnt)));
    vlSelf->top_pong__DOT__deb_dn__DOT__cnt = ((IData)(vlSelf->top_pong__DOT__deb_dn__DOT__idle)
                                                ? 0U
                                                : (0x3ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top_pong__DOT__deb_dn__DOT__cnt)));
    vlSelf->top_pong__DOT__deb_up__DOT__cnt = ((IData)(vlSelf->top_pong__DOT__deb_up__DOT__idle)
                                                ? 0U
                                                : (0x3ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top_pong__DOT__deb_up__DOT__cnt)));
    vlSelf->top_pong__DOT__deb_fire__DOT__cnt = ((IData)(vlSelf->top_pong__DOT__deb_fire__DOT__idle)
                                                  ? 0U
                                                  : 
                                                 (0x3ffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->top_pong__DOT__deb_fire__DOT__cnt)));
    if ((1U & (~ (IData)(vlSelf->top_pong__DOT__deb_rst__DOT__idle)))) {
        if (vlSelf->top_pong__DOT__deb_rst__DOT__max) {
            vlSelf->top_pong__DOT__deb_rst__DOT__out 
                = (1U & (~ (IData)(vlSelf->top_pong__DOT__deb_rst__DOT__out)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->top_pong__DOT__deb_dn__DOT__idle)))) {
        if (vlSelf->top_pong__DOT__deb_dn__DOT__max) {
            vlSelf->top_pong__DOT__deb_dn__DOT__out 
                = (1U & (~ (IData)(vlSelf->top_pong__DOT__deb_dn__DOT__out)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->top_pong__DOT__deb_up__DOT__idle)))) {
        if (vlSelf->top_pong__DOT__deb_up__DOT__max) {
            vlSelf->top_pong__DOT__deb_up__DOT__out 
                = (1U & (~ (IData)(vlSelf->top_pong__DOT__deb_up__DOT__out)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->top_pong__DOT__deb_fire__DOT__idle)))) {
        if (vlSelf->top_pong__DOT__deb_fire__DOT__max) {
            vlSelf->top_pong__DOT__deb_fire__DOT__out 
                = (1U & (~ (IData)(vlSelf->top_pong__DOT__deb_fire__DOT__out)));
        }
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r1)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r1)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l 
            = ((1U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__count_up_l))
                ? (0x3ffU & ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l) 
                             - (IData)(0xaU))) : 0x1e0U);
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r2)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r2)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l 
            = (0x3ffU & ((2U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__count_up_l))
                          ? ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l) 
                             - (IData)(0xaU)) : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l)));
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r3)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r3)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l 
            = (0x3ffU & ((4U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__count_up_l))
                          ? ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l) 
                             - (IData)(0xaU)) : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l)));
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r1)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r1)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l 
            = ((1U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__count_up_l))
                ? (0x3ffU & ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l) 
                             - (IData)(0xaU))) : 0x1e0U);
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r2)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r2)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l 
            = (0x3ffU & ((2U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__count_up_l))
                          ? ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l) 
                             - (IData)(0xaU)) : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l)));
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r3)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r3)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l 
            = (0x3ffU & ((4U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__count_up_l))
                          ? ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l) 
                             - (IData)(0xaU)) : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l)));
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r1)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r1)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l 
            = ((1U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__count_up_l))
                ? (0x3ffU & ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l) 
                             - (IData)(0xaU))) : 0x1e0U);
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r2)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r2)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l 
            = (0x3ffU & ((2U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__count_up_l))
                          ? ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l) 
                             - (IData)(0xaU)) : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l)));
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r3)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r3)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l 
            = (0x3ffU & ((4U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__count_up_l))
                          ? ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l) 
                             - (IData)(0xaU)) : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l)));
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r1)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r1)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l 
            = ((1U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__count_up_l))
                ? (0x3ffU & ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l) 
                             - (IData)(0xaU))) : 0x1e0U);
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r2)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r2)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l 
            = (0x3ffU & ((2U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__count_up_l))
                          ? ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l) 
                             - (IData)(0xaU)) : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l)));
    }
    if ((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l)) 
          | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l))) 
         | (0U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r3)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l = 0x1e0U;
    } else if (((IData)(vlSelf->top_pong__DOT__frame) 
                & (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r3)))) {
        __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l 
            = (0x3ffU & ((4U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__count_up_l))
                          ? ((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l) 
                             - (IData)(0xaU)) : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l)));
    }
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_sixteenth_l 
        = ((0xc042cULL == vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_sixteenth_l)
            ? 1ULL : (0xfffffffffULL & (1ULL + vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_sixteenth_l)));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_quarter_l 
        = ((0x602160ULL == vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_quarter_l)
            ? 1ULL : (0xfffffffffULL & (1ULL + vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_quarter_l)));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_eigth_l 
        = ((0x3010b0ULL == vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_eigth_l)
            ? 1ULL : (0xfffffffffULL & (1ULL + vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_eigth_l)));
    if ((0x31fU == (IData)(vlSelf->top_pong__DOT__sx))) {
        __Vdly__top_pong__DOT__sy = ((0x20cU == (IData)(vlSelf->top_pong__DOT__sy))
                                      ? 0U : (0x3ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top_pong__DOT__sy))));
        __Vdly__top_pong__DOT__sx = 0U;
    } else {
        __Vdly__top_pong__DOT__sx = (0x3ffU & ((IData)(1U) 
                                               + (IData)(vlSelf->top_pong__DOT__sx)));
    }
    if (vlSelf->top_pong__DOT__display_inst__DOT__rst_pix) {
        __Vdly__top_pong__DOT__sy = 0U;
        __Vdly__top_pong__DOT__sx = 0U;
    }
    vlSelf->sdl_de = vlSelf->top_pong__DOT__de;
    vlSelf->sdl_b = (0xffU & ((((IData)(vlSelf->top_pong__DOT__de)
                                 ? (IData)(vlSelf->top_pong__DOT__paint_b)
                                 : 0U) << 4U) | ((IData)(vlSelf->top_pong__DOT__de)
                                                  ? (IData)(vlSelf->top_pong__DOT__paint_b)
                                                  : 0U)));
    vlSelf->sdl_r = (0xffU & ((((IData)(vlSelf->top_pong__DOT__de)
                                 ? (IData)(vlSelf->top_pong__DOT__paint_r)
                                 : 0U) << 4U) | ((IData)(vlSelf->top_pong__DOT__de)
                                                  ? (IData)(vlSelf->top_pong__DOT__paint_r)
                                                  : 0U)));
    vlSelf->sdl_g = (0xffU & ((((IData)(vlSelf->top_pong__DOT__de)
                                 ? (IData)(vlSelf->top_pong__DOT__paint_g)
                                 : 0U) << 4U) | ((IData)(vlSelf->top_pong__DOT__de)
                                                  ? (IData)(vlSelf->top_pong__DOT__paint_g)
                                                  : 0U)));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_r 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_n;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_r 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_n;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_r 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_n;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_r 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_n;
    vlSelf->sdl_sy = vlSelf->top_pong__DOT__sy;
    vlSelf->sdl_sx = vlSelf->top_pong__DOT__sx;
    vlSelf->top_pong__DOT__deb_rst__DOT__sync_1 = vlSelf->top_pong__DOT__deb_rst__DOT__sync_0;
    vlSelf->top_pong__DOT__deb_dn__DOT__sync_1 = vlSelf->top_pong__DOT__deb_dn__DOT__sync_0;
    vlSelf->top_pong__DOT__deb_up__DOT__sync_1 = vlSelf->top_pong__DOT__deb_up__DOT__sync_0;
    vlSelf->top_pong__DOT__deb_fire__DOT__sync_1 = vlSelf->top_pong__DOT__deb_fire__DOT__sync_0;
    vlSelf->top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_r 
        = vlSelf->top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_n;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l 
        = __Vdly__top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l;
    vlSelf->top_pong__DOT__sy = __Vdly__top_pong__DOT__sy;
    vlSelf->top_pong__DOT__sx = __Vdly__top_pong__DOT__sx;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r1 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n1;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r2 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n2;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r3 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n3;
    top_pong__DOT__arrow_logic_inst__DOT__arrow_right_y_l 
        = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l) 
            << 0x14U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l) 
                          << 0xaU) | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l)));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r1 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n1;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r2 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n2;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r3 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n3;
    top_pong__DOT__arrow_logic_inst__DOT__arrow_down_y_l 
        = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l) 
            << 0x14U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l) 
                          << 0xaU) | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l)));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r1 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n1;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r2 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n2;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r3 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n3;
    top_pong__DOT__arrow_logic_inst__DOT__arrow_up_y_l 
        = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l) 
            << 0x14U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l) 
                          << 0xaU) | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l)));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r1 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n1;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r2 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n2;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r3 
        = vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n3;
    top_pong__DOT__arrow_logic_inst__DOT__arrow_left_y_l 
        = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l) 
            << 0x14U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l) 
                          << 0xaU) | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l)));
    vlSelf->top_pong__DOT__de = ((0x27fU >= (IData)(vlSelf->top_pong__DOT__sx)) 
                                 & (0x1dfU >= (IData)(vlSelf->top_pong__DOT__sy)));
    vlSelf->top_pong__DOT__frame = ((0x1e0U == (IData)(vlSelf->top_pong__DOT__sy)) 
                                    & (0U == (IData)(vlSelf->top_pong__DOT__sx)));
    vlSelf->top_pong__DOT__deb_rst__DOT__sync_0 = vlSelf->sim_rst;
    vlSelf->top_pong__DOT__deb_rst__DOT__idle = ((IData)(vlSelf->top_pong__DOT__deb_rst__DOT__out) 
                                                 == (IData)(vlSelf->top_pong__DOT__deb_rst__DOT__sync_1));
    vlSelf->top_pong__DOT__deb_rst__DOT__max = (0x3ffffU 
                                                == vlSelf->top_pong__DOT__deb_rst__DOT__cnt);
    top_pong__DOT__sig_rst = (((~ (IData)(vlSelf->top_pong__DOT__deb_rst__DOT__idle)) 
                               & (IData)(vlSelf->top_pong__DOT__deb_rst__DOT__max)) 
                              & (IData)(vlSelf->top_pong__DOT__deb_rst__DOT__out));
    vlSelf->top_pong__DOT__deb_dn__DOT__sync_0 = vlSelf->btn_dn;
    vlSelf->top_pong__DOT__deb_dn__DOT__idle = ((IData)(vlSelf->top_pong__DOT__deb_dn__DOT__out) 
                                                == (IData)(vlSelf->top_pong__DOT__deb_dn__DOT__sync_1));
    vlSelf->top_pong__DOT__deb_dn__DOT__max = (0x3ffffU 
                                               == vlSelf->top_pong__DOT__deb_dn__DOT__cnt);
    top_pong__DOT__sig_dn = (((~ (IData)(vlSelf->top_pong__DOT__deb_dn__DOT__idle)) 
                              & (IData)(vlSelf->top_pong__DOT__deb_dn__DOT__max)) 
                             & (IData)(vlSelf->top_pong__DOT__deb_dn__DOT__out));
    vlSelf->top_pong__DOT__deb_up__DOT__sync_0 = vlSelf->btn_up;
    vlSelf->top_pong__DOT__deb_up__DOT__idle = ((IData)(vlSelf->top_pong__DOT__deb_up__DOT__out) 
                                                == (IData)(vlSelf->top_pong__DOT__deb_up__DOT__sync_1));
    vlSelf->top_pong__DOT__deb_up__DOT__max = (0x3ffffU 
                                               == vlSelf->top_pong__DOT__deb_up__DOT__cnt);
    top_pong__DOT__sig_up = (((~ (IData)(vlSelf->top_pong__DOT__deb_up__DOT__idle)) 
                              & (IData)(vlSelf->top_pong__DOT__deb_up__DOT__max)) 
                             & (IData)(vlSelf->top_pong__DOT__deb_up__DOT__out));
    vlSelf->top_pong__DOT__deb_fire__DOT__sync_0 = vlSelf->btn_fire;
    vlSelf->top_pong__DOT__deb_fire__DOT__idle = ((IData)(vlSelf->top_pong__DOT__deb_fire__DOT__out) 
                                                  == (IData)(vlSelf->top_pong__DOT__deb_fire__DOT__sync_1));
    vlSelf->top_pong__DOT__deb_fire__DOT__max = (0x3ffffU 
                                                 == vlSelf->top_pong__DOT__deb_fire__DOT__cnt);
    top_pong__DOT__sig_fire = (((~ (IData)(vlSelf->top_pong__DOT__deb_fire__DOT__idle)) 
                                & (IData)(vlSelf->top_pong__DOT__deb_fire__DOT__max)) 
                               & (IData)(vlSelf->top_pong__DOT__deb_fire__DOT__out));
    top_pong__DOT__chart_inst__DOT____Vcellout__ram_1r1w_sync_inst__rd_data_o 
        = vlSelf->top_pong__DOT__chart_inst__DOT__ram_1r1w_sync_inst__DOT__mem_l
        [vlSelf->top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_r];
    top_pong__DOT__arrow_right_l = ((((((0x181U <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                        & (0x1b3U >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                       & ((IData)(vlSelf->top_pong__DOT__sy) 
                                          >= (0x3ffU 
                                              & (top_pong__DOT__arrow_logic_inst__DOT__arrow_right_y_l 
                                                 >> 0x14U)))) 
                                      & ((IData)(vlSelf->top_pong__DOT__sy) 
                                         <= ((IData)(0x32U) 
                                             + (0x3ffU 
                                                & (top_pong__DOT__arrow_logic_inst__DOT__arrow_right_y_l 
                                                   >> 0x14U))))) 
                                     << 2U) | (((((
                                                   (0x181U 
                                                    <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                                   & (0x1b3U 
                                                      >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                                  & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                     >= 
                                                     (0x3ffU 
                                                      & (top_pong__DOT__arrow_logic_inst__DOT__arrow_right_y_l 
                                                         >> 0xaU)))) 
                                                 & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                    <= 
                                                    ((IData)(0x32U) 
                                                     + 
                                                     (0x3ffU 
                                                      & (top_pong__DOT__arrow_logic_inst__DOT__arrow_right_y_l 
                                                         >> 0xaU))))) 
                                                << 1U) 
                                               | ((((0x181U 
                                                     <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                                    & (0x1b3U 
                                                       >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                                   & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                      >= 
                                                      (0x3ffU 
                                                       & top_pong__DOT__arrow_logic_inst__DOT__arrow_right_y_l))) 
                                                  & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                     <= 
                                                     ((IData)(0x32U) 
                                                      + 
                                                      (0x3ffU 
                                                       & top_pong__DOT__arrow_logic_inst__DOT__arrow_right_y_l))))));
    top_pong__DOT__arrow_down_l = ((((((0x145U <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                       & (0x177U >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                      & ((IData)(vlSelf->top_pong__DOT__sy) 
                                         >= (0x3ffU 
                                             & (top_pong__DOT__arrow_logic_inst__DOT__arrow_down_y_l 
                                                >> 0x14U)))) 
                                     & ((IData)(vlSelf->top_pong__DOT__sy) 
                                        <= ((IData)(0x32U) 
                                            + (0x3ffU 
                                               & (top_pong__DOT__arrow_logic_inst__DOT__arrow_down_y_l 
                                                  >> 0x14U))))) 
                                    << 2U) | ((((((0x145U 
                                                   <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                                  & (0x177U 
                                                     >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                                 & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                    >= 
                                                    (0x3ffU 
                                                     & (top_pong__DOT__arrow_logic_inst__DOT__arrow_down_y_l 
                                                        >> 0xaU)))) 
                                                & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                   <= 
                                                   ((IData)(0x32U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (top_pong__DOT__arrow_logic_inst__DOT__arrow_down_y_l 
                                                        >> 0xaU))))) 
                                               << 1U) 
                                              | ((((0x145U 
                                                    <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                                   & (0x177U 
                                                      >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                                  & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                     >= 
                                                     (0x3ffU 
                                                      & top_pong__DOT__arrow_logic_inst__DOT__arrow_down_y_l))) 
                                                 & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                    <= 
                                                    ((IData)(0x32U) 
                                                     + 
                                                     (0x3ffU 
                                                      & top_pong__DOT__arrow_logic_inst__DOT__arrow_down_y_l))))));
    top_pong__DOT__arrow_up_l = ((((((0x109U <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                     & (0x13bU >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                    & ((IData)(vlSelf->top_pong__DOT__sy) 
                                       >= (0x3ffU & 
                                           (top_pong__DOT__arrow_logic_inst__DOT__arrow_up_y_l 
                                            >> 0x14U)))) 
                                   & ((IData)(vlSelf->top_pong__DOT__sy) 
                                      <= ((IData)(0x32U) 
                                          + (0x3ffU 
                                             & (top_pong__DOT__arrow_logic_inst__DOT__arrow_up_y_l 
                                                >> 0x14U))))) 
                                  << 2U) | ((((((0x109U 
                                                 <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                                & (0x13bU 
                                                   >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                               & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                  >= 
                                                  (0x3ffU 
                                                   & (top_pong__DOT__arrow_logic_inst__DOT__arrow_up_y_l 
                                                      >> 0xaU)))) 
                                              & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                 <= 
                                                 ((IData)(0x32U) 
                                                  + 
                                                  (0x3ffU 
                                                   & (top_pong__DOT__arrow_logic_inst__DOT__arrow_up_y_l 
                                                      >> 0xaU))))) 
                                             << 1U) 
                                            | ((((0x109U 
                                                  <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                                 & (0x13bU 
                                                    >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                                & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                   >= 
                                                   (0x3ffU 
                                                    & top_pong__DOT__arrow_logic_inst__DOT__arrow_up_y_l))) 
                                               & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                  <= 
                                                  ((IData)(0x32U) 
                                                   + 
                                                   (0x3ffU 
                                                    & top_pong__DOT__arrow_logic_inst__DOT__arrow_up_y_l))))));
    top_pong__DOT__arrow_left_l = ((((((0xcdU <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                       & (0xffU >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                      & ((IData)(vlSelf->top_pong__DOT__sy) 
                                         >= (0x3ffU 
                                             & (top_pong__DOT__arrow_logic_inst__DOT__arrow_left_y_l 
                                                >> 0x14U)))) 
                                     & ((IData)(vlSelf->top_pong__DOT__sy) 
                                        <= ((IData)(0x32U) 
                                            + (0x3ffU 
                                               & (top_pong__DOT__arrow_logic_inst__DOT__arrow_left_y_l 
                                                  >> 0x14U))))) 
                                    << 2U) | ((((((0xcdU 
                                                   <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                                  & (0xffU 
                                                     >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                                 & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                    >= 
                                                    (0x3ffU 
                                                     & (top_pong__DOT__arrow_logic_inst__DOT__arrow_left_y_l 
                                                        >> 0xaU)))) 
                                                & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                   <= 
                                                   ((IData)(0x32U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (top_pong__DOT__arrow_logic_inst__DOT__arrow_left_y_l 
                                                        >> 0xaU))))) 
                                               << 1U) 
                                              | ((((0xcdU 
                                                    <= (IData)(vlSelf->top_pong__DOT__sx)) 
                                                   & (0xffU 
                                                      >= (IData)(vlSelf->top_pong__DOT__sx))) 
                                                  & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                     >= 
                                                     (0x3ffU 
                                                      & top_pong__DOT__arrow_logic_inst__DOT__arrow_left_y_l))) 
                                                 & ((IData)(vlSelf->top_pong__DOT__sy) 
                                                    <= 
                                                    ((IData)(0x32U) 
                                                     + 
                                                     (0x3ffU 
                                                      & top_pong__DOT__arrow_logic_inst__DOT__arrow_left_y_l))))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__btn_l 
        = ((4U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__btn_l)) 
           | ((((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l)) 
                & (IData)(top_pong__DOT__sig_rst)) 
               << 1U) | ((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l)) 
                         & (IData)(top_pong__DOT__sig_rst))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__btn_l 
        = ((3U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__btn_l)) 
           | (((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l)) 
               & (IData)(top_pong__DOT__sig_rst)) << 2U));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__btn_l 
        = ((4U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__btn_l)) 
           | ((((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l)) 
                & (IData)(top_pong__DOT__sig_dn)) << 1U) 
              | ((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l)) 
                 & (IData)(top_pong__DOT__sig_dn))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__btn_l 
        = ((3U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__btn_l)) 
           | (((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l)) 
               & (IData)(top_pong__DOT__sig_dn)) << 2U));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__btn_l 
        = ((4U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__btn_l)) 
           | ((((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l)) 
                & (IData)(top_pong__DOT__sig_up)) << 1U) 
              | ((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l)) 
                 & (IData)(top_pong__DOT__sig_up))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__btn_l 
        = ((3U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__btn_l)) 
           | (((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l)) 
               & (IData)(top_pong__DOT__sig_up)) << 2U));
    vlSelf->top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_n 
        = (0x7fU & ((IData)(top_pong__DOT__sig_fire)
                     ? ((IData)(1U) + (IData)(vlSelf->top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_r))
                     : (IData)(vlSelf->top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_r)));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__btn_l 
        = ((4U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__btn_l)) 
           | ((((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l)) 
                & (IData)(top_pong__DOT__sig_fire)) 
               << 1U) | ((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l)) 
                         & (IData)(top_pong__DOT__sig_fire))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__btn_l 
        = ((3U & (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__btn_l)) 
           | (((0x7dU >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l)) 
               & (IData)(top_pong__DOT__sig_fire)) 
              << 2U));
    top_pong__DOT__arrow_logic_inst__DOT____VdfgTmp_hfe3e273b__0 
        = (((0x602160ULL == vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_quarter_l) 
            & ((IData)(top_pong__DOT__chart_inst__DOT____Vcellout__ram_1r1w_sync_inst__rd_data_o) 
               >> 2U)) | (((0x3010b0ULL == vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_eigth_l) 
                           & ((IData)(top_pong__DOT__chart_inst__DOT____Vcellout__ram_1r1w_sync_inst__rd_data_o) 
                              >> 3U)) | ((0xc042cULL 
                                          == vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_sixteenth_l) 
                                         & (0xfU == 
                                            (0xfU & (IData)(top_pong__DOT__chart_inst__DOT____Vcellout__ram_1r1w_sync_inst__rd_data_o))))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__count_up_l 
        = (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r3)) 
            << 2U) | (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r2)) 
                       << 1U) | (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r1))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__count_up_l 
        = (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r3)) 
            << 2U) | (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r2)) 
                       << 1U) | (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r1))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__count_up_l 
        = (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r3)) 
            << 2U) | (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r2)) 
                       << 1U) | (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r1))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__count_up_l 
        = (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r3)) 
            << 2U) | (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r2)) 
                       << 1U) | (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r1))));
    if ((4U & (IData)(top_pong__DOT__arrow_left_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else if ((2U & (IData)(top_pong__DOT__arrow_left_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else if ((1U & (IData)(top_pong__DOT__arrow_left_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else if ((4U & (IData)(top_pong__DOT__arrow_up_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else if ((2U & (IData)(top_pong__DOT__arrow_up_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else if ((1U & (IData)(top_pong__DOT__arrow_up_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else if ((4U & (IData)(top_pong__DOT__arrow_down_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else if ((2U & (IData)(top_pong__DOT__arrow_down_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else if ((1U & (IData)(top_pong__DOT__arrow_down_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else if ((4U & (IData)(top_pong__DOT__arrow_right_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else if ((2U & (IData)(top_pong__DOT__arrow_right_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else if ((1U & (IData)(top_pong__DOT__arrow_right_l))) {
        vlSelf->top_pong__DOT__paint_b = 0xfU;
        vlSelf->top_pong__DOT__paint_r = 0xfU;
        vlSelf->top_pong__DOT__paint_g = 0xfU;
    } else {
        vlSelf->top_pong__DOT__paint_b = 0xeU;
        vlSelf->top_pong__DOT__paint_r = 4U;
        vlSelf->top_pong__DOT__paint_g = 4U;
    }
    top_pong__DOT__arrow_logic_inst__DOT__launch_left_w 
        = (((IData)(top_pong__DOT__chart_inst__DOT____Vcellout__ram_1r1w_sync_inst__rd_data_o) 
            >> 7U) & (IData)(top_pong__DOT__arrow_logic_inst__DOT____VdfgTmp_hfe3e273b__0));
    top_pong__DOT__arrow_logic_inst__DOT__launch_up_w 
        = (((IData)(top_pong__DOT__chart_inst__DOT____Vcellout__ram_1r1w_sync_inst__rd_data_o) 
            >> 6U) & (IData)(top_pong__DOT__arrow_logic_inst__DOT____VdfgTmp_hfe3e273b__0));
    top_pong__DOT__arrow_logic_inst__DOT__launch_down_w 
        = (((IData)(top_pong__DOT__chart_inst__DOT____Vcellout__ram_1r1w_sync_inst__rd_data_o) 
            >> 5U) & (IData)(top_pong__DOT__arrow_logic_inst__DOT____VdfgTmp_hfe3e273b__0));
    top_pong__DOT__arrow_logic_inst__DOT__launch_right_w 
        = (((IData)(top_pong__DOT__chart_inst__DOT____Vcellout__ram_1r1w_sync_inst__rd_data_o) 
            >> 4U) & (IData)(top_pong__DOT__arrow_logic_inst__DOT____VdfgTmp_hfe3e273b__0));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_n 
        = (3U & ((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_left_w)
                  ? ((IData)(1U) + (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_r))
                  : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_r)));
    __Vtableidx1 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_r) 
                     << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l)) 
                                  | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l))) 
                                 | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r1))) 
                                << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__btn_l) 
                                           << 3U) | 
                                          (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_left_w) 
                                            << 2U) 
                                           | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r1)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n1 
        = Vtop_ddr__ConstPool__TABLE_hc7f9dc8c_0[__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_r) 
                     << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l)) 
                                  | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l))) 
                                 | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r2))) 
                                << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__btn_l) 
                                           << 3U) | 
                                          (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_left_w) 
                                            << 2U) 
                                           | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r2)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n2 
        = Vtop_ddr__ConstPool__TABLE_h2516eafb_0[__Vtableidx2];
    __Vtableidx3 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_r) 
                     << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l)) 
                                  | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l))) 
                                 | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r3))) 
                                << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__btn_l) 
                                           << 3U) | 
                                          (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_left_w) 
                                            << 2U) 
                                           | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r3)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n3 
        = Vtop_ddr__ConstPool__TABLE_h3cd8f8e4_0[__Vtableidx3];
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_n 
        = (3U & ((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_up_w)
                  ? ((IData)(1U) + (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_r))
                  : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_r)));
    __Vtableidx4 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_r) 
                     << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l)) 
                                  | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l))) 
                                 | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r1))) 
                                << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__btn_l) 
                                           << 3U) | 
                                          (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_up_w) 
                                            << 2U) 
                                           | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r1)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n1 
        = Vtop_ddr__ConstPool__TABLE_hc7f9dc8c_0[__Vtableidx4];
    __Vtableidx5 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_r) 
                     << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l)) 
                                  | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l))) 
                                 | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r2))) 
                                << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__btn_l) 
                                           << 3U) | 
                                          (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_up_w) 
                                            << 2U) 
                                           | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r2)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n2 
        = Vtop_ddr__ConstPool__TABLE_h2516eafb_0[__Vtableidx5];
    __Vtableidx6 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_r) 
                     << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l)) 
                                  | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l))) 
                                 | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r3))) 
                                << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__btn_l) 
                                           << 3U) | 
                                          (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_up_w) 
                                            << 2U) 
                                           | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r3)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n3 
        = Vtop_ddr__ConstPool__TABLE_h3cd8f8e4_0[__Vtableidx6];
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_n 
        = (3U & ((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_down_w)
                  ? ((IData)(1U) + (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_r))
                  : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_r)));
    __Vtableidx7 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_r) 
                     << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l)) 
                                  | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l))) 
                                 | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r1))) 
                                << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__btn_l) 
                                           << 3U) | 
                                          (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_down_w) 
                                            << 2U) 
                                           | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r1)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n1 
        = Vtop_ddr__ConstPool__TABLE_hc7f9dc8c_0[__Vtableidx7];
    __Vtableidx8 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_r) 
                     << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l)) 
                                  | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l))) 
                                 | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r2))) 
                                << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__btn_l) 
                                           << 3U) | 
                                          (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_down_w) 
                                            << 2U) 
                                           | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r2)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n2 
        = Vtop_ddr__ConstPool__TABLE_h2516eafb_0[__Vtableidx8];
    __Vtableidx9 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_r) 
                     << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l)) 
                                  | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l))) 
                                 | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r3))) 
                                << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__btn_l) 
                                           << 3U) | 
                                          (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_down_w) 
                                            << 2U) 
                                           | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r3)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n3 
        = Vtop_ddr__ConstPool__TABLE_h3cd8f8e4_0[__Vtableidx9];
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_n 
        = (3U & ((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_right_w)
                  ? ((IData)(1U) + (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_r))
                  : (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_r)));
    __Vtableidx10 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_r) 
                      << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l)) 
                                   | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l))) 
                                  | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r1))) 
                                 << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__btn_l) 
                                            << 3U) 
                                           | (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_right_w) 
                                               << 2U) 
                                              | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r1)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n1 
        = Vtop_ddr__ConstPool__TABLE_hc7f9dc8c_0[__Vtableidx10];
    __Vtableidx11 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_r) 
                      << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l)) 
                                   | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l))) 
                                  | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r2))) 
                                 << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__btn_l) 
                                            << 3U) 
                                           | (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_right_w) 
                                               << 2U) 
                                              | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r2)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n2 
        = Vtop_ddr__ConstPool__TABLE_h2516eafb_0[__Vtableidx11];
    __Vtableidx12 = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_r) 
                      << 7U) | (((((0U >= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l)) 
                                   | (0x1e5U <= (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l))) 
                                  | (3U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r3))) 
                                 << 6U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__btn_l) 
                                            << 3U) 
                                           | (((IData)(top_pong__DOT__arrow_logic_inst__DOT__launch_right_w) 
                                               << 2U) 
                                              | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r3)))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n3 
        = Vtop_ddr__ConstPool__TABLE_h3cd8f8e4_0[__Vtableidx12];
}

void Vtop_ddr___024root___eval_nba(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop_ddr___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop_ddr___024root___eval_triggers__act(Vtop_ddr___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ddr___024root___dump_triggers__act(Vtop_ddr___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ddr___024root___dump_triggers__nba(Vtop_ddr___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_ddr___024root___eval(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop_ddr___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop_ddr___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top_ddr.sv", 8, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop_ddr___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop_ddr___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top_ddr.sv", 8, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop_ddr___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop_ddr___024root___eval_debug_assertions(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_pix & 0xfeU))) {
        Verilated::overWidthError("clk_pix");}
    if (VL_UNLIKELY((vlSelf->sim_rst & 0xfeU))) {
        Verilated::overWidthError("sim_rst");}
    if (VL_UNLIKELY((vlSelf->btn_fire & 0xfeU))) {
        Verilated::overWidthError("btn_fire");}
    if (VL_UNLIKELY((vlSelf->btn_up & 0xfeU))) {
        Verilated::overWidthError("btn_up");}
    if (VL_UNLIKELY((vlSelf->btn_dn & 0xfeU))) {
        Verilated::overWidthError("btn_dn");}
}
#endif  // VL_DEBUG
