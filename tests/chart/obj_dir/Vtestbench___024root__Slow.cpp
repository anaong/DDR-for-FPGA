// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf);

Vtestbench___024root::Vtestbench___024root(Vtestbench__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench___024root___ctor_var_reset(this);
}

void Vtestbench___024root___configure_coverage(Vtestbench___024root* vlSelf, bool first);

void Vtestbench___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vtestbench___024root___configure_coverage(this, first);
}

Vtestbench___024root::~Vtestbench___024root() {
}

// Coverage
void Vtestbench___024root::__vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    assert(sizeof(uint32_t) == sizeof(std::atomic<uint32_t>));
    uint32_t* count32p = reinterpret_cast<uint32_t*>(countp);
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
