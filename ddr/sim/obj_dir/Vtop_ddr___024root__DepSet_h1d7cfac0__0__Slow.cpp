// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ddr.h for the primary calling header

#include "verilated.h"

#include "Vtop_ddr___024root.h"

VL_ATTR_COLD void Vtop_ddr___024root___eval_static__TOP(Vtop_ddr___024root* vlSelf);

VL_ATTR_COLD void Vtop_ddr___024root___eval_static(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval_static\n"); );
    // Body
    Vtop_ddr___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop_ddr___024root___eval_static__TOP(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_r = 0U;
    vlSelf->top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_n = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_quarter_l = 1ULL;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_eigth_l = 1ULL;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_sixteenth_l = 1ULL;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__count_up_l = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_r = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_n = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__count_up_l = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_r = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_n = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__count_up_l = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_r = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_n = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__count_up_l = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_r = 0U;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_n = 0U;
}

VL_ATTR_COLD void Vtop_ddr___024root___eval_initial__TOP(Vtop_ddr___024root* vlSelf);

VL_ATTR_COLD void Vtop_ddr___024root___eval_initial(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval_initial\n"); );
    // Body
    Vtop_ddr___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk_pix = vlSelf->clk_pix;
}

VL_ATTR_COLD void Vtop_ddr___024root___eval_initial__TOP(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hfbddf086__0;
    // Body
    __Vtemp_hfbddf086__0[0U] = 0x2e686578U;
    __Vtemp_hfbddf086__0[1U] = 0x68617274U;
    __Vtemp_hfbddf086__0[2U] = 0x63U;
    VL_READMEM_N(true, 8, 128, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hfbddf086__0)
                 ,  &(vlSelf->top_pong__DOT__chart_inst__DOT__ram_1r1w_sync_inst__DOT__mem_l)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop_ddr___024root___eval_final(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop_ddr___024root___eval_triggers__stl(Vtop_ddr___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ddr___024root___dump_triggers__stl(Vtop_ddr___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop_ddr___024root___eval_stl(Vtop_ddr___024root* vlSelf);

VL_ATTR_COLD void Vtop_ddr___024root___eval_settle(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop_ddr___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop_ddr___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top_ddr.sv", 8, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop_ddr___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ddr___024root___dump_triggers__stl(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 512> Vtop_ddr__ConstPool__TABLE_hc7f9dc8c_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vtop_ddr__ConstPool__TABLE_h2516eafb_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vtop_ddr__ConstPool__TABLE_h3cd8f8e4_0;

VL_ATTR_COLD void Vtop_ddr___024root___stl_sequent__TOP__0(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelf->top_pong__DOT__de = ((0x27fU >= (IData)(vlSelf->top_pong__DOT__sx)) 
                                 & (0x1dfU >= (IData)(vlSelf->top_pong__DOT__sy)));
    vlSelf->top_pong__DOT__frame = ((0x1e0U == (IData)(vlSelf->top_pong__DOT__sy)) 
                                    & (0U == (IData)(vlSelf->top_pong__DOT__sx)));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__count_up_l 
        = (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r3)) 
            << 2U) | (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r2)) 
                       << 1U) | (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r1))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__count_up_l 
        = (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r3)) 
            << 2U) | (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r2)) 
                       << 1U) | (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r1))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__count_up_l 
        = (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r3)) 
            << 2U) | (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r2)) 
                       << 1U) | (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r1))));
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__count_up_l 
        = (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r3)) 
            << 2U) | (((2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r2)) 
                       << 1U) | (2U == (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r1))));
    top_pong__DOT__arrow_logic_inst__DOT__arrow_left_y_l 
        = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l) 
            << 0x14U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l) 
                          << 0xaU) | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l)));
    top_pong__DOT__arrow_logic_inst__DOT__arrow_up_y_l 
        = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l) 
            << 0x14U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l) 
                          << 0xaU) | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l)));
    top_pong__DOT__arrow_logic_inst__DOT__arrow_down_y_l 
        = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l) 
            << 0x14U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l) 
                          << 0xaU) | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l)));
    top_pong__DOT__arrow_logic_inst__DOT__arrow_right_y_l 
        = (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l) 
            << 0x14U) | (((IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l) 
                          << 0xaU) | (IData)(vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l)));
    vlSelf->top_pong__DOT__deb_up__DOT__idle = ((IData)(vlSelf->top_pong__DOT__deb_up__DOT__out) 
                                                == (IData)(vlSelf->top_pong__DOT__deb_up__DOT__sync_1));
    vlSelf->top_pong__DOT__deb_up__DOT__max = (0x3ffffU 
                                               == vlSelf->top_pong__DOT__deb_up__DOT__cnt);
    top_pong__DOT__sig_up = (((~ (IData)(vlSelf->top_pong__DOT__deb_up__DOT__idle)) 
                              & (IData)(vlSelf->top_pong__DOT__deb_up__DOT__max)) 
                             & (IData)(vlSelf->top_pong__DOT__deb_up__DOT__out));
    vlSelf->top_pong__DOT__deb_dn__DOT__idle = ((IData)(vlSelf->top_pong__DOT__deb_dn__DOT__out) 
                                                == (IData)(vlSelf->top_pong__DOT__deb_dn__DOT__sync_1));
    vlSelf->top_pong__DOT__deb_dn__DOT__max = (0x3ffffU 
                                               == vlSelf->top_pong__DOT__deb_dn__DOT__cnt);
    top_pong__DOT__sig_dn = (((~ (IData)(vlSelf->top_pong__DOT__deb_dn__DOT__idle)) 
                              & (IData)(vlSelf->top_pong__DOT__deb_dn__DOT__max)) 
                             & (IData)(vlSelf->top_pong__DOT__deb_dn__DOT__out));
    vlSelf->top_pong__DOT__deb_rst__DOT__idle = ((IData)(vlSelf->top_pong__DOT__deb_rst__DOT__out) 
                                                 == (IData)(vlSelf->top_pong__DOT__deb_rst__DOT__sync_1));
    vlSelf->top_pong__DOT__deb_rst__DOT__max = (0x3ffffU 
                                                == vlSelf->top_pong__DOT__deb_rst__DOT__cnt);
    top_pong__DOT__sig_rst = (((~ (IData)(vlSelf->top_pong__DOT__deb_rst__DOT__idle)) 
                               & (IData)(vlSelf->top_pong__DOT__deb_rst__DOT__max)) 
                              & (IData)(vlSelf->top_pong__DOT__deb_rst__DOT__out));
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

VL_ATTR_COLD void Vtop_ddr___024root___eval_stl(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop_ddr___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ddr___024root___dump_triggers__act(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_pix)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ddr___024root___dump_triggers__nba(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_pix)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_ddr___024root___ctor_var_reset(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_pix = 0;
    vlSelf->sim_rst = 0;
    vlSelf->btn_fire = 0;
    vlSelf->btn_up = 0;
    vlSelf->btn_dn = 0;
    vlSelf->sdl_sx = 0;
    vlSelf->sdl_sy = 0;
    vlSelf->sdl_de = 0;
    vlSelf->sdl_r = 0;
    vlSelf->sdl_g = 0;
    vlSelf->sdl_b = 0;
    vlSelf->top_pong__DOT__sx = 0;
    vlSelf->top_pong__DOT__sy = 0;
    vlSelf->top_pong__DOT__de = 0;
    vlSelf->top_pong__DOT__frame = 0;
    vlSelf->top_pong__DOT__paint_r = 0;
    vlSelf->top_pong__DOT__paint_g = 0;
    vlSelf->top_pong__DOT__paint_b = 0;
    vlSelf->top_pong__DOT__display_inst__DOT__rst_pix = 0;
    vlSelf->top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_r = 0;
    vlSelf->top_pong__DOT__chart_inst__DOT__counter_up_chart__DOT__count_n = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->top_pong__DOT__chart_inst__DOT__ram_1r1w_sync_inst__DOT__mem_l[__Vi0] = 0;
    }
    vlSelf->top_pong__DOT__deb_fire__DOT__out = 0;
    vlSelf->top_pong__DOT__deb_fire__DOT__sync_0 = 0;
    vlSelf->top_pong__DOT__deb_fire__DOT__sync_1 = 0;
    vlSelf->top_pong__DOT__deb_fire__DOT__cnt = 0;
    vlSelf->top_pong__DOT__deb_fire__DOT__idle = 0;
    vlSelf->top_pong__DOT__deb_fire__DOT__max = 0;
    vlSelf->top_pong__DOT__deb_up__DOT__out = 0;
    vlSelf->top_pong__DOT__deb_up__DOT__sync_0 = 0;
    vlSelf->top_pong__DOT__deb_up__DOT__sync_1 = 0;
    vlSelf->top_pong__DOT__deb_up__DOT__cnt = 0;
    vlSelf->top_pong__DOT__deb_up__DOT__idle = 0;
    vlSelf->top_pong__DOT__deb_up__DOT__max = 0;
    vlSelf->top_pong__DOT__deb_dn__DOT__out = 0;
    vlSelf->top_pong__DOT__deb_dn__DOT__sync_0 = 0;
    vlSelf->top_pong__DOT__deb_dn__DOT__sync_1 = 0;
    vlSelf->top_pong__DOT__deb_dn__DOT__cnt = 0;
    vlSelf->top_pong__DOT__deb_dn__DOT__idle = 0;
    vlSelf->top_pong__DOT__deb_dn__DOT__max = 0;
    vlSelf->top_pong__DOT__deb_rst__DOT__out = 0;
    vlSelf->top_pong__DOT__deb_rst__DOT__sync_0 = 0;
    vlSelf->top_pong__DOT__deb_rst__DOT__sync_1 = 0;
    vlSelf->top_pong__DOT__deb_rst__DOT__cnt = 0;
    vlSelf->top_pong__DOT__deb_rst__DOT__idle = 0;
    vlSelf->top_pong__DOT__deb_rst__DOT__max = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_quarter_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_eigth_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__timing_inst__DOT__counter_sixteenth_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow1_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow2_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__arrow3_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r1 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n1 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r2 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n2 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_r3 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__state_n3 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__btn_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__count_up_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_r = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_left__DOT__counter_up_inst__DOT__count_n = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow1_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow2_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__arrow3_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r1 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n1 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r2 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n2 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_r3 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__state_n3 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__btn_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__count_up_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_r = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_up__DOT__counter_up_inst__DOT__count_n = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow1_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow2_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__arrow3_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r1 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n1 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r2 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n2 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_r3 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__state_n3 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__btn_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__count_up_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_r = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_down__DOT__counter_up_inst__DOT__count_n = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow1_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow2_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__arrow3_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r1 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n1 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r2 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n2 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_r3 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__state_n3 = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__btn_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__count_up_l = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_r = 0;
    vlSelf->top_pong__DOT__arrow_logic_inst__DOT__arrow_movement_right__DOT__counter_up_inst__DOT__count_n = 0;
    vlSelf->__Vtrigrprev__TOP__clk_pix = 0;
}
