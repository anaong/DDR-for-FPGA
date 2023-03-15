// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->testbench__DOT__reset_done = 0U;
    vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hfbddf086__0;
    // Body
    VL_WRITEF("%Ntestbench.cg with cycle_time_p          10\n",
              vlSymsp->name());
    __Vtemp_hfbddf086__0[0U] = 0x2e686578U;
    __Vtemp_hfbddf086__0[1U] = 0x68617274U;
    __Vtemp_hfbddf086__0[2U] = 0x63U;
    VL_READMEM_N(true, 8, 8, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hfbddf086__0)
                 ,  &(vlSelf->testbench__DOT__dut__DOT__mem_l)
                 , 0, ~0ULL);
    vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtestbench___024root___eval_final__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final__TOP\n"); );
    // Body
    VL_WRITEF("Simulation time is %t\n",64,VL_TIME_UNITED_Q(1000),
              -9);
    if (vlSelf->testbench__DOT__error_counter_o) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        VL_WRITEF("\033[0;31m    ______                    \033[0m\n\033[0;31m   / ____/_____________  _____\033[0m\n\033[0;31m  / __/ / ___/ ___/ __ \\/ ___/\033[0m\n\033[0;31m / /___/ /  / /  / /_/ / /    \033[0m\n\033[0;31m/_____/_/  /_/   \\____/_/     \033[0m\n\nSimulation Failed\n");
    } else {
        VL_WRITEF("\033[0;32m    ____  ___   __________\033[0m\n\033[0;32m   / __ \\/   | / ___/ ___/\033[0m\n\033[0;32m  / /_/ / /| | \\__ \\__  \033[0m\n\033[0;32m / ____/ ___ |___/ /__/ / \033[0m\n\033[0;32m/_/   /_/  |_/____/____/  \033[0m\n\nSimulation Succeeded!\n");
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->testbench__DOT__reset_done) 
         ^ (IData)(vlSelf->testbench__DOT____Vtogcov__reset_done))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__reset_done 
            = vlSelf->testbench__DOT__reset_done;
    }
    if (((IData)(vlSelf->testbench__DOT__up_i) ^ (IData)(vlSelf->testbench__DOT____Vtogcov__up_i))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__up_i = vlSelf->testbench__DOT__up_i;
    }
    if (((IData)(vlSelf->testbench__DOT__clk_i) ^ (IData)(vlSelf->testbench__DOT____Vtogcov__clk_i))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__clk_i = vlSelf->testbench__DOT__clk_i;
    }
    if (((IData)(vlSelf->testbench__DOT__error_counter_o) 
         ^ (IData)(vlSelf->testbench__DOT____Vtogcov__error_counter_o))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__error_counter_o 
            = vlSelf->testbench__DOT__error_counter_o;
    }
    if (((IData)(vlSelf->testbench__DOT__error) ^ (IData)(vlSelf->testbench__DOT____Vtogcov__error))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__error = vlSelf->testbench__DOT__error;
    }
    if (((IData)(vlSelf->testbench__DOT__clk_i) ^ (IData)(vlSelf->testbench__DOT__cg__DOT____Vtogcov__clk_o))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__cg__DOT____Vtogcov__clk_o 
            = vlSelf->testbench__DOT__clk_i;
    }
    if (((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r) 
         ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_lo_r))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_lo_r 
            = vlSelf->testbench__DOT__rg__DOT__ctr_lo_r;
    }
    if (((0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)) 
         ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__phase_hi_r))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__phase_hi_r 
            = (0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r));
    }
    vlSelf->testbench__DOT__rg__DOT__phase_lo_r = vlSelf->testbench__DOT__rg__DOT__ctr_lo_r;
    vlSelf->testbench__DOT__rg__DOT__phase_hi_r = (0xaU 
                                                   == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r));
    if ((1U & ((IData)(vlSelf->testbench__DOT__rd_addr_i) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__rd_addr_i)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__rd_addr_i 
            = ((6U & (IData)(vlSelf->testbench__DOT____Vtogcov__rd_addr_i)) 
               | (1U & (IData)(vlSelf->testbench__DOT__rd_addr_i)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__rd_addr_i) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__rd_addr_i)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__rd_addr_i 
            = ((5U & (IData)(vlSelf->testbench__DOT____Vtogcov__rd_addr_i)) 
               | (2U & (IData)(vlSelf->testbench__DOT__rd_addr_i)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__rd_addr_i) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__rd_addr_i)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__rd_addr_i 
            = ((3U & (IData)(vlSelf->testbench__DOT____Vtogcov__rd_addr_i)) 
               | (4U & (IData)(vlSelf->testbench__DOT__rd_addr_i)));
    }
    if ((1U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((0xeU & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (1U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((0xdU & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (2U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((0xbU & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (4U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r) 
               ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r 
            = ((7U & (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r)) 
               | (8U & (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    }
    if ((1U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xfeU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (1U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xfdU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (2U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xfbU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (4U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xf7U & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (8U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((0x10U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xefU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (0x10U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((0x20U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xdfU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (0x20U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((0x40U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0xbfU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (0x40U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    if ((0x80U & ((IData)(vlSelf->testbench__DOT__correct_count_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__correct_count_o 
            = ((0x7fU & (IData)(vlSelf->testbench__DOT____Vtogcov__correct_count_o)) 
               | (0x80U & (IData)(vlSelf->testbench__DOT__correct_count_o)));
    }
    vlSelf->testbench__DOT__reset_i = ((IData)(vlSelf->testbench__DOT__rg__DOT__ctr_lo_r) 
                                       ^ (0xaU == (IData)(vlSelf->testbench__DOT__rg__DOT__ctr_hi_r)));
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [0U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [0U]))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[0U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [0U]) | (1U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [0U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [0U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [0U]))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[0U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [0U]) | (2U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [0U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [0U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [0U]))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[0U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [0U]) | (4U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [0U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [0U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [0U]))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[0U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [0U]) | (8U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [0U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [0U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [0U]))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[0U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [0U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [0U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [0U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [0U]))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[0U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [0U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [0U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [0U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [0U]))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[0U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [0U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [0U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [0U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [0U]))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[0U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [0U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [0U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [1U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [1U]))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[1U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [1U]) | (1U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [1U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [1U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [1U]))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[1U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [1U]) | (2U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [1U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [1U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [1U]))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[1U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [1U]) | (4U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [1U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [1U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [1U]))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[1U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [1U]) | (8U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [1U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [1U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [1U]))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[1U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [1U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [1U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [1U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [1U]))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[1U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [1U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [1U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [1U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [1U]))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[1U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [1U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [1U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [1U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [1U]))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[1U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [1U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [1U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [2U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [2U]))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[2U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [2U]) | (1U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [2U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [2U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [2U]))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[2U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [2U]) | (2U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [2U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [2U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [2U]))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[2U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [2U]) | (4U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [2U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [2U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [2U]))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[2U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [2U]) | (8U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [2U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [2U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [2U]))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[2U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [2U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [2U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [2U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [2U]))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[2U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [2U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [2U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [2U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [2U]))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[2U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [2U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [2U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [2U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [2U]))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[2U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [2U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [2U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [3U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [3U]))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[3U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [3U]) | (1U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [3U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [3U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [3U]))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[3U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [3U]) | (2U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [3U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [3U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [3U]))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[3U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [3U]) | (4U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [3U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [3U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [3U]))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[3U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [3U]) | (8U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [3U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [3U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [3U]))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[3U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [3U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [3U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [3U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [3U]))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[3U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [3U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [3U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [3U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [3U]))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[3U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [3U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [3U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [3U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [3U]))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[3U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [3U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [3U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [4U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [4U]))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[4U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [4U]) | (1U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [4U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [4U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [4U]))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[4U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [4U]) | (2U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [4U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [4U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [4U]))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[4U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [4U]) | (4U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [4U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [4U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [4U]))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[4U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [4U]) | (8U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [4U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [4U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [4U]))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[4U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [4U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [4U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [4U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [4U]))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[4U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [4U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [4U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [4U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [4U]))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[4U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [4U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [4U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [4U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [4U]))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[4U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [4U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [4U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [5U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [5U]))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[5U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [5U]) | (1U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [5U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [5U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [5U]))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[5U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [5U]) | (2U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [5U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [5U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [5U]))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[5U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [5U]) | (4U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [5U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [5U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [5U]))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[5U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [5U]) | (8U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [5U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [5U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [5U]))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[5U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [5U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [5U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [5U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [5U]))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[5U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [5U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [5U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [5U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [5U]))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[5U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [5U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [5U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [5U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [5U]))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[5U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [5U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [5U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [6U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [6U]))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[6U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [6U]) | (1U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [6U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [6U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [6U]))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[6U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [6U]) | (2U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [6U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [6U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [6U]))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[6U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [6U]) | (4U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [6U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [6U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [6U]))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[6U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [6U]) | (8U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [6U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [6U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [6U]))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[6U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [6U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [6U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [6U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [6U]))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[6U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [6U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [6U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [6U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [6U]))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[6U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [6U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [6U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [6U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [6U]))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[6U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [6U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [6U]));
    }
    if ((1U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [7U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [7U]))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[7U] 
            = ((0xfeU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [7U]) | (1U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [7U]));
    }
    if ((2U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [7U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [7U]))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[7U] 
            = ((0xfdU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [7U]) | (2U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [7U]));
    }
    if ((4U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [7U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [7U]))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[7U] 
            = ((0xfbU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [7U]) | (4U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [7U]));
    }
    if ((8U & (vlSelf->testbench__DOT__dut__DOT__mem_l
               [7U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
               [7U]))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[7U] 
            = ((0xf7U & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [7U]) | (8U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [7U]));
    }
    if ((0x10U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [7U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [7U]))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[7U] 
            = ((0xefU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [7U]) | (0x10U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [7U]));
    }
    if ((0x20U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [7U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [7U]))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[7U] 
            = ((0xdfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [7U]) | (0x20U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [7U]));
    }
    if ((0x40U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [7U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [7U]))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[7U] 
            = ((0xbfU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [7U]) | (0x40U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [7U]));
    }
    if ((0x80U & (vlSelf->testbench__DOT__dut__DOT__mem_l
                  [7U] ^ vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                  [7U]))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l[7U] 
            = ((0x7fU & vlSelf->testbench__DOT__dut__DOT____Vtogcov__mem_l
                [7U]) | (0x80U & vlSelf->testbench__DOT__dut__DOT__mem_l
                         [7U]));
    }
    vlSelf->testbench__DOT__rd_data_o = vlSelf->testbench__DOT__dut__DOT__mem_l
        [vlSelf->testbench__DOT__rd_addr_i];
    if (((IData)(vlSelf->testbench__DOT__reset_i) ^ (IData)(vlSelf->testbench__DOT____Vtogcov__reset_i))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__reset_i 
            = vlSelf->testbench__DOT__reset_i;
    }
    if (((IData)(vlSelf->testbench__DOT__reset_i) ^ (IData)(vlSelf->testbench__DOT__rg__DOT____Vtogcov__async_reset_o))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT__rg__DOT____Vtogcov__async_reset_o 
            = vlSelf->testbench__DOT__reset_i;
    }
    if ((1U & ((IData)(vlSelf->testbench__DOT__rd_data_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__rd_data_o 
            = ((0xfeU & (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)) 
               | (1U & (IData)(vlSelf->testbench__DOT__rd_data_o)));
    }
    if ((2U & ((IData)(vlSelf->testbench__DOT__rd_data_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__rd_data_o 
            = ((0xfdU & (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)) 
               | (2U & (IData)(vlSelf->testbench__DOT__rd_data_o)));
    }
    if ((4U & ((IData)(vlSelf->testbench__DOT__rd_data_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__rd_data_o 
            = ((0xfbU & (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)) 
               | (4U & (IData)(vlSelf->testbench__DOT__rd_data_o)));
    }
    if ((8U & ((IData)(vlSelf->testbench__DOT__rd_data_o) 
               ^ (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__rd_data_o 
            = ((0xf7U & (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)) 
               | (8U & (IData)(vlSelf->testbench__DOT__rd_data_o)));
    }
    if ((0x10U & ((IData)(vlSelf->testbench__DOT__rd_data_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__rd_data_o 
            = ((0xefU & (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)) 
               | (0x10U & (IData)(vlSelf->testbench__DOT__rd_data_o)));
    }
    if ((0x20U & ((IData)(vlSelf->testbench__DOT__rd_data_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__rd_data_o 
            = ((0xdfU & (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)) 
               | (0x20U & (IData)(vlSelf->testbench__DOT__rd_data_o)));
    }
    if ((0x40U & ((IData)(vlSelf->testbench__DOT__rd_data_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__rd_data_o 
            = ((0xbfU & (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)) 
               | (0x40U & (IData)(vlSelf->testbench__DOT__rd_data_o)));
    }
    if ((0x80U & ((IData)(vlSelf->testbench__DOT__rd_data_o) 
                  ^ (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->testbench__DOT____Vtogcov__rd_data_o 
            = ((0x7fU & (IData)(vlSelf->testbench__DOT____Vtogcov__rd_data_o)) 
               | (0x80U & (IData)(vlSelf->testbench__DOT__rd_data_o)));
    }
}

VL_ATTR_COLD void Vtestbench___024root___configure_coverage(Vtestbench___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "testbench.sv", 11, 16, ".testbench", "v_toggle/testbench", "reset_done[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "testbench.sv", 11, 29, ".testbench", "v_line/testbench", "block", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "testbench.sv", 12, 16, ".testbench", "v_toggle/testbench", "up_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "testbench.sv", 13, 16, ".testbench", "v_toggle/testbench", "clk_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "testbench.sv", 14, 17, ".testbench", "v_toggle/testbench", "reset_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "rd_data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "rd_data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "rd_data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "rd_data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "rd_data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "rd_data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "rd_data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "testbench.sv", 15, 24, ".testbench", "v_toggle/testbench", "rd_data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "testbench.sv", 17, 16, ".testbench", "v_toggle/testbench", "rd_addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "testbench.sv", 17, 16, ".testbench", "v_toggle/testbench", "rd_addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "testbench.sv", 17, 16, ".testbench", "v_toggle/testbench", "rd_addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "testbench.sv", 18, 25, ".testbench", "v_toggle/testbench", "correct_count_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "testbench.sv", 18, 25, ".testbench", "v_toggle/testbench", "correct_count_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "testbench.sv", 18, 25, ".testbench", "v_toggle/testbench", "correct_count_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "testbench.sv", 18, 25, ".testbench", "v_toggle/testbench", "correct_count_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "testbench.sv", 18, 25, ".testbench", "v_toggle/testbench", "correct_count_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "testbench.sv", 18, 25, ".testbench", "v_toggle/testbench", "correct_count_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "testbench.sv", 18, 25, ".testbench", "v_toggle/testbench", "correct_count_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "testbench.sv", 18, 25, ".testbench", "v_toggle/testbench", "correct_count_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "testbench.sv", 19, 17, ".testbench", "v_toggle/testbench", "error_counter_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "testbench.sv", 21, 16, ".testbench", "v_toggle/testbench", "error[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "testbench.sv", 71, 4, ".testbench", "v_line/testbench", "block", "71-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "testbench.sv", 46, 4, ".testbench", "v_line/testbench", "block", "46,48,52,54-61,63-65,67,69,71,79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "testbench.sv", 87, 16, ".testbench", "v_branch/testbench", "if", "87-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "testbench.sv", 87, 17, ".testbench", "v_branch/testbench", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "testbench.sv", 84, 7, ".testbench", "v_line/testbench", "elsif", "84-86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "testbench.sv", 83, 4, ".testbench", "v_line/testbench", "block", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "testbench.sv", 95, 7, ".testbench", "v_branch/testbench", "if", "95-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "testbench.sv", 95, 8, ".testbench", "v_branch/testbench", "else", "104-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "testbench.sv", 93, 4, ".testbench", "v_line/testbench", "block", "93-94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../provided_modules/nonsynth_clock_gen.sv", 3, 16, ".testbench.cg", "v_toggle/nonsynth_clock_gen", "clk_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../provided_modules/nonsynth_clock_gen.sv", 11, 4, ".testbench.cg", "v_line/nonsynth_clock_gen", "block", "11,13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../provided_modules/nonsynth_reset_gen.sv", 17, 34, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "clk_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../provided_modules/nonsynth_reset_gen.sv", 18, 34, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "async_reset_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../provided_modules/nonsynth_reset_gen.sv", 33, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_lo_r[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../provided_modules/nonsynth_reset_gen.sv", 34, 60, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "ctr_hi_r[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../provided_modules/nonsynth_reset_gen.sv", 36, 33, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "phase_lo_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../provided_modules/nonsynth_reset_gen.sv", 37, 33, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "phase_hi_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../provided_modules/nonsynth_reset_gen.sv", 39, 18, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "in_phase_1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../provided_modules/nonsynth_reset_gen.sv", 40, 18, ".testbench.rg", "v_toggle/nonsynth_reset_gen__R1", "in_phase_2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../provided_modules/nonsynth_reset_gen.sv", 50, 16, ".testbench.rg", "v_branch/nonsynth_reset_gen__R1", "if", "42,50,52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../provided_modules/nonsynth_reset_gen.sv", 50, 17, ".testbench.rg", "v_branch/nonsynth_reset_gen__R1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../provided_modules/nonsynth_reset_gen.sv", 48, 11, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "elsif", "42,48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../provided_modules/nonsynth_reset_gen.sv", 47, 9, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "block", "42,47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../provided_modules/nonsynth_reset_gen.sv", 58, 4, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "block", "58-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../provided_modules/nonsynth_reset_gen.sv", 68, 4, ".testbench.rg", "v_line/nonsynth_reset_gen__R1", "block", "68-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "rom.sv", 7, 37, ".testbench.dut", "v_toggle/rom", "rd_addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "rom.sv", 7, 37, ".testbench.dut", "v_toggle/rom", "rd_addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "rom.sv", 7, 37, ".testbench.dut", "v_toggle/rom", "rd_addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "rom.sv", 8, 26, ".testbench.dut", "v_toggle/rom", "rd_data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "rom.sv", 8, 26, ".testbench.dut", "v_toggle/rom", "rd_data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "rom.sv", 8, 26, ".testbench.dut", "v_toggle/rom", "rd_data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "rom.sv", 8, 26, ".testbench.dut", "v_toggle/rom", "rd_data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "rom.sv", 8, 26, ".testbench.dut", "v_toggle/rom", "rd_data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "rom.sv", 8, 26, ".testbench.dut", "v_toggle/rom", "rd_data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "rom.sv", 8, 26, ".testbench.dut", "v_toggle/rom", "rd_data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "rom.sv", 8, 26, ".testbench.dut", "v_toggle/rom", "rd_data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[0][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[0][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[0][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[0][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[1][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[1][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[1][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[1][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[1][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[2][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[2][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[2][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[2][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[2][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[3][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[3][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[3][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[3][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[3][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[3][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[3][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[3][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[4][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[4][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[4][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[4][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[4][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[4][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[4][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[4][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[5][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[5][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[5][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[5][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[5][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[5][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[5][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[5][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[6][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[6][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[6][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[6][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[6][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[6][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[6][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[6][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[7][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[7][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[7][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[7][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[7][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[7][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[7][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "rom.sv", 11, 22, ".testbench.dut", "v_toggle/rom", "mem_l[7][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "rom.sv", 14, 3, ".testbench.dut", "v_line/rom", "block", "14-15");
}
