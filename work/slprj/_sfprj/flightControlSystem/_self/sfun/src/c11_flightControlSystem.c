/* Include files */

#include "flightControlSystem_sfun.h"
#include "c11_flightControlSystem.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c11_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c11_b_emlrtMCI = { 40,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtMCInfo c11_c_emlrtMCI = { 18,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRSInfo c11_emlrtRSI = { 2, /* lineNo */
  "Control System/Path Planning/LineTrackingAlgorithm/SecondLineTracking/MATLAB Function9",/* fcnName */
  "#flightControlSystem:3031"          /* pathName */
};

static emlrtRSInfo c11_b_emlrtRSI = { 4,/* lineNo */
  "Control System/Path Planning/LineTrackingAlgorithm/SecondLineTracking/MATLAB Function9",/* fcnName */
  "#flightControlSystem:3031"          /* pathName */
};

static emlrtRSInfo c11_c_emlrtRSI = { 5,/* lineNo */
  "Control System/Path Planning/LineTrackingAlgorithm/SecondLineTracking/MATLAB Function9",/* fcnName */
  "#flightControlSystem:3031"          /* pathName */
};

static emlrtRSInfo c11_d_emlrtRSI = { 116,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c11_e_emlrtRSI = { 132,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c11_f_emlrtRSI = { 708,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c11_g_emlrtRSI = { 709,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c11_h_emlrtRSI = { 714,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c11_i_emlrtRSI = { 715,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c11_j_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c11_k_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c11_l_emlrtRSI = { 854,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c11_m_emlrtRSI = { 928,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c11_n_emlrtRSI = { 1002,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c11_o_emlrtRSI = { 1030,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c11_p_emlrtRSI = { 1042,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c11_q_emlrtRSI = { 724,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c11_r_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c11_s_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c11_t_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c11_u_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c11_v_emlrtRSI = { 111,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c11_w_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c11_x_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c11_y_emlrtRSI = { 183,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRTEInfo c11_emlrtRTEI = { 739,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c11_b_emlrtRTEI = { 740,/* lineNo */
  37,                                  /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c11_c_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c11_d_emlrtRTEI = { 740,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c11_e_emlrtRTEI = { 4,/* lineNo */
  1,                                   /* colNo */
  "Control System/Path Planning/LineTrackingAlgorithm/SecondLineTracking/MATLAB Function9",/* fName */
  "#flightControlSystem:3031"          /* pName */
};

static emlrtRTEInfo c11_f_emlrtRTEI = { 5,/* lineNo */
  17,                                  /* colNo */
  "Control System/Path Planning/LineTrackingAlgorithm/SecondLineTracking/MATLAB Function9",/* fName */
  "#flightControlSystem:3031"          /* pName */
};

static emlrtRTEInfo c11_g_emlrtRTEI = { 99,/* lineNo */
  40,                                  /* colNo */
  "blockedSummation",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pName */
};

static emlrtBCInfo c11_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  5,                                   /* lineNo */
  23,                                  /* colNo */
  "P",                                 /* aName */
  "Control System/Path Planning/LineTrackingAlgorithm/SecondLineTracking/MATLAB Function9",/* fName */
  "#flightControlSystem:3031",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c11_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c11_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c11_d_emlrtBCI = { 1,/* iFirst */
  1,                                   /* iLast */
  100,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c11_e_emlrtBCI = { 1,/* iFirst */
  1,                                   /* iLast */
  100,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c11_f_emlrtBCI = { 1,/* iFirst */
  2,                                   /* iLast */
  122,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c11_g_emlrtBCI = { 1,/* iFirst */
  180,                                 /* iLast */
  5,                                   /* lineNo */
  19,                                  /* colNo */
  "T",                                 /* aName */
  "Control System/Path Planning/LineTrackingAlgorithm/SecondLineTracking/MATLAB Function9",/* fName */
  "#flightControlSystem:3031",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_emlrtDCI = { 5, /* lineNo */
  19,                                  /* colNo */
  "Control System/Path Planning/LineTrackingAlgorithm/SecondLineTracking/MATLAB Function9",/* fName */
  "#flightControlSystem:3031",         /* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void enable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void disable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void c11_update_jit_animation_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void c11_do_animation_call_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance, const mxArray *c11_st);
static void initSimStructsc11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void c11_warning(SFc11_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c11_sp);
static real_T c11_sumColumnB(SFc11_flightControlSystemInstanceStruct
  *chartInstance, real_T c11_x_data[], int32_T c11_vlen);
static real_T c11_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_b_DegAngle, const char_T *c11_identifier);
static real_T c11_b_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static uint8_T c11_c_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_b_is_active_c11_flightControlSystem, const
  char_T *c11_identifier);
static uint8_T c11_d_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_slStringInitializeDynamicBuffers
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void c11_chart_data_browse_helper(SFc11_flightControlSystemInstanceStruct
  *chartInstance, int32_T c11_ssIdNumber, const mxArray **c11_mxData, uint8_T
  *c11_isValueTooBig);
static const mxArray *c11_feval(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c11_sp, const mxArray *c11_input0, const
  mxArray *c11_input1);
static void c11_b_feval(SFc11_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c11_sp, const mxArray *c11_input0, const mxArray *c11_input1);
static void init_dsm_address_info(SFc11_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc11_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c11_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c11_st.tls = chartInstance->c11_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c11_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c11_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c11_is_active_c11_flightControlSystem = 0U;
}

static void initialize_params_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c11_decisionTxtEndIdx = 0U;
  static const uint32_T c11_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c11_chart_data_browse_helper);
  chartInstance->c11_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c11_RuntimeVar,
    &chartInstance->c11_IsDebuggerActive,
    &chartInstance->c11_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c11_mlFcnLineNumber, &chartInstance->c11_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c11_covrtInstance, 1U, 0U, 1U,
    114U);
  covrtChartInitFcn(chartInstance->c11_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c11_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c11_decisionTxtStartIdx, &c11_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c11_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c11_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  1U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 209);
  covrtEmlSaturationInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U, 49, -1,
    70);
}

static void mdl_cleanup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c11_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c11_covrtInstance);
}

static void enable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  static real_T c11_b_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c11_c_kernel[13] = { 3.4813359214923059E-5,
    0.00054457256285105158, 0.0051667606200595222, 0.029732654490475543,
    0.10377716120747747, 0.21969625200024598, 0.28209557151935094,
    0.21969625200024598, 0.10377716120747747, 0.029732654490475543,
    0.0051667606200595222, 0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c11_d_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c11_kernel[13] = { 3.4813359214923059E-5, 0.00054457256285105158,
    0.0051667606200595222, 0.029732654490475543, 0.10377716120747747,
    0.21969625200024598, 0.28209557151935094, 0.21969625200024598,
    0.10377716120747747, 0.029732654490475543, 0.0051667606200595222,
    0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c11_nonZeroKernel[12] = { 0.0020299751839417137,
    0.0102182810143517, 0.058116735860084034, 0.19634433732941292,
    0.37823877042972087, 0.35505190018248872, -0.35505190018248872,
    -0.37823877042972087, -0.19634433732941292, -0.058116735860084034,
    -0.0102182810143517, -0.0020299751839417137 };

  static int32_T c11_b_idxA[26] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

  static int32_T c11_idxA[26] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

  static char_T c11_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  static boolean_T c11_b_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  static boolean_T c11_c_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  emlrtStack c11_b_st;
  emlrtStack c11_c_st;
  emlrtStack c11_d_st;
  emlrtStack c11_e_st;
  emlrtStack c11_f_st;
  emlrtStack c11_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c11_c_y = NULL;
  const mxArray *c11_d_y = NULL;
  real_T c11_counts[64];
  real_T c11_a[13];
  real_T c11_P_data[4];
  real_T c11_peakCoordinates[4];
  real_T c11_b_x_data[2];
  real_T c11_connDimsT[2];
  real_T c11_outSizeT[2];
  real_T c11_padSizeT[2];
  real_T c11_startT[2];
  real_T c11_x_data[2];
  real_T c11_I;
  real_T c11_a_tmp;
  real_T c11_b;
  real_T c11_b_BWimage;
  real_T c11_b_DegAngle;
  real_T c11_b_a;
  real_T c11_b_a_tmp;
  real_T c11_b_b;
  real_T c11_b_i;
  real_T c11_b_j;
  real_T c11_b_magGrad;
  real_T c11_b_varargin_1;
  real_T c11_b_x;
  real_T c11_b_y;
  real_T c11_c_a;
  real_T c11_c_a_tmp;
  real_T c11_c_varargin_1;
  real_T c11_c_x;
  real_T c11_d;
  real_T c11_d_a;
  real_T c11_d_a_tmp;
  real_T c11_d_j;
  real_T c11_d_varargin_1;
  real_T c11_d_x;
  real_T c11_dx;
  real_T c11_dy;
  real_T c11_e_a;
  real_T c11_e_varargin_1;
  real_T c11_e_y;
  real_T c11_f_varargin_1;
  real_T c11_g_varargin_1;
  real_T c11_h_i;
  real_T c11_h_varargin_1;
  real_T c11_i_varargin_1;
  real_T c11_idx;
  real_T c11_img;
  real_T c11_j_varargin_1;
  real_T c11_magGrad;
  real_T c11_out;
  real_T c11_sum;
  real_T c11_varargin_1;
  real_T c11_x;
  real_T c11_x1;
  real_T c11_x2;
  real_T c11_y;
  int32_T c11_P_size[2];
  int32_T c11_x_size[2];
  int32_T c11_highThresh_size[1];
  int32_T c11_lowThresh_size[1];
  int32_T c11_b_loop_ub;
  int32_T c11_b_vlen;
  int32_T c11_c;
  int32_T c11_c_i;
  int32_T c11_c_j;
  int32_T c11_c_loop_ub;
  int32_T c11_c_vlen;
  int32_T c11_d_i;
  int32_T c11_d_vlen;
  int32_T c11_e_i;
  int32_T c11_f_i;
  int32_T c11_g_i;
  int32_T c11_i;
  int32_T c11_i1;
  int32_T c11_i10;
  int32_T c11_i11;
  int32_T c11_i12;
  int32_T c11_i13;
  int32_T c11_i14;
  int32_T c11_i15;
  int32_T c11_i16;
  int32_T c11_i17;
  int32_T c11_i18;
  int32_T c11_i19;
  int32_T c11_i2;
  int32_T c11_i20;
  int32_T c11_i21;
  int32_T c11_i22;
  int32_T c11_i23;
  int32_T c11_i24;
  int32_T c11_i25;
  int32_T c11_i26;
  int32_T c11_i27;
  int32_T c11_i28;
  int32_T c11_i29;
  int32_T c11_i3;
  int32_T c11_i30;
  int32_T c11_i31;
  int32_T c11_i32;
  int32_T c11_i33;
  int32_T c11_i34;
  int32_T c11_i35;
  int32_T c11_i36;
  int32_T c11_i37;
  int32_T c11_i38;
  int32_T c11_i39;
  int32_T c11_i4;
  int32_T c11_i40;
  int32_T c11_i41;
  int32_T c11_i42;
  int32_T c11_i5;
  int32_T c11_i6;
  int32_T c11_i7;
  int32_T c11_i8;
  int32_T c11_i9;
  int32_T c11_i_i;
  int32_T c11_j;
  int32_T c11_loop_ub;
  int32_T c11_peakIdx;
  int32_T c11_vlen;
  int8_T c11_b_idx;
  boolean_T c11_conn[13];
  boolean_T c11_b1;
  boolean_T c11_b2;
  boolean_T c11_b_modeFlag;
  boolean_T c11_b_tooBig;
  boolean_T c11_c_b;
  boolean_T c11_c_modeFlag;
  boolean_T c11_c_tooBig;
  boolean_T c11_covSaturation;
  boolean_T c11_d_b;
  boolean_T c11_d_modeFlag;
  boolean_T c11_d_tooBig;
  boolean_T c11_e_b;
  boolean_T c11_e_modeFlag;
  boolean_T c11_f_modeFlag;
  boolean_T c11_g_modeFlag;
  boolean_T c11_h_modeFlag;
  boolean_T c11_i_modeFlag;
  boolean_T c11_isDone;
  boolean_T c11_j_modeFlag;
  boolean_T c11_k_modeFlag;
  boolean_T c11_l_modeFlag;
  boolean_T c11_modeFlag;
  boolean_T c11_nanFlag;
  boolean_T c11_tooBig;
  c11_st.tls = chartInstance->c11_fEmlrtCtx;
  c11_b_st.prev = &c11_st;
  c11_b_st.tls = c11_st.tls;
  c11_c_st.prev = &c11_b_st;
  c11_c_st.tls = c11_b_st.tls;
  c11_d_st.prev = &c11_c_st;
  c11_d_st.tls = c11_c_st.tls;
  c11_e_st.prev = &c11_d_st;
  c11_e_st.tls = c11_d_st.tls;
  c11_f_st.prev = &c11_e_st;
  c11_f_st.tls = c11_e_st.tls;
  chartInstance->c11_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 0U,
                    *chartInstance->c11_BWimage);
  chartInstance->c11_sfEvent = CALL_EVENT;
  c11_b_BWimage = *chartInstance->c11_BWimage;
  covrtEmlFcnEval(chartInstance->c11_covrtInstance, 4U, 0, 0);
  c11_b_st.site = &c11_emlrtRSI;
  c11_varargin_1 = c11_b_BWimage;
  c11_c_st.site = &c11_d_emlrtRSI;
  c11_I = c11_varargin_1;
  c11_d_st.site = &c11_f_emlrtRSI;
  c11_b_varargin_1 = c11_I;
  c11_e_st.site = &c11_j_emlrtRSI;
  c11_a_tmp = c11_b_varargin_1;
  c11_f_st.site = &c11_l_emlrtRSI;
  c11_c_varargin_1 = c11_a_tmp;
  for (c11_i = 0; c11_i < 13; c11_i++) {
    c11_b_i = (real_T)c11_i + 1.0;
    if ((c11_idxA[(int32_T)c11_b_i - 1] < 1) || (c11_idxA[(int32_T)c11_b_i - 1] >
         1)) {
      emlrtDynamicBoundsCheckR2012b(c11_idxA[(int32_T)c11_b_i - 1], 1, 1,
        &c11_d_emlrtBCI, &c11_f_st);
    }

    c11_a[(int32_T)c11_b_i - 1] = c11_c_varargin_1;
  }

  c11_e_st.site = &c11_k_emlrtRSI;
  c11_f_st.site = &c11_m_emlrtRSI;
  c11_tooBig = true;
  for (c11_c_i = 0; c11_c_i < 2; c11_c_i++) {
    c11_tooBig = false;
  }

  if (!c11_tooBig) {
    c11_modeFlag = true;
  } else {
    c11_modeFlag = false;
  }

  if (c11_modeFlag) {
    c11_b_modeFlag = true;
  } else {
    c11_b_modeFlag = false;
  }

  c11_c_modeFlag = c11_b_modeFlag;
  if (c11_c_modeFlag) {
    for (c11_i1 = 0; c11_i1 < 2; c11_i1++) {
      c11_padSizeT[c11_i1] = 13.0 + -12.0 * (real_T)c11_i1;
    }

    for (c11_i3 = 0; c11_i3 < 2; c11_i3++) {
      c11_outSizeT[c11_i3] = 1.0;
    }

    for (c11_i5 = 0; c11_i5 < 2; c11_i5++) {
      c11_connDimsT[c11_i5] = 13.0 + -12.0 * (real_T)c11_i5;
    }

    ippfilter_real64(&c11_a[0], &c11_dx, &c11_outSizeT[0], 2.0, &c11_padSizeT[0],
                     &c11_kernel[0], &c11_connDimsT[0], true);
  } else {
    for (c11_d_i = 0; c11_d_i < 13; c11_d_i++) {
      c11_conn[c11_d_i] = true;
    }

    for (c11_i2 = 0; c11_i2 < 2; c11_i2++) {
      c11_padSizeT[c11_i2] = 13.0 + -12.0 * (real_T)c11_i2;
    }

    for (c11_i4 = 0; c11_i4 < 2; c11_i4++) {
      c11_outSizeT[c11_i4] = 1.0;
    }

    for (c11_i6 = 0; c11_i6 < 2; c11_i6++) {
      c11_connDimsT[c11_i6] = 13.0 + -12.0 * (real_T)c11_i6;
    }

    for (c11_i7 = 0; c11_i7 < 2; c11_i7++) {
      c11_startT[c11_i7] = 6.0 + -6.0 * (real_T)c11_i7;
    }

    imfilter_real64(&c11_a[0], &c11_dx, 2.0, &c11_outSizeT[0], 2.0,
                    &c11_padSizeT[0], &c11_kernel[0], 13.0, &c11_conn[0], 2.0,
                    &c11_connDimsT[0], &c11_startT[0], 2.0, true, true);
  }

  c11_d_st.site = &c11_g_emlrtRSI;
  c11_d_varargin_1 = c11_dx;
  c11_e_st.site = &c11_j_emlrtRSI;
  c11_b_a_tmp = c11_d_varargin_1;
  c11_f_st.site = &c11_l_emlrtRSI;
  c11_e_varargin_1 = c11_b_a_tmp;
  for (c11_j = 0; c11_j < 13; c11_j++) {
    c11_b_j = (real_T)c11_j + 1.0;
    c11_i8 = c11_b_idxA[(int32_T)c11_b_j + 12];
    if ((c11_i8 < 1) || (c11_i8 > 1)) {
      emlrtDynamicBoundsCheckR2012b(c11_i8, 1, 1, &c11_e_emlrtBCI, &c11_f_st);
    }

    c11_a[(int32_T)c11_b_j - 1] = c11_e_varargin_1;
  }

  c11_e_st.site = &c11_k_emlrtRSI;
  c11_f_st.site = &c11_m_emlrtRSI;
  c11_b_tooBig = true;
  for (c11_e_i = 0; c11_e_i < 2; c11_e_i++) {
    c11_b_tooBig = false;
  }

  if (!c11_b_tooBig) {
    c11_d_modeFlag = true;
  } else {
    c11_d_modeFlag = false;
  }

  if (c11_d_modeFlag) {
    c11_e_modeFlag = true;
  } else {
    c11_e_modeFlag = false;
  }

  c11_f_modeFlag = c11_e_modeFlag;
  if (c11_f_modeFlag) {
    for (c11_i10 = 0; c11_i10 < 2; c11_i10++) {
      c11_padSizeT[c11_i10] = 1.0 + 12.0 * (real_T)c11_i10;
    }

    for (c11_i12 = 0; c11_i12 < 2; c11_i12++) {
      c11_outSizeT[c11_i12] = 1.0;
    }

    for (c11_i14 = 0; c11_i14 < 2; c11_i14++) {
      c11_connDimsT[c11_i14] = 1.0 + 12.0 * (real_T)c11_i14;
    }

    ippfilter_real64(&c11_a[0], &c11_dx, &c11_outSizeT[0], 2.0, &c11_padSizeT[0],
                     &c11_b_kernel[0], &c11_connDimsT[0], true);
  } else {
    for (c11_i9 = 0; c11_i9 < 2; c11_i9++) {
      c11_padSizeT[c11_i9] = 1.0 + 12.0 * (real_T)c11_i9;
    }

    for (c11_i11 = 0; c11_i11 < 2; c11_i11++) {
      c11_outSizeT[c11_i11] = 1.0;
    }

    for (c11_i13 = 0; c11_i13 < 2; c11_i13++) {
      c11_connDimsT[c11_i13] = 1.0 + 12.0 * (real_T)c11_i13;
    }

    for (c11_i15 = 0; c11_i15 < 2; c11_i15++) {
      c11_startT[c11_i15] = 6.0 * (real_T)c11_i15;
    }

    imfilter_real64(&c11_a[0], &c11_dx, 2.0, &c11_outSizeT[0], 2.0,
                    &c11_padSizeT[0], &c11_nonZeroKernel[0], 12.0, &c11_b_conn[0],
                    2.0, &c11_connDimsT[0], &c11_startT[0], 2.0, true, true);
  }

  c11_d_st.site = &c11_h_emlrtRSI;
  c11_f_varargin_1 = c11_I;
  c11_e_st.site = &c11_j_emlrtRSI;
  c11_c_a_tmp = c11_f_varargin_1;
  c11_f_st.site = &c11_l_emlrtRSI;
  c11_g_varargin_1 = c11_c_a_tmp;
  for (c11_c_j = 0; c11_c_j < 13; c11_c_j++) {
    c11_d_j = (real_T)c11_c_j + 1.0;
    c11_i16 = c11_b_idxA[(int32_T)c11_d_j + 12];
    if ((c11_i16 < 1) || (c11_i16 > 1)) {
      emlrtDynamicBoundsCheckR2012b(c11_i16, 1, 1, &c11_e_emlrtBCI, &c11_f_st);
    }

    c11_a[(int32_T)c11_d_j - 1] = c11_g_varargin_1;
  }

  c11_e_st.site = &c11_k_emlrtRSI;
  c11_f_st.site = &c11_m_emlrtRSI;
  c11_c_tooBig = true;
  for (c11_f_i = 0; c11_f_i < 2; c11_f_i++) {
    c11_c_tooBig = false;
  }

  if (!c11_c_tooBig) {
    c11_g_modeFlag = true;
  } else {
    c11_g_modeFlag = false;
  }

  if (c11_g_modeFlag) {
    c11_h_modeFlag = true;
  } else {
    c11_h_modeFlag = false;
  }

  c11_i_modeFlag = c11_h_modeFlag;
  if (c11_i_modeFlag) {
    for (c11_i18 = 0; c11_i18 < 2; c11_i18++) {
      c11_padSizeT[c11_i18] = 1.0 + 12.0 * (real_T)c11_i18;
    }

    for (c11_i20 = 0; c11_i20 < 2; c11_i20++) {
      c11_outSizeT[c11_i20] = 1.0;
    }

    for (c11_i22 = 0; c11_i22 < 2; c11_i22++) {
      c11_connDimsT[c11_i22] = 1.0 + 12.0 * (real_T)c11_i22;
    }

    ippfilter_real64(&c11_a[0], &c11_dy, &c11_outSizeT[0], 2.0, &c11_padSizeT[0],
                     &c11_c_kernel[0], &c11_connDimsT[0], true);
  } else {
    for (c11_i17 = 0; c11_i17 < 13; c11_i17++) {
      c11_conn[c11_i17] = true;
    }

    for (c11_i19 = 0; c11_i19 < 2; c11_i19++) {
      c11_padSizeT[c11_i19] = 1.0 + 12.0 * (real_T)c11_i19;
    }

    for (c11_i21 = 0; c11_i21 < 2; c11_i21++) {
      c11_outSizeT[c11_i21] = 1.0;
    }

    for (c11_i23 = 0; c11_i23 < 2; c11_i23++) {
      c11_connDimsT[c11_i23] = 1.0 + 12.0 * (real_T)c11_i23;
    }

    for (c11_i24 = 0; c11_i24 < 2; c11_i24++) {
      c11_startT[c11_i24] = 6.0 * (real_T)c11_i24;
    }

    imfilter_real64(&c11_a[0], &c11_dy, 2.0, &c11_outSizeT[0], 2.0,
                    &c11_padSizeT[0], &c11_kernel[0], 13.0, &c11_conn[0], 2.0,
                    &c11_connDimsT[0], &c11_startT[0], 2.0, true, true);
  }

  c11_d_st.site = &c11_i_emlrtRSI;
  c11_h_varargin_1 = c11_dy;
  c11_e_st.site = &c11_j_emlrtRSI;
  c11_d_a_tmp = c11_h_varargin_1;
  c11_f_st.site = &c11_l_emlrtRSI;
  c11_i_varargin_1 = c11_d_a_tmp;
  for (c11_g_i = 0; c11_g_i < 13; c11_g_i++) {
    c11_h_i = (real_T)c11_g_i + 1.0;
    if ((c11_idxA[(int32_T)c11_h_i - 1] < 1) || (c11_idxA[(int32_T)c11_h_i - 1] >
         1)) {
      emlrtDynamicBoundsCheckR2012b(c11_idxA[(int32_T)c11_h_i - 1], 1, 1,
        &c11_d_emlrtBCI, &c11_f_st);
    }

    c11_a[(int32_T)c11_h_i - 1] = c11_i_varargin_1;
  }

  c11_e_st.site = &c11_k_emlrtRSI;
  c11_f_st.site = &c11_m_emlrtRSI;
  c11_d_tooBig = true;
  for (c11_i_i = 0; c11_i_i < 2; c11_i_i++) {
    c11_d_tooBig = false;
  }

  if (!c11_d_tooBig) {
    c11_j_modeFlag = true;
  } else {
    c11_j_modeFlag = false;
  }

  if (c11_j_modeFlag) {
    c11_k_modeFlag = true;
  } else {
    c11_k_modeFlag = false;
  }

  c11_l_modeFlag = c11_k_modeFlag;
  if (c11_l_modeFlag) {
    for (c11_i26 = 0; c11_i26 < 2; c11_i26++) {
      c11_padSizeT[c11_i26] = 13.0 + -12.0 * (real_T)c11_i26;
    }

    for (c11_i28 = 0; c11_i28 < 2; c11_i28++) {
      c11_outSizeT[c11_i28] = 1.0;
    }

    for (c11_i30 = 0; c11_i30 < 2; c11_i30++) {
      c11_connDimsT[c11_i30] = 13.0 + -12.0 * (real_T)c11_i30;
    }

    ippfilter_real64(&c11_a[0], &c11_dy, &c11_outSizeT[0], 2.0, &c11_padSizeT[0],
                     &c11_d_kernel[0], &c11_connDimsT[0], true);
  } else {
    for (c11_i25 = 0; c11_i25 < 2; c11_i25++) {
      c11_padSizeT[c11_i25] = 13.0 + -12.0 * (real_T)c11_i25;
    }

    for (c11_i27 = 0; c11_i27 < 2; c11_i27++) {
      c11_outSizeT[c11_i27] = 1.0;
    }

    for (c11_i29 = 0; c11_i29 < 2; c11_i29++) {
      c11_connDimsT[c11_i29] = 13.0 + -12.0 * (real_T)c11_i29;
    }

    for (c11_i31 = 0; c11_i31 < 2; c11_i31++) {
      c11_startT[c11_i31] = 6.0 + -6.0 * (real_T)c11_i31;
    }

    imfilter_real64(&c11_a[0], &c11_dy, 2.0, &c11_outSizeT[0], 2.0,
                    &c11_padSizeT[0], &c11_nonZeroKernel[0], 12.0, &c11_c_conn[0],
                    2.0, &c11_connDimsT[0], &c11_startT[0], 2.0, true, true);
  }

  c11_x = c11_dx;
  c11_y = c11_dy;
  c11_b_a = c11_x;
  c11_b = c11_y;
  c11_b_x = c11_b_a;
  c11_b_y = c11_b;
  c11_x1 = c11_b_x;
  c11_x2 = c11_b_y;
  c11_c_a = c11_x1;
  c11_b_b = c11_x2;
  c11_magGrad = muDoubleScalarHypot(c11_c_a, c11_b_b);
  if (c11_magGrad > 0.0) {
    c11_magGrad /= c11_magGrad;
  }

  c11_c_st.site = &c11_e_emlrtRSI;
  c11_b_magGrad = c11_magGrad;
  c11_d_st.site = &c11_q_emlrtRSI;
  c11_j_varargin_1 = c11_b_magGrad;
  c11_e_st.site = &c11_r_emlrtRSI;
  c11_d_a = c11_j_varargin_1;
  c11_f_st.site = &c11_s_emlrtRSI;
  c11_out = 1.0;
  getnumcores(&c11_out);
  c11_img = c11_d_a;
  for (c11_i32 = 0; c11_i32 < 64; c11_i32++) {
    c11_counts[c11_i32] = 0.0;
  }

  c11_nanFlag = false;
  c11_c_x = c11_img;
  c11_c_b = muDoubleScalarIsNaN(c11_c_x);
  if (c11_c_b) {
    c11_nanFlag = true;
    c11_idx = 0.0;
  } else {
    c11_idx = c11_img * 63.0 + 0.5;
  }

  if (c11_idx > 63.0) {
    c11_counts[63] = 1.0;
  } else {
    c11_d_x = c11_img;
    c11_d_b = muDoubleScalarIsInf(c11_d_x);
    if (c11_d_b) {
      c11_counts[63] = 1.0;
    } else {
      c11_e_a = c11_idx;
      c11_c = (int32_T)c11_e_a;
      c11_counts[c11_c] = 1.0;
    }
  }

  if (c11_nanFlag) {
    c11_f_st.site = &c11_t_emlrtRSI;
    c11_warning(chartInstance, &c11_f_st);
  }

  c11_sum = 0.0;
  c11_b_idx = 1;
  while ((!(c11_sum > 0.7)) && ((real_T)c11_b_idx <= 64.0)) {
    c11_sum += c11_counts[c11_b_idx - 1];
    c11_i33 = c11_b_idx + 1;
    c11_covSaturation = false;
    if (c11_i33 > 127) {
      c11_covSaturation = true;
      c11_i33 = 127;
    } else if (c11_i33 < -128) {
      c11_covSaturation = true;
      c11_i33 = -128;
    }

    covrtSaturationUpdateFcn(chartInstance->c11_covrtInstance, 4, 0, 0, 0,
      c11_covSaturation);
    c11_b_idx = (int8_T)c11_i33;
  }

  if (((real_T)c11_b_idx > 64.0) && (!(c11_sum > 0.7))) {
    c11_highThresh_size[0] = 0;
    c11_lowThresh_size[0] = 0;
  } else {
    c11_highThresh_size[0] = 1;
    c11_lowThresh_size[0] = 1;
  }

  c11_i34 = 1;
  if ((c11_i34 < 1) || (c11_i34 > c11_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c11_i34, 1, c11_lowThresh_size[0],
      &c11_b_emlrtBCI, &c11_b_st);
  }

  c11_i35 = 1;
  if ((c11_i35 < 1) || (c11_i35 > c11_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c11_i35, 1, c11_highThresh_size[0],
      &c11_c_emlrtBCI, &c11_b_st);
  }

  c11_b_st.site = &c11_b_emlrtRSI;
  c11_isDone = false;
  c11_peakIdx = 0;
  while (!c11_isDone) {
    c11_c_st.site = &c11_v_emlrtRSI;
    c11_d_st.site = &c11_w_emlrtRSI;
    c11_peakIdx++;
    if ((c11_peakIdx < 1) || (c11_peakIdx > 2)) {
      emlrtDynamicBoundsCheckR2012b(c11_peakIdx, 1, 2, &c11_f_emlrtBCI,
        &c11_b_st);
    }

    c11_peakCoordinates[c11_peakIdx - 1] = 1.0;
    c11_peakCoordinates[c11_peakIdx + 1] = 1.0;
    c11_isDone = (c11_peakIdx == 2);
  }

  if (c11_peakIdx == 0) {
    c11_P_size[0] = 0;
    c11_P_size[1] = 0;
  } else {
    c11_P_size[0] = c11_peakIdx;
    c11_P_size[1] = 2;
    for (c11_i36 = 0; c11_i36 < 2; c11_i36++) {
      c11_loop_ub = c11_peakIdx - 1;
      for (c11_i38 = 0; c11_i38 <= c11_loop_ub; c11_i38++) {
        c11_P_data[c11_i38 + c11_P_size[0] * c11_i36] =
          c11_peakCoordinates[c11_i38 + (c11_i36 << 1)];
      }
    }
  }

  c11_b_st.site = &c11_c_emlrtRSI;
  c11_i37 = 2;
  if ((c11_i37 < 1) || (c11_i37 > c11_P_size[1])) {
    emlrtDynamicBoundsCheckR2012b(c11_i37, 1, c11_P_size[1], &c11_emlrtBCI,
      &c11_b_st);
  }

  c11_i39 = c11_i37 - 1;
  c11_x_size[1] = c11_P_size[0];
  c11_b_loop_ub = c11_P_size[0] - 1;
  for (c11_i40 = 0; c11_i40 <= c11_b_loop_ub; c11_i40++) {
    c11_d = c11_P_data[c11_i40 + c11_P_size[0] * c11_i39];
    if (c11_d != (real_T)(int32_T)muDoubleScalarFloor(c11_d)) {
      emlrtIntegerCheckR2012b(c11_d, &c11_emlrtDCI, &c11_b_st);
    }

    c11_i41 = (int32_T)c11_d;
    if ((c11_i41 < 1) || (c11_i41 > 180)) {
      emlrtDynamicBoundsCheckR2012b(c11_i41, 1, 180, &c11_g_emlrtBCI, &c11_b_st);
    }

    c11_x_data[c11_i40] = -90.0 + (real_T)(c11_i41 - 1);
  }

  c11_e_b = (c11_x_size[1] == 1);
  if (c11_e_b || ((real_T)c11_x_size[1] != 1.0)) {
    c11_b1 = true;
  } else {
    c11_b1 = false;
  }

  if (!c11_b1) {
    c11_c_y = NULL;
    sf_mex_assign(&c11_c_y, sf_mex_create("y", c11_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c11_d_y = NULL;
    sf_mex_assign(&c11_d_y, sf_mex_create("y", c11_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c11_b_st, &c11_c_emlrtMCI, "error", 0U, 2U, 14, c11_c_y, 14,
                sf_mex_call(&c11_b_st, NULL, "getString", 1U, 1U, 14,
      sf_mex_call(&c11_b_st, NULL, "message", 1U, 1U, 14, c11_d_y)));
  }

  c11_vlen = c11_x_size[1];
  c11_b_vlen = c11_vlen;
  c11_b2 = (c11_x_size[1] == 0);
  if (c11_b2 || (c11_b_vlen == 0)) {
    c11_e_y = 0.0;
  } else {
    c11_c_loop_ub = c11_x_size[1] - 1;
    for (c11_i42 = 0; c11_i42 <= c11_c_loop_ub; c11_i42++) {
      c11_b_x_data[c11_i42] = c11_x_data[c11_i42];
    }

    c11_c_vlen = c11_b_vlen;
    c11_d_vlen = c11_c_vlen;
    c11_e_y = c11_sumColumnB(chartInstance, c11_b_x_data, c11_d_vlen);
  }

  c11_b_DegAngle = c11_e_y / (real_T)c11_x_size[1];
  *chartInstance->c11_DegAngle = c11_b_DegAngle;
  c11_do_animation_call_c11_flightControlSystem(chartInstance);
  covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 1U,
                    *chartInstance->c11_DegAngle);
}

static void ext_mode_exec_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c11_update_jit_animation_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c11_do_animation_call_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c11_b_y = NULL;
  const mxArray *c11_c_y = NULL;
  const mxArray *c11_st;
  const mxArray *c11_y = NULL;
  c11_st = NULL;
  c11_st = NULL;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_createcellmatrix(2, 1), false);
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y", chartInstance->c11_DegAngle, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 0, c11_b_y);
  c11_c_y = NULL;
  sf_mex_assign(&c11_c_y, sf_mex_create("y",
    &chartInstance->c11_is_active_c11_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c11_y, 1, c11_c_y);
  sf_mex_assign(&c11_st, c11_y, false);
  return c11_st;
}

static void set_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance, const mxArray *c11_st)
{
  const mxArray *c11_u;
  chartInstance->c11_doneDoubleBufferReInit = true;
  c11_u = sf_mex_dup(c11_st);
  *chartInstance->c11_DegAngle = c11_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 0)), "DegAngle");
  chartInstance->c11_is_active_c11_flightControlSystem = c11_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 1)),
     "is_active_c11_flightControlSystem");
  sf_mex_destroy(&c11_u);
  sf_mex_destroy(&c11_st);
}

static void initSimStructsc11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c11_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c11_nameCaptureInfo = NULL;
  c11_nameCaptureInfo = NULL;
  sf_mex_assign(&c11_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c11_nameCaptureInfo;
}

static void c11_warning(SFc11_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c11_sp)
{
  static char_T c11_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c11_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c11_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c11_st;
  const mxArray *c11_b_y = NULL;
  const mxArray *c11_c_y = NULL;
  const mxArray *c11_y = NULL;
  c11_st.prev = c11_sp;
  c11_st.tls = c11_sp->tls;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", c11_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y", c11_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c11_c_y = NULL;
  sf_mex_assign(&c11_c_y, sf_mex_create("y", c11_msgID, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  c11_st.site = &c11_u_emlrtRSI;
  c11_b_feval(chartInstance, &c11_st, c11_y, c11_feval(chartInstance, &c11_st,
    c11_b_y, c11_c_y));
}

static real_T c11_sumColumnB(SFc11_flightControlSystemInstanceStruct
  *chartInstance, real_T c11_x_data[], int32_T c11_vlen)
{
  real_T c11_y;
  int32_T c11_b_vlen;
  int32_T c11_i;
  int32_T c11_i1;
  int32_T c11_k;
  (void)chartInstance;
  c11_b_vlen = c11_vlen - 1;
  c11_y = c11_x_data[0];
  c11_i = c11_b_vlen;
  c11_i1 = (uint8_T)c11_i - 1;
  for (c11_k = 0; c11_k <= c11_i1; c11_k++) {
    c11_y += c11_x_data[1];
  }

  return c11_y;
}

static real_T c11_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_b_DegAngle, const char_T *c11_identifier)
{
  emlrtMsgIdentifier c11_thisId;
  real_T c11_y;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_y = c11_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_DegAngle),
    &c11_thisId);
  sf_mex_destroy(&c11_b_DegAngle);
  return c11_y;
}

static real_T c11_b_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  real_T c11_d;
  real_T c11_y;
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_d, 1, 0, 0U, 0, 0U, 0);
  c11_y = c11_d;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static uint8_T c11_c_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_b_is_active_c11_flightControlSystem, const
  char_T *c11_identifier)
{
  emlrtMsgIdentifier c11_thisId;
  uint8_T c11_y;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_y = c11_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c11_b_is_active_c11_flightControlSystem), &c11_thisId);
  sf_mex_destroy(&c11_b_is_active_c11_flightControlSystem);
  return c11_y;
}

static uint8_T c11_d_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  uint8_T c11_b_u;
  uint8_T c11_y;
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_b_u, 1, 3, 0U, 0, 0U, 0);
  c11_y = c11_b_u;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_slStringInitializeDynamicBuffers
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c11_chart_data_browse_helper(SFc11_flightControlSystemInstanceStruct
  *chartInstance, int32_T c11_ssIdNumber, const mxArray **c11_mxData, uint8_T
  *c11_isValueTooBig)
{
  real_T c11_d;
  real_T c11_d1;
  *c11_mxData = NULL;
  *c11_mxData = NULL;
  *c11_isValueTooBig = 0U;
  switch (c11_ssIdNumber) {
   case 4U:
    c11_d = *chartInstance->c11_BWimage;
    sf_mex_assign(c11_mxData, sf_mex_create("mxData", &c11_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c11_d1 = *chartInstance->c11_DegAngle;
    sf_mex_assign(c11_mxData, sf_mex_create("mxData", &c11_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static const mxArray *c11_feval(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c11_sp, const mxArray *c11_input0, const
  mxArray *c11_input1)
{
  const mxArray *c11_m = NULL;
  (void)chartInstance;
  c11_m = NULL;
  sf_mex_assign(&c11_m, sf_mex_call(c11_sp, NULL, "feval", 1U, 2U, 14,
    sf_mex_dup(c11_input0), 14, sf_mex_dup(c11_input1)), false);
  sf_mex_destroy(&c11_input0);
  sf_mex_destroy(&c11_input1);
  return c11_m;
}

static void c11_b_feval(SFc11_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c11_sp, const mxArray *c11_input0, const mxArray *c11_input1)
{
  (void)chartInstance;
  sf_mex_call(c11_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c11_input0), 14,
              sf_mex_dup(c11_input1));
  sf_mex_destroy(&c11_input0);
  sf_mex_destroy(&c11_input1);
}

static void init_dsm_address_info(SFc11_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc11_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c11_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c11_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c11_BWimage = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c11_DegAngle = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c11_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4227733026U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(45662177U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3709336162U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1853737985U);
}

mxArray *sf_c11_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,3);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  return(mxcell3p);
}

mxArray *sf_c11_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_real64");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c11_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c11_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB3T9LFj0cyDpF4DyXVLTHfPSc1L5oOKUuUPBgT"
    "L9EPsjCPhDEc0fIH5mcXxicklmWWp8sqFhfFpOZnpGiXN+XklRfk5wZXFJai6S+SAAAEW9HpU="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c11_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "swtMmyjqncV4Ers8kASETNG";
}

static void sf_opaque_initialize_c11_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c11_flightControlSystem
    ((SFc11_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c11_flightControlSystem(void *chartInstanceVar)
{
  enable_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c11_flightControlSystem(void *chartInstanceVar)
{
  disable_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c11_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c11_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c11_flightControlSystem
    ((SFc11_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c11_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c11_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc11_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c11_flightControlSystem
      ((SFc11_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c11_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c11_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c11_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c11_flightControlSystem
      ((SFc11_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc11_flightControlSystem
      ((SFc11_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c11_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWE1v40QYnkal6ord1R6QEAKJ7QGJC9J2AbEHBE0TZwlqthVOC+JSTe039pDxjDsfSYO48jc",
    "QfwBx5WdwhF8BR8QF3nGcbJRmE08iyi7CkutO7Of9ePx+jclWu0PwuIvn968RsoPXXTxrZHy8VK",
    "63Zs7x79vkw3L9zcuERDKGBERoez12RfwOYbMTqmimif8haAafgZbcGiZFW/RkdSwTPVAgIhSQS",
    "2W89GqWWc5Ev2VF5DTrz1MWpWEqLY8PUSCNjwUfPUtvbs0JamwyBZFpAcQmVdImaYvTZDkLygwb",
    "KUR9bTNvrjSY0ObOVd2x3LCcQ3AFUVtoQ5EFvcLf0FADDXPlR7LzV4cTtMxyzqioznVKdQg5Roe",
    "B0zzGv8fWIHuVsFFKlTmElA5AH7F+oV0KqKSdaXz6gglqpGKUBxlvOGkV/T3h6GMHU4L7viP091",
    "AB7eeSCeOZEGELeQ4EveDQhAubeOoN4dK6bDhjMATl9357DTkARRM4Fn42F+8ouCqCcppLFbGGZ",
    "XBGVT3C2NUQ+9UNTDodUgxH6KIYLywUFLd1V7EBxoZvrWu79F+r1tlsHP16LWyhNxiAd1xN9bYi",
    "0aCcaz9sV+ZHMABe6G9SQ9fAjvV7gLVmcVdidLhq41mxrGCYCSW2IUXMqkflYA5VNLYn2KQqwFn",
    "m0gBipHlq+lTQqjyy2sisgSWneXRUUd91bFsYUD0aQeUeoyjTgAYXceWpN2baJRKikSVTeFlZwj",
    "gH14IS3bOiOZSqjxz7NrOnXLlM8ENDnGBhNlAUuQCj+4xyW9HmTCeYPxgepxqrrJ9exLr8WQsc0",
    "SiF2HVOxqGDdRYFVH3F2rX8Ono7YGbUBB0pllfNJIsFHZuuY6k7yuFU9IUcipaSWVhOXkviCgCr",
    "BlWCieQQW7gatdD4alYruOwW1d13yHE8U8PphYuNxyCwGzpf3dRAI8yqQOCIjAZtgg3Z1zjECM2",
    "0wUY9Grf6cd9z8/sn5On8vr1gfn91Zn6/V66j/f3zHmdJ6iqNUZKHIxSeFfIezMi7XWE/MLFjGY",
    "5cw5EpbnJ9ewa/tUAvmbnO67tVW25nDf/bKnEHM7g7c3q253A7JWd//bz3be2t317/4NPvfvjzx",
    "1/vbKL/p5rffutuuX5jMjdNq/TgWiFbNx700HSy0VeXIjp7L1D6Ub8eBt0njwt5uyvsrc3ZO/n9",
    "vpvVMImLmqCidlzu29ya2vF+wsl/NGPvzgo+bs3EEyG/f7wZ/pWDefwivnbn+HLrJiR1kXCYjd/",
    "17bh/sBl+rP+LFX7szfmxV8zw59RVajh/VkW4nqfrxr0vjtww7kWx839e/nn/qvS9m8aRG8Zt6p",
    "9vP3/Rn3+wpP6SuefvPcd+LKv3PnPd8+bXL8Rv7nqzXH80/a7QSBmPF+xsytu4+egtuvsfie8/P",
    "PmbzJmB46/8AP3lu3VB+Qi3MuOtYvnziXLfEae3FFC9eL/4b/QTsmDfsGi+uj2X3249ZCKWQ/3O",
    "/sP3H27Sn/4G1LUhrA==",
    ""
  };

  static char newstr [1521] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c11_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c11_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2233585919U));
  ssSetChecksum1(S,(468657410U));
  ssSetChecksum2(S,(2912832055U));
  ssSetChecksum3(S,(232370170U));
}

static void mdlRTW_c11_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c11_flightControlSystem(SimStruct *S)
{
  SFc11_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc11_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc11_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc11_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c11_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c11_flightControlSystem;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c11_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c11_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c11_flightControlSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c11_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c11_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c11_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c11_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c11_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c11_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c11_flightControlSystem;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c11_JITStateAnimation,
    chartInstance->c11_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c11_flightControlSystem(chartInstance);
}

void c11_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c11_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c11_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c11_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c11_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
