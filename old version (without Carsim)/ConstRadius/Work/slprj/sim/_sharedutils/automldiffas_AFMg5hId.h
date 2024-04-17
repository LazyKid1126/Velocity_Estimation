#ifndef RTW_HEADER_automldiffas_AFMg5hId_h_
#define RTW_HEADER_automldiffas_AFMg5hId_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void automldiffas_AFMg5hId(const real_T u[5], real_T b_bw1, real_T b_bd,
  real_T b_bw2, real_T b_Ndiff, real_T Nl, real_T Nr, real_T shaftSwitch, real_T
  b_Jd, real_T b_Jw1, real_T b_Jw2, real_T b_Jgc, const real_T x[2], real_T y[5],
  real_T xdot[2]);

#endif
