// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_ddr.h for the primary calling header

#include "verilated.h"

#include "Vtop_ddr__Syms.h"
#include "Vtop_ddr___024root.h"

void Vtop_ddr___024root___ctor_var_reset(Vtop_ddr___024root* vlSelf);

Vtop_ddr___024root::Vtop_ddr___024root(Vtop_ddr__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_ddr___024root___ctor_var_reset(this);
}

void Vtop_ddr___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_ddr___024root::~Vtop_ddr___024root() {
}
