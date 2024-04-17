#include "rtwtypes.h"
#include "rollingMoment_RBVyTNcC.h"
#include "mwmathutil.h"

void rollingMoment_RBVyTNcC(const real_T Fx[4], const real_T Vcx[4], const
  real_T Fz[4], const real_T press[4], const real_T b_gamma[4], real_T Vo,
  real_T Ro, real_T Fzo, real_T pio, real_T b_QSY1, real_T b_QSY2, real_T b_QSY3,
  real_T b_QSY4, real_T b_QSY5, real_T b_QSY6, real_T b_QSY7, real_T b_QSY8,
  const real_T lam_My[4], real_T My[4])
{
  real_T Ro_p;
  real_T x;
  real_T x_tmp;
  Ro_p = -Ro * Fzo;
  x_tmp = Fz[0] / Fzo;
  x = Vcx[0] / Vo;
  My[0] = ((((Fx[0] / Fzo * b_QSY2 + b_QSY1) + b_QSY3 * muDoubleScalarAbs(x)) +
            b_QSY4 * muDoubleScalarPower(x, 4.0)) + (b_QSY6 * x_tmp + b_QSY5) *
           b_gamma[0] * b_gamma[0]) * (Ro_p * lam_My[0]) * (muDoubleScalarPower
    (muDoubleScalarMax(press[0] / pio, 0.05), b_QSY8) * muDoubleScalarPower
    (muDoubleScalarMax(x_tmp, 0.05), b_QSY7));
  x_tmp = Fz[1] / Fzo;
  x = Vcx[1] / Vo;
  My[1] = ((((Fx[1] / Fzo * b_QSY2 + b_QSY1) + b_QSY3 * muDoubleScalarAbs(x)) +
            b_QSY4 * muDoubleScalarPower(x, 4.0)) + (b_QSY6 * x_tmp + b_QSY5) *
           b_gamma[1] * b_gamma[1]) * (Ro_p * lam_My[1]) * (muDoubleScalarPower
    (muDoubleScalarMax(press[1] / pio, 0.05), b_QSY8) * muDoubleScalarPower
    (muDoubleScalarMax(x_tmp, 0.05), b_QSY7));
  x_tmp = Fz[2] / Fzo;
  x = Vcx[2] / Vo;
  My[2] = ((((Fx[2] / Fzo * b_QSY2 + b_QSY1) + b_QSY3 * muDoubleScalarAbs(x)) +
            b_QSY4 * muDoubleScalarPower(x, 4.0)) + (b_QSY6 * x_tmp + b_QSY5) *
           b_gamma[2] * b_gamma[2]) * (Ro_p * lam_My[2]) * (muDoubleScalarPower
    (muDoubleScalarMax(press[2] / pio, 0.05), b_QSY8) * muDoubleScalarPower
    (muDoubleScalarMax(x_tmp, 0.05), b_QSY7));
  x_tmp = Fz[3] / Fzo;
  x = Vcx[3] / Vo;
  My[3] = ((((Fx[3] / Fzo * b_QSY2 + b_QSY1) + b_QSY3 * muDoubleScalarAbs(x)) +
            b_QSY4 * muDoubleScalarPower(x, 4.0)) + (b_QSY6 * x_tmp + b_QSY5) *
           b_gamma[3] * b_gamma[3]) * (Ro_p * lam_My[3]) * (muDoubleScalarPower
    (muDoubleScalarMax(press[3] / pio, 0.05), b_QSY8) * muDoubleScalarPower
    (muDoubleScalarMax(x_tmp, 0.05), b_QSY7));
}
