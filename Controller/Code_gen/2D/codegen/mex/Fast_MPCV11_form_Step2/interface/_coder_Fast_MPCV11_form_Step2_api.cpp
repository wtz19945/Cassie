/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Fast_MPCV11_form_Step2_api.cpp
 *
 * Code generation for function '_coder_Fast_MPCV11_form_Step2_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV11_form_Step2.h"
#include "_coder_Fast_MPCV11_form_Step2_api.h"
#include "Fast_MPCV11_form_Step2_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[6];
static const mxArray *b_emlrt_marshallOut(const real_T u[76]);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Nodes,
  const char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const real_T u[20480]);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *d_emlrt_marshallOut(const real_T u[128]);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *r, const
  char_T *identifier))[2];
static const mxArray *e_emlrt_marshallOut(const real_T u[25600]);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *states,
  const char_T *identifier))[6];
static const mxArray *emlrt_marshallOut(const real_T u[12160]);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2];
static const mxArray *f_emlrt_marshallOut(const real_T u[160]);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *states_ref, const char_T *identifier))[10];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[10];
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *foot_info, const char_T *identifier))[8];
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8];
static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Obs_Info,
  const char_T *identifier))[4];
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[4];
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[6];
static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];
static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[10];
static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8];
static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4];

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[6]
{
  real_T (*y)[6];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const real_T u[76])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv2[1] = { 0 };

  static const int32_T iv3[1] = { 76 };

  y = NULL;
  m1 = emlrtCreateNumericArray(1, iv2, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m1, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m1, *(int32_T (*)[1])&iv3[0], 1);
  emlrtAssign(&y, m1);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Nodes,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(Nodes), &thisId);
  emlrtDestroyArray(&Nodes);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const real_T u[20480])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv4[2] = { 0, 0 };

  static const int32_T iv5[2] = { 128, 160 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv4, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m2, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m2, *(int32_T (*)[2])&iv5[0], 2);
  emlrtAssign(&y, m2);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const real_T u[128])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv6[1] = { 0 };

  static const int32_T iv7[1] = { 128 };

  y = NULL;
  m3 = emlrtCreateNumericArray(1, iv6, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m3, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m3, *(int32_T (*)[1])&iv7[0], 1);
  emlrtAssign(&y, m3);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *r, const
  char_T *identifier))[2]
{
  real_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(r), &thisId);
  emlrtDestroyArray(&r);
  return y;
}
  static const mxArray *e_emlrt_marshallOut(const real_T u[25600])
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv8[2] = { 0, 0 };

  static const int32_T iv9[2] = { 160, 160 };

  y = NULL;
  m4 = emlrtCreateNumericArray(2, iv8, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m4, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m4, *(int32_T (*)[2])&iv9[0], 2);
  emlrtAssign(&y, m4);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *states,
  const char_T *identifier))[6]
{
  real_T (*y)[6];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(states), &thisId);
  emlrtDestroyArray(&states);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[12160])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 76, 160 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, *(int32_T (*)[2])&iv1[0], 2);
  emlrtAssign(&y, m0);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2]
{
  real_T (*y)[2];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *f_emlrt_marshallOut(const real_T u[160])
{
  const mxArray *y;
  const mxArray *m5;
  static const int32_T iv10[2] = { 0, 0 };

  static const int32_T iv11[2] = { 1, 160 };

  y = NULL;
  m5 = emlrtCreateNumericArray(2, iv10, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m5, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m5, *(int32_T (*)[2])&iv11[0], 2);
  emlrtAssign(&y, m5);
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *states_ref, const char_T *identifier))[10]
{
  real_T (*y)[10];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(states_ref), &thisId);
  emlrtDestroyArray(&states_ref);
  return y;
}
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[10]
{
  real_T (*y)[10];
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *foot_info, const char_T *identifier))[8]
{
  real_T (*y)[8];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(foot_info), &thisId);
  emlrtDestroyArray(&foot_info);
  return y;
}
  static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[8]
{
  real_T (*y)[8];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Obs_Info,
  const char_T *identifier))[4]
{
  real_T (*y)[4];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(Obs_Info), &thisId);
  emlrtDestroyArray(&Obs_Info);
  return y;
}
  static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[4]
{
  real_T (*y)[4];
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[6]
{
  real_T (*ret)[6];
  static const int32_T dims[1] = { 6 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[6])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  real_T (*ret)[2];
  static const int32_T dims[1] = { 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[10]
{
  real_T (*ret)[10];
  static const int32_T dims[1] = { 10 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[10])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8]
{
  real_T (*ret)[8];
  static const int32_T dims[1] = { 8 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[8])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4]
{
  real_T (*ret)[4];
  static const int32_T dims[1] = { 4 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[4])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void Fast_MPCV11_form_Step2_api(Fast_MPCV11_form_Step2StackData *SD, const
  mxArray * const prhs[9], const mxArray *plhs[6])
{
  real_T (*Aeq)[12160];
  real_T (*beq)[76];
  real_T (*Aiq)[20480];
  real_T (*biq)[128];
  real_T (*H)[25600];
  real_T (*f)[160];
  real_T (*states)[6];
  real_T Nodes;
  real_T (*r)[2];
  real_T (*qo)[2];
  real_T (*states_ref)[10];
  real_T (*MPC_index)[2];
  real_T (*weights)[10];
  real_T (*foot_info)[8];
  real_T (*Obs_Info)[4];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  Aeq = (real_T (*)[12160])mxMalloc(sizeof(real_T [12160]));
  beq = (real_T (*)[76])mxMalloc(sizeof(real_T [76]));
  Aiq = (real_T (*)[20480])mxMalloc(sizeof(real_T [20480]));
  biq = (real_T (*)[128])mxMalloc(sizeof(real_T [128]));
  H = (real_T (*)[25600])mxMalloc(sizeof(real_T [25600]));
  f = (real_T (*)[160])mxMalloc(sizeof(real_T [160]));

  /* Marshall function inputs */
  states = emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[0]), "states");
  Nodes = c_emlrt_marshallIn(&st, emlrtAliasP((const mxArray *)prhs[1]), "Nodes");
  r = e_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[2]), "r");
  qo = e_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[3]), "qo");
  states_ref = g_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[4]),
    "states_ref");
  MPC_index = e_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[5]),
    "MPC_index");
  weights = g_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[6]),
    "weights");
  foot_info = i_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[7]),
    "foot_info");
  Obs_Info = k_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[8]),
    "Obs_Info");

  /* Invoke the target function */
  Fast_MPCV11_form_Step2(SD, &st, *states, Nodes, *r, *qo, *states_ref,
    *MPC_index, *weights, *foot_info, *Obs_Info, *Aeq, *beq, *Aiq, *biq, *H, *f);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*Aeq);
  plhs[1] = b_emlrt_marshallOut(*beq);
  plhs[2] = c_emlrt_marshallOut(*Aiq);
  plhs[3] = d_emlrt_marshallOut(*biq);
  plhs[4] = e_emlrt_marshallOut(*H);
  plhs[5] = f_emlrt_marshallOut(*f);
}

/* End of code generation (_coder_Fast_MPCV11_form_Step2_api.cpp) */
