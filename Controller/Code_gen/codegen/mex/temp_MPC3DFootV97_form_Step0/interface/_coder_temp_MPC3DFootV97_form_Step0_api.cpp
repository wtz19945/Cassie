/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_temp_MPC3DFootV97_form_Step0_api.cpp
 *
 * Code generation for function '_coder_temp_MPC3DFootV97_form_Step0_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "temp_MPC3DFootV97_form_Step0.h"
#include "_coder_temp_MPC3DFootV97_form_Step0_api.h"
#include "temp_MPC3DFootV97_form_Step0_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8];
static const mxArray *b_emlrt_marshallOut(const real_T u[112]);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Nodes,
  const char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const real_T u[32318]);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *d_emlrt_marshallOut(const real_T u[143]);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *r, const
  char_T *identifier))[4];
static const mxArray *e_emlrt_marshallOut(const real_T u[51076]);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *states,
  const char_T *identifier))[8];
static const mxArray *emlrt_marshallOut(const real_T u[25312]);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[4];
static const mxArray *f_emlrt_marshallOut(const real_T u[226]);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *qo,
  const char_T *identifier))[3];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *states_ref, const char_T *identifier))[58];
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[58];
static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *MPC_index, const char_T *identifier))[2];
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2];
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *weights,
  const char_T *identifier))[16];
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[16];
static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *foot_obs_info, const char_T *identifier))[23];
static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[23];
static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[8];
static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4];
static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[58];
static real_T (*v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];
static real_T (*w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[16];
static real_T (*x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[23];

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[8]
{
  real_T (*y)[8];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const real_T u[112])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv2[1] = { 0 };

  static const int32_T iv3[1] = { 112 };

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

static const mxArray *c_emlrt_marshallOut(const real_T u[32318])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv4[2] = { 0, 0 };

  static const int32_T iv5[2] = { 143, 226 };

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
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const real_T u[143])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv6[1] = { 0 };

  static const int32_T iv7[1] = { 143 };

  y = NULL;
  m3 = emlrtCreateNumericArray(1, iv6, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m3, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m3, *(int32_T (*)[1])&iv7[0], 1);
  emlrtAssign(&y, m3);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *r, const
  char_T *identifier))[4]
{
  real_T (*y)[4];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(r), &thisId);
  emlrtDestroyArray(&r);
  return y;
}
  static const mxArray *e_emlrt_marshallOut(const real_T u[51076])
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv8[2] = { 0, 0 };

  static const int32_T iv9[2] = { 226, 226 };

  y = NULL;
  m4 = emlrtCreateNumericArray(2, iv8, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m4, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m4, *(int32_T (*)[2])&iv9[0], 2);
  emlrtAssign(&y, m4);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *states,
  const char_T *identifier))[8]
{
  real_T (*y)[8];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(states), &thisId);
  emlrtDestroyArray(&states);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[25312])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 112, 226 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, *(int32_T (*)[2])&iv1[0], 2);
  emlrtAssign(&y, m0);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[4]
{
  real_T (*y)[4];
  y = s_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *f_emlrt_marshallOut(const real_T u[226])
{
  const mxArray *y;
  const mxArray *m5;
  static const int32_T iv10[2] = { 0, 0 };

  static const int32_T iv11[2] = { 1, 226 };

  y = NULL;
  m5 = emlrtCreateNumericArray(2, iv10, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m5, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m5, *(int32_T (*)[2])&iv11[0], 2);
  emlrtAssign(&y, m5);
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *qo,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(qo), &thisId);
  emlrtDestroyArray(&qo);
  return y;
}
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *states_ref, const char_T *identifier))[58]
{
  real_T (*y)[58];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(states_ref), &thisId);
  emlrtDestroyArray(&states_ref);
  return y;
}
  static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[58]
{
  real_T (*y)[58];
  y = u_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *MPC_index, const char_T *identifier))[2]
{
  real_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(MPC_index), &thisId);
  emlrtDestroyArray(&MPC_index);
  return y;
}
  static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[2]
{
  real_T (*y)[2];
  y = v_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *weights,
  const char_T *identifier))[16]
{
  real_T (*y)[16];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = n_emlrt_marshallIn(sp, emlrtAlias(weights), &thisId);
  emlrtDestroyArray(&weights);
  return y;
}
  static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[16]
{
  real_T (*y)[16];
  y = w_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *foot_obs_info, const char_T *identifier))[23]
{
  real_T (*y)[23];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = p_emlrt_marshallIn(sp, emlrtAlias(foot_obs_info), &thisId);
  emlrtDestroyArray(&foot_obs_info);
  return y;
}
  static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[23]
{
  real_T (*y)[23];
  y = x_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
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
  static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4]
{
  real_T (*ret)[4];
  static const int32_T dims[1] = { 4 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[4])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  static const int32_T dims[1] = { 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[3])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[58]
{
  real_T (*ret)[58];
  static const int32_T dims[1] = { 58 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[58])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  real_T (*ret)[2];
  static const int32_T dims[1] = { 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[16]
{
  real_T (*ret)[16];
  static const int32_T dims[1] = { 16 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[16])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[23]
{
  real_T (*ret)[23];
  static const int32_T dims[1] = { 23 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[23])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void temp_MPC3DFootV97_form_Step0_api(c_temp_MPC3DFootV97_form_Step0S *SD, const
  mxArray * const prhs[9], const mxArray *plhs[6])
{
  real_T (*Aeq)[25312];
  real_T (*beq)[112];
  real_T (*Aiq)[32318];
  real_T (*biq)[143];
  real_T (*H)[51076];
  real_T (*f)[226];
  real_T (*states)[8];
  real_T Nodes;
  real_T (*r)[4];
  real_T (*qo)[3];
  real_T (*states_ref)[58];
  real_T (*MPC_index)[2];
  real_T (*weights)[16];
  real_T (*foot_info)[8];
  real_T (*foot_obs_info)[23];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  Aeq = (real_T (*)[25312])mxMalloc(sizeof(real_T [25312]));
  beq = (real_T (*)[112])mxMalloc(sizeof(real_T [112]));
  Aiq = (real_T (*)[32318])mxMalloc(sizeof(real_T [32318]));
  biq = (real_T (*)[143])mxMalloc(sizeof(real_T [143]));
  H = (real_T (*)[51076])mxMalloc(sizeof(real_T [51076]));
  f = (real_T (*)[226])mxMalloc(sizeof(real_T [226]));

  /* Marshall function inputs */
  states = emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[0]), "states");
  Nodes = c_emlrt_marshallIn(&st, emlrtAliasP((const mxArray *)prhs[1]), "Nodes");
  r = e_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[2]), "r");
  qo = g_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[3]), "qo");
  states_ref = i_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[4]),
    "states_ref");
  MPC_index = k_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[5]),
    "MPC_index");
  weights = m_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[6]),
    "weights");
  foot_info = emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[7]),
    "foot_info");
  foot_obs_info = o_emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[8]),
    "foot_obs_info");

  /* Invoke the target function */
  temp_MPC3DFootV97_form_Step0(SD, &st, *states, Nodes, *r, *qo, *states_ref,
    *MPC_index, *weights, *foot_info, *foot_obs_info, *Aeq, *beq, *Aiq, *biq, *H,
    *f);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*Aeq);
  plhs[1] = b_emlrt_marshallOut(*beq);
  plhs[2] = c_emlrt_marshallOut(*Aiq);
  plhs[3] = d_emlrt_marshallOut(*biq);
  plhs[4] = e_emlrt_marshallOut(*H);
  plhs[5] = f_emlrt_marshallOut(*f);
}

/* End of code generation (_coder_temp_MPC3DFootV97_form_Step0_api.cpp) */
