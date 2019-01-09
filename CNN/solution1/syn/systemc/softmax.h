// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _softmax_HH_
#define _softmax_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "exp_16_8_s.h"
#include "Lenet_sdiv_24ns_1ibs.h"

namespace ap_rtl {

struct softmax : public sc_module {
    // Port declarations 10
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > classifier_1_1_2_input_data_0_V_read;
    sc_in< sc_lv<16> > classifier_1_1_2_input_data_1_V_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    softmax(sc_module_name name);
    SC_HAS_PROCESS(softmax);

    ~softmax();

    sc_trace_file* mVcdFile;

    exp_16_8_s* grp_exp_16_8_s_fu_126;
    Lenet_sdiv_24ns_1ibs<1,28,24,16,16>* Lenet_sdiv_24ns_1ibs_U27;
    sc_signal< sc_lv<43> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<2> > filter_fu_143_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<16> > max_value_V_1_phi_s_fu_165_p3;
    sc_signal< sc_lv<1> > exitcond5_fu_137_p2;
    sc_signal< sc_lv<2> > filter_1_fu_179_p2;
    sc_signal< sc_lv<2> > filter_1_reg_314;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<24> > tmp_105_tr_cast_fu_185_p1;
    sc_signal< sc_lv<24> > tmp_105_tr_cast_reg_319;
    sc_signal< sc_lv<1> > exitcond6_fu_173_p2;
    sc_signal< sc_lv<16> > sum_exp_z_V_fu_206_p2;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<2> > filter_2_fu_218_p2;
    sc_signal< sc_lv<2> > filter_2_reg_332;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<1> > tmp_4_fu_224_p1;
    sc_signal< sc_lv<1> > tmp_4_reg_337;
    sc_signal< sc_lv<1> > exitcond_fu_212_p2;
    sc_signal< sc_lv<16> > in_V_1_fu_234_p2;
    sc_signal< sc_lv<16> > in_V_1_reg_343;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<16> > classifier_y_hat_dat_3_fu_269_p3;
    sc_signal< sc_logic > ap_CS_fsm_state43;
    sc_signal< sc_lv<16> > classifier_y_hat_dat_4_fu_276_p3;
    sc_signal< sc_logic > grp_exp_16_8_s_fu_126_ap_start;
    sc_signal< sc_logic > grp_exp_16_8_s_fu_126_ap_done;
    sc_signal< sc_logic > grp_exp_16_8_s_fu_126_ap_idle;
    sc_signal< sc_logic > grp_exp_16_8_s_fu_126_ap_ready;
    sc_signal< sc_lv<16> > grp_exp_16_8_s_fu_126_x_V;
    sc_signal< sc_lv<16> > grp_exp_16_8_s_fu_126_ap_return;
    sc_signal< sc_lv<16> > p_Val2_1_reg_46;
    sc_signal< sc_lv<2> > p_z_assign_reg_56;
    sc_signal< sc_lv<16> > p_Val2_2_reg_67;
    sc_signal< sc_lv<2> > p_z_assign_3_reg_79;
    sc_signal< sc_lv<16> > classifier_y_hat_dat_reg_91;
    sc_signal< sc_lv<16> > classifier_y_hat_dat_1_reg_103;
    sc_signal< sc_lv<2> > p_z_assign_4_reg_115;
    sc_signal< sc_logic > grp_exp_16_8_s_fu_126_ap_start_reg;
    sc_signal< sc_lv<43> > ap_NS_fsm;
    sc_signal< sc_logic > ap_NS_fsm_state4;
    sc_signal< sc_logic > ap_NS_fsm_state11;
    sc_signal< sc_lv<16> > in_V_fu_199_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<1> > tmp_2_fu_149_p1;
    sc_signal< sc_lv<16> > max_value_V_fu_153_p3;
    sc_signal< sc_lv<1> > tmp_s_fu_159_p2;
    sc_signal< sc_lv<1> > tmp_3_fu_189_p1;
    sc_signal< sc_lv<16> > p_Val2_s_fu_193_p3;
    sc_signal< sc_lv<16> > p_Val2_4_fu_228_p3;
    sc_signal< sc_lv<24> > grp_fu_260_p0;
    sc_signal< sc_lv<16> > grp_fu_260_p1;
    sc_signal< sc_lv<16> > grp_fu_260_p2;
    sc_signal< sc_lv<16> > tmp_5_fu_265_p1;
    sc_signal< sc_logic > grp_fu_260_ap_start;
    sc_signal< sc_logic > grp_fu_260_ap_done;
    sc_signal< sc_lv<16> > ap_return_0_preg;
    sc_signal< sc_lv<16> > ap_return_1_preg;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<43> ap_ST_fsm_state1;
    static const sc_lv<43> ap_ST_fsm_state2;
    static const sc_lv<43> ap_ST_fsm_state3;
    static const sc_lv<43> ap_ST_fsm_state4;
    static const sc_lv<43> ap_ST_fsm_state5;
    static const sc_lv<43> ap_ST_fsm_state6;
    static const sc_lv<43> ap_ST_fsm_state7;
    static const sc_lv<43> ap_ST_fsm_state8;
    static const sc_lv<43> ap_ST_fsm_state9;
    static const sc_lv<43> ap_ST_fsm_state10;
    static const sc_lv<43> ap_ST_fsm_state11;
    static const sc_lv<43> ap_ST_fsm_state12;
    static const sc_lv<43> ap_ST_fsm_state13;
    static const sc_lv<43> ap_ST_fsm_state14;
    static const sc_lv<43> ap_ST_fsm_state15;
    static const sc_lv<43> ap_ST_fsm_state16;
    static const sc_lv<43> ap_ST_fsm_state17;
    static const sc_lv<43> ap_ST_fsm_state18;
    static const sc_lv<43> ap_ST_fsm_state19;
    static const sc_lv<43> ap_ST_fsm_state20;
    static const sc_lv<43> ap_ST_fsm_state21;
    static const sc_lv<43> ap_ST_fsm_state22;
    static const sc_lv<43> ap_ST_fsm_state23;
    static const sc_lv<43> ap_ST_fsm_state24;
    static const sc_lv<43> ap_ST_fsm_state25;
    static const sc_lv<43> ap_ST_fsm_state26;
    static const sc_lv<43> ap_ST_fsm_state27;
    static const sc_lv<43> ap_ST_fsm_state28;
    static const sc_lv<43> ap_ST_fsm_state29;
    static const sc_lv<43> ap_ST_fsm_state30;
    static const sc_lv<43> ap_ST_fsm_state31;
    static const sc_lv<43> ap_ST_fsm_state32;
    static const sc_lv<43> ap_ST_fsm_state33;
    static const sc_lv<43> ap_ST_fsm_state34;
    static const sc_lv<43> ap_ST_fsm_state35;
    static const sc_lv<43> ap_ST_fsm_state36;
    static const sc_lv<43> ap_ST_fsm_state37;
    static const sc_lv<43> ap_ST_fsm_state38;
    static const sc_lv<43> ap_ST_fsm_state39;
    static const sc_lv<43> ap_ST_fsm_state40;
    static const sc_lv<43> ap_ST_fsm_state41;
    static const sc_lv<43> ap_ST_fsm_state42;
    static const sc_lv<43> ap_ST_fsm_state43;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state43();
    void thread_ap_CS_fsm_state9();
    void thread_ap_NS_fsm_state11();
    void thread_ap_NS_fsm_state4();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_classifier_y_hat_dat_3_fu_269_p3();
    void thread_classifier_y_hat_dat_4_fu_276_p3();
    void thread_exitcond5_fu_137_p2();
    void thread_exitcond6_fu_173_p2();
    void thread_exitcond_fu_212_p2();
    void thread_filter_1_fu_179_p2();
    void thread_filter_2_fu_218_p2();
    void thread_filter_fu_143_p2();
    void thread_grp_exp_16_8_s_fu_126_ap_start();
    void thread_grp_exp_16_8_s_fu_126_x_V();
    void thread_grp_fu_260_ap_start();
    void thread_grp_fu_260_p0();
    void thread_grp_fu_260_p1();
    void thread_in_V_1_fu_234_p2();
    void thread_in_V_fu_199_p2();
    void thread_max_value_V_1_phi_s_fu_165_p3();
    void thread_max_value_V_fu_153_p3();
    void thread_p_Val2_4_fu_228_p3();
    void thread_p_Val2_s_fu_193_p3();
    void thread_sum_exp_z_V_fu_206_p2();
    void thread_tmp_105_tr_cast_fu_185_p1();
    void thread_tmp_2_fu_149_p1();
    void thread_tmp_3_fu_189_p1();
    void thread_tmp_4_fu_224_p1();
    void thread_tmp_5_fu_265_p1();
    void thread_tmp_s_fu_159_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
