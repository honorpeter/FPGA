// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Lenet_HH_
#define _Lenet_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "softmax.h"
#include "Conv_forward.h"
#include "copy_tensor_1.h"
#include "copy_tensor.h"
#include "copy_tensor_2.h"
#include "forward_fc.h"
#include "forward_ReLu.h"
#include "copy_tensor_3.h"
#include "Lenet_conv1_inputjbC.h"
#include "Lenet_conv1_a_slilbW.h"
#include "Lenet_axilite_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_AXILITE_ADDR_WIDTH = 9,
         unsigned int C_S_AXI_AXILITE_DATA_WIDTH = 32>
struct Lenet : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > s_axi_axilite_AWVALID;
    sc_out< sc_logic > s_axi_axilite_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITE_ADDR_WIDTH> > s_axi_axilite_AWADDR;
    sc_in< sc_logic > s_axi_axilite_WVALID;
    sc_out< sc_logic > s_axi_axilite_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITE_DATA_WIDTH> > s_axi_axilite_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITE_DATA_WIDTH/8> > s_axi_axilite_WSTRB;
    sc_in< sc_logic > s_axi_axilite_ARVALID;
    sc_out< sc_logic > s_axi_axilite_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITE_ADDR_WIDTH> > s_axi_axilite_ARADDR;
    sc_out< sc_logic > s_axi_axilite_RVALID;
    sc_in< sc_logic > s_axi_axilite_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITE_DATA_WIDTH> > s_axi_axilite_RDATA;
    sc_out< sc_lv<2> > s_axi_axilite_RRESP;
    sc_out< sc_logic > s_axi_axilite_BVALID;
    sc_in< sc_logic > s_axi_axilite_BREADY;
    sc_out< sc_lv<2> > s_axi_axilite_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    Lenet(sc_module_name name);
    SC_HAS_PROCESS(Lenet);

    ~Lenet();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    Lenet_axilite_s_axi<C_S_AXI_AXILITE_ADDR_WIDTH,C_S_AXI_AXILITE_DATA_WIDTH>* Lenet_axilite_s_axi_U;
    Lenet_conv1_inputjbC* conv1_input_data_V_U;
    Lenet_conv1_inputjbC* conv1_output_data_V_U;
    Lenet_conv1_a_slilbW* conv1_a_slice_pad_da_U;
    Lenet_conv1_inputjbC* fx_input_data_V_U;
    Lenet_conv1_inputjbC* fx_output_data_V_U;
    Lenet_conv1_inputjbC* fc1_input_data_V_U;
    softmax* grp_softmax_fu_204;
    Conv_forward* grp_Conv_forward_fu_216;
    copy_tensor_1* grp_copy_tensor_1_fu_225;
    copy_tensor* grp_copy_tensor_fu_248;
    copy_tensor_2* grp_copy_tensor_2_fu_258;
    forward_fc* grp_forward_fc_fu_268;
    forward_ReLu* grp_forward_ReLu_fu_275;
    copy_tensor_3* grp_copy_tensor_3_fu_281;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<15> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_logic > data_in_data_V_ce0;
    sc_signal< sc_lv<16> > data_in_data_V_q0;
    sc_signal< sc_lv<32> > data_in_size_x;
    sc_signal< sc_lv<32> > data_in_size_y;
    sc_signal< sc_lv<32> > data_in_size_z;
    sc_signal< sc_logic > conv_data_V_ce0;
    sc_signal< sc_logic > conv_data_V_we0;
    sc_signal< sc_lv<32> > conv_size_x;
    sc_signal< sc_lv<32> > conv_size_y;
    sc_signal< sc_lv<32> > conv_size_z;
    sc_signal< sc_logic > relu_data_V_ce0;
    sc_signal< sc_logic > relu_data_V_we0;
    sc_signal< sc_lv<32> > relu_size_x;
    sc_signal< sc_lv<32> > relu_size_y;
    sc_signal< sc_lv<32> > relu_size_z;
    sc_signal< sc_lv<32> > pool_size_x;
    sc_signal< sc_lv<32> > pool_size_y;
    sc_signal< sc_lv<32> > pool_size_z;
    sc_signal< sc_lv<32> > fc_size_x;
    sc_signal< sc_lv<32> > fc_size_y;
    sc_signal< sc_lv<32> > fc_size_z;
    sc_signal< sc_lv<32> > data_out_size_x;
    sc_signal< sc_lv<32> > data_out_size_y;
    sc_signal< sc_lv<32> > data_out_size_z;
    sc_signal< sc_lv<32> > data_in_size_x_read_reg_319;
    sc_signal< sc_lv<32> > data_in_size_y_read_reg_324;
    sc_signal< sc_lv<32> > data_in_size_z_read_reg_329;
    sc_signal< sc_lv<32> > data_out_size_x_read_reg_334;
    sc_signal< sc_lv<32> > data_out_size_y_read_reg_339;
    sc_signal< sc_lv<32> > conv_size_x_read_reg_344;
    sc_signal< sc_lv<32> > conv_size_y_read_reg_349;
    sc_signal< sc_lv<32> > relu_size_x_read_reg_354;
    sc_signal< sc_lv<32> > relu_size_y_read_reg_359;
    sc_signal< sc_lv<32> > fc_size_x_read_reg_364;
    sc_signal< sc_lv<32> > fc_size_y_read_reg_369;
    sc_signal< sc_lv<16> > fc1_output_data_0_V_reg_374;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > grp_forward_fc_fu_268_ap_idle;
    sc_signal< sc_logic > grp_forward_fc_fu_268_ap_ready;
    sc_signal< sc_logic > grp_forward_fc_fu_268_ap_done;
    sc_signal< sc_logic > grp_copy_tensor_1_fu_225_ap_idle;
    sc_signal< sc_logic > grp_copy_tensor_1_fu_225_ap_ready;
    sc_signal< sc_logic > grp_copy_tensor_1_fu_225_ap_done;
    sc_signal< bool > ap_block_state12_on_subcall_done;
    sc_signal< sc_lv<16> > fc1_output_data_1_V_reg_380;
    sc_signal< sc_lv<16> > softmax_input_data_0_reg_386;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > grp_copy_tensor_3_fu_281_ap_idle;
    sc_signal< sc_logic > grp_copy_tensor_3_fu_281_ap_ready;
    sc_signal< sc_logic > grp_copy_tensor_3_fu_281_ap_done;
    sc_signal< sc_logic > grp_copy_tensor_fu_248_ap_idle;
    sc_signal< sc_logic > grp_copy_tensor_fu_248_ap_ready;
    sc_signal< sc_logic > grp_copy_tensor_fu_248_ap_done;
    sc_signal< bool > ap_block_state13_on_subcall_done;
    sc_signal< sc_lv<16> > softmax_input_data_1_reg_391;
    sc_signal< sc_lv<16> > softmax_y_hat_data_0_reg_396;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > grp_softmax_fu_204_ap_idle;
    sc_signal< sc_logic > grp_softmax_fu_204_ap_ready;
    sc_signal< sc_logic > grp_softmax_fu_204_ap_done;
    sc_signal< sc_lv<16> > softmax_y_hat_data_1_reg_401;
    sc_signal< sc_lv<3> > conv1_input_data_V_address0;
    sc_signal< sc_logic > conv1_input_data_V_ce0;
    sc_signal< sc_logic > conv1_input_data_V_we0;
    sc_signal< sc_lv<16> > conv1_input_data_V_q0;
    sc_signal< sc_lv<3> > conv1_output_data_V_address0;
    sc_signal< sc_logic > conv1_output_data_V_ce0;
    sc_signal< sc_logic > conv1_output_data_V_we0;
    sc_signal< sc_lv<16> > conv1_output_data_V_q0;
    sc_signal< sc_lv<16> > conv1_a_slice_pad_da_q0;
    sc_signal< sc_lv<3> > fx_input_data_V_address0;
    sc_signal< sc_logic > fx_input_data_V_ce0;
    sc_signal< sc_logic > fx_input_data_V_we0;
    sc_signal< sc_lv<16> > fx_input_data_V_q0;
    sc_signal< sc_lv<3> > fx_output_data_V_address0;
    sc_signal< sc_logic > fx_output_data_V_ce0;
    sc_signal< sc_logic > fx_output_data_V_we0;
    sc_signal< sc_lv<16> > fx_output_data_V_q0;
    sc_signal< sc_lv<3> > fc1_input_data_V_address0;
    sc_signal< sc_logic > fc1_input_data_V_ce0;
    sc_signal< sc_logic > fc1_input_data_V_we0;
    sc_signal< sc_lv<16> > fc1_input_data_V_q0;
    sc_signal< sc_logic > grp_softmax_fu_204_ap_start;
    sc_signal< sc_lv<16> > grp_softmax_fu_204_ap_return_0;
    sc_signal< sc_lv<16> > grp_softmax_fu_204_ap_return_1;
    sc_signal< sc_logic > grp_Conv_forward_fu_216_ap_start;
    sc_signal< sc_logic > grp_Conv_forward_fu_216_ap_done;
    sc_signal< sc_logic > grp_Conv_forward_fu_216_ap_idle;
    sc_signal< sc_logic > grp_Conv_forward_fu_216_ap_ready;
    sc_signal< sc_lv<3> > grp_Conv_forward_fu_216_conv_layer1_2_2_2_1_2_2_2_input_data_V_address0;
    sc_signal< sc_logic > grp_Conv_forward_fu_216_conv_layer1_2_2_2_1_2_2_2_input_data_V_ce0;
    sc_signal< sc_lv<3> > grp_Conv_forward_fu_216_conv_layer1_2_2_2_1_2_2_2_output_data_V_address0;
    sc_signal< sc_logic > grp_Conv_forward_fu_216_conv_layer1_2_2_2_1_2_2_2_output_data_V_ce0;
    sc_signal< sc_logic > grp_Conv_forward_fu_216_conv_layer1_2_2_2_1_2_2_2_output_data_V_we0;
    sc_signal< sc_lv<16> > grp_Conv_forward_fu_216_conv_layer1_2_2_2_1_2_2_2_output_data_V_d0;
    sc_signal< sc_lv<5> > grp_Conv_forward_fu_216_conv_layer1_2_2_2_1_2_2_2_a_slice_pad_data_V_address0;
    sc_signal< sc_logic > grp_Conv_forward_fu_216_conv_layer1_2_2_2_1_2_2_2_a_slice_pad_data_V_ce0;
    sc_signal< sc_logic > grp_Conv_forward_fu_216_conv_layer1_2_2_2_1_2_2_2_a_slice_pad_data_V_we0;
    sc_signal< sc_lv<16> > grp_Conv_forward_fu_216_conv_layer1_2_2_2_1_2_2_2_a_slice_pad_data_V_d0;
    sc_signal< sc_logic > grp_copy_tensor_1_fu_225_ap_start;
    sc_signal< sc_lv<3> > grp_copy_tensor_1_fu_225_in1_V_address0;
    sc_signal< sc_logic > grp_copy_tensor_1_fu_225_in1_V_ce0;
    sc_signal< sc_logic > grp_copy_tensor_1_fu_225_in1_V_we0;
    sc_signal< sc_lv<16> > grp_copy_tensor_1_fu_225_in1_V_d0;
    sc_signal< sc_lv<3> > grp_copy_tensor_1_fu_225_in2_V_address0;
    sc_signal< sc_logic > grp_copy_tensor_1_fu_225_in2_V_ce0;
    sc_signal< sc_lv<16> > grp_copy_tensor_1_fu_225_in2_V_q0;
    sc_signal< sc_lv<32> > grp_copy_tensor_1_fu_225_size1_x;
    sc_signal< sc_lv<32> > grp_copy_tensor_1_fu_225_size1_y;
    sc_signal< sc_lv<32> > grp_copy_tensor_1_fu_225_size2_x;
    sc_signal< sc_lv<32> > grp_copy_tensor_1_fu_225_size2_y;
    sc_signal< sc_lv<32> > grp_copy_tensor_1_fu_225_size2_z;
    sc_signal< sc_logic > grp_copy_tensor_fu_248_ap_start;
    sc_signal< sc_lv<3> > grp_copy_tensor_fu_248_in1_V_address0;
    sc_signal< sc_logic > grp_copy_tensor_fu_248_in1_V_ce0;
    sc_signal< sc_logic > grp_copy_tensor_fu_248_in1_V_we0;
    sc_signal< sc_lv<16> > grp_copy_tensor_fu_248_in1_V_d0;
    sc_signal< sc_logic > grp_copy_tensor_2_fu_258_ap_start;
    sc_signal< sc_logic > grp_copy_tensor_2_fu_258_ap_done;
    sc_signal< sc_logic > grp_copy_tensor_2_fu_258_ap_idle;
    sc_signal< sc_logic > grp_copy_tensor_2_fu_258_ap_ready;
    sc_signal< sc_lv<5> > grp_copy_tensor_2_fu_258_in1_V_address0;
    sc_signal< sc_logic > grp_copy_tensor_2_fu_258_in1_V_ce0;
    sc_signal< sc_logic > grp_copy_tensor_2_fu_258_in1_V_we0;
    sc_signal< sc_lv<16> > grp_copy_tensor_2_fu_258_in1_V_d0;
    sc_signal< sc_logic > grp_forward_fc_fu_268_ap_start;
    sc_signal< sc_lv<3> > grp_forward_fc_fu_268_fc_layer_2_2_2_2_input_data_V_address0;
    sc_signal< sc_logic > grp_forward_fc_fu_268_fc_layer_2_2_2_2_input_data_V_ce0;
    sc_signal< sc_lv<16> > grp_forward_fc_fu_268_ap_return_0;
    sc_signal< sc_lv<16> > grp_forward_fc_fu_268_ap_return_1;
    sc_signal< sc_logic > grp_forward_ReLu_fu_275_ap_start;
    sc_signal< sc_logic > grp_forward_ReLu_fu_275_ap_done;
    sc_signal< sc_logic > grp_forward_ReLu_fu_275_ap_idle;
    sc_signal< sc_logic > grp_forward_ReLu_fu_275_ap_ready;
    sc_signal< sc_lv<3> > grp_forward_ReLu_fu_275_activation_layer_2_2_2_input_data_V_address0;
    sc_signal< sc_logic > grp_forward_ReLu_fu_275_activation_layer_2_2_2_input_data_V_ce0;
    sc_signal< sc_lv<3> > grp_forward_ReLu_fu_275_activation_layer_2_2_2_output_data_V_address0;
    sc_signal< sc_logic > grp_forward_ReLu_fu_275_activation_layer_2_2_2_output_data_V_ce0;
    sc_signal< sc_logic > grp_forward_ReLu_fu_275_activation_layer_2_2_2_output_data_V_we0;
    sc_signal< sc_lv<16> > grp_forward_ReLu_fu_275_activation_layer_2_2_2_output_data_V_d0;
    sc_signal< sc_logic > grp_copy_tensor_3_fu_281_ap_start;
    sc_signal< sc_lv<16> > grp_copy_tensor_3_fu_281_ap_return_0;
    sc_signal< sc_lv<16> > grp_copy_tensor_3_fu_281_ap_return_1;
    sc_signal< sc_logic > grp_softmax_fu_204_ap_start_reg;
    sc_signal< sc_logic > grp_Conv_forward_fu_216_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > grp_copy_tensor_1_fu_225_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > grp_copy_tensor_fu_248_ap_start_reg;
    sc_signal< sc_logic > grp_copy_tensor_2_fu_258_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > grp_forward_fc_fu_268_ap_start_reg;
    sc_signal< sc_logic > grp_forward_ReLu_fu_275_ap_start_reg;
    sc_signal< sc_logic > grp_copy_tensor_3_fu_281_ap_start_reg;
    sc_signal< sc_lv<15> > ap_NS_fsm;
    sc_signal< bool > ap_block_state8_on_subcall_done;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<15> ap_ST_fsm_state1;
    static const sc_lv<15> ap_ST_fsm_state2;
    static const sc_lv<15> ap_ST_fsm_state3;
    static const sc_lv<15> ap_ST_fsm_state4;
    static const sc_lv<15> ap_ST_fsm_state5;
    static const sc_lv<15> ap_ST_fsm_state6;
    static const sc_lv<15> ap_ST_fsm_state7;
    static const sc_lv<15> ap_ST_fsm_state8;
    static const sc_lv<15> ap_ST_fsm_state9;
    static const sc_lv<15> ap_ST_fsm_state10;
    static const sc_lv<15> ap_ST_fsm_state11;
    static const sc_lv<15> ap_ST_fsm_state12;
    static const sc_lv<15> ap_ST_fsm_state13;
    static const sc_lv<15> ap_ST_fsm_state14;
    static const sc_lv<15> ap_ST_fsm_state15;
    static const sc_lv<32> ap_const_lv32_0;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_B;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_E;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state12_on_subcall_done();
    void thread_ap_block_state13_on_subcall_done();
    void thread_ap_block_state8_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_conv1_input_data_V_address0();
    void thread_conv1_input_data_V_ce0();
    void thread_conv1_input_data_V_we0();
    void thread_conv1_output_data_V_address0();
    void thread_conv1_output_data_V_ce0();
    void thread_conv1_output_data_V_we0();
    void thread_conv_data_V_ce0();
    void thread_conv_data_V_we0();
    void thread_data_in_data_V_ce0();
    void thread_fc1_input_data_V_address0();
    void thread_fc1_input_data_V_ce0();
    void thread_fc1_input_data_V_we0();
    void thread_fx_input_data_V_address0();
    void thread_fx_input_data_V_ce0();
    void thread_fx_input_data_V_we0();
    void thread_fx_output_data_V_address0();
    void thread_fx_output_data_V_ce0();
    void thread_fx_output_data_V_we0();
    void thread_grp_Conv_forward_fu_216_ap_start();
    void thread_grp_copy_tensor_1_fu_225_ap_start();
    void thread_grp_copy_tensor_1_fu_225_in2_V_q0();
    void thread_grp_copy_tensor_1_fu_225_size1_x();
    void thread_grp_copy_tensor_1_fu_225_size1_y();
    void thread_grp_copy_tensor_1_fu_225_size2_x();
    void thread_grp_copy_tensor_1_fu_225_size2_y();
    void thread_grp_copy_tensor_1_fu_225_size2_z();
    void thread_grp_copy_tensor_2_fu_258_ap_start();
    void thread_grp_copy_tensor_3_fu_281_ap_start();
    void thread_grp_copy_tensor_fu_248_ap_start();
    void thread_grp_forward_ReLu_fu_275_ap_start();
    void thread_grp_forward_fc_fu_268_ap_start();
    void thread_grp_softmax_fu_204_ap_start();
    void thread_relu_data_V_ce0();
    void thread_relu_data_V_we0();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
