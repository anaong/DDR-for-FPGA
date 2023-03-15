// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ddr.h for the primary calling header

#include "verilated.h"

#include "Vtop_ddr__Syms.h"
#include "Vtop_ddr___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_ddr___024root___dump_triggers__act(Vtop_ddr___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_ddr___024root___eval_triggers__act(Vtop_ddr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_ddr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_ddr___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk_pix) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk_pix)));
    vlSelf->__Vtrigrprev__TOP__clk_pix = vlSelf->clk_pix;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_ddr___024root___dump_triggers__act(vlSelf);
    }
#endif
}
