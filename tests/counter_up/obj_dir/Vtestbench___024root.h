// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"

class Vtestbench__Syms;

class Vtestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testbench__DOT__clk_i;
    CData/*0:0*/ testbench__DOT__reset_i;
    CData/*0:0*/ testbench__DOT__reset_done;
    CData/*0:0*/ testbench__DOT__up_i;
    CData/*3:0*/ testbench__DOT__correct_count_o;
    CData/*0:0*/ testbench__DOT__error;
    CData/*0:0*/ testbench__DOT____Vtogcov__reset_done;
    CData/*0:0*/ testbench__DOT____Vtogcov__up_i;
    CData/*0:0*/ testbench__DOT____Vtogcov__clk_i;
    CData/*0:0*/ testbench__DOT____Vtogcov__reset_i;
    CData/*3:0*/ testbench__DOT____Vtogcov__count_o;
    CData/*3:0*/ testbench__DOT____Vtogcov__correct_count_o;
    CData/*0:0*/ testbench__DOT____Vtogcov__error_counter_o;
    CData/*0:0*/ testbench__DOT____Vtogcov__error;
    CData/*0:0*/ testbench__DOT__cg__DOT____Vtogcov__clk_o;
    CData/*0:0*/ testbench__DOT__rg__DOT__ctr_lo_r;
    CData/*3:0*/ testbench__DOT__rg__DOT__ctr_hi_r;
    CData/*0:0*/ testbench__DOT__rg__DOT__phase_lo_r;
    CData/*0:0*/ testbench__DOT__rg__DOT__phase_hi_r;
    CData/*0:0*/ testbench__DOT__rg__DOT____Vtogcov__async_reset_o;
    CData/*0:0*/ testbench__DOT__rg__DOT____Vtogcov__ctr_lo_r;
    CData/*3:0*/ testbench__DOT__rg__DOT____Vtogcov__ctr_hi_r;
    CData/*0:0*/ testbench__DOT__rg__DOT____Vtogcov__phase_hi_r;
    CData/*3:0*/ testbench__DOT__dut__DOT__count_r;
    CData/*3:0*/ testbench__DOT__dut__DOT__count_n;
    CData/*0:0*/ testbench__DOT__dut__DOT____Vtogcov__up_i;
    CData/*3:0*/ testbench__DOT__dut__DOT____Vtogcov__count_n;
    CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__clk_i;
    CData/*0:0*/ __Vtrigrprev__TOP__testbench__DOT__reset_i;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ testbench__DOT__itervar;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerScheduler __VtrigSched_hec42002a__0;
    VlTriggerScheduler __VtrigSched_hef748430__0;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* name);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
