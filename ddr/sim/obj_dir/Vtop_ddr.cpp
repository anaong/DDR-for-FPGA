// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_ddr.h"
#include "Vtop_ddr__Syms.h"

//============================================================
// Constructors

Vtop_ddr::Vtop_ddr(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_ddr__Syms(contextp(), _vcname__, this)}
    , clk_pix{vlSymsp->TOP.clk_pix}
    , sim_rst{vlSymsp->TOP.sim_rst}
    , btn_fire{vlSymsp->TOP.btn_fire}
    , btn_up{vlSymsp->TOP.btn_up}
    , btn_dn{vlSymsp->TOP.btn_dn}
    , sdl_de{vlSymsp->TOP.sdl_de}
    , sdl_r{vlSymsp->TOP.sdl_r}
    , sdl_g{vlSymsp->TOP.sdl_g}
    , sdl_b{vlSymsp->TOP.sdl_b}
    , sdl_sx{vlSymsp->TOP.sdl_sx}
    , sdl_sy{vlSymsp->TOP.sdl_sy}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_ddr::Vtop_ddr(const char* _vcname__)
    : Vtop_ddr(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_ddr::~Vtop_ddr() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_ddr___024root___eval_debug_assertions(Vtop_ddr___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_ddr___024root___eval_static(Vtop_ddr___024root* vlSelf);
void Vtop_ddr___024root___eval_initial(Vtop_ddr___024root* vlSelf);
void Vtop_ddr___024root___eval_settle(Vtop_ddr___024root* vlSelf);
void Vtop_ddr___024root___eval(Vtop_ddr___024root* vlSelf);

void Vtop_ddr::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_ddr::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_ddr___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_ddr___024root___eval_static(&(vlSymsp->TOP));
        Vtop_ddr___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_ddr___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_ddr___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_ddr::eventsPending() { return false; }

uint64_t Vtop_ddr::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop_ddr::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_ddr___024root___eval_final(Vtop_ddr___024root* vlSelf);

VL_ATTR_COLD void Vtop_ddr::final() {
    Vtop_ddr___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_ddr::hierName() const { return vlSymsp->name(); }
const char* Vtop_ddr::modelName() const { return "Vtop_ddr"; }
unsigned Vtop_ddr::threads() const { return 1; }
