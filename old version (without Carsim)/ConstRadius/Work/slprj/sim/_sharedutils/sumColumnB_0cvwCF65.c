#include "rtwtypes.h"
#include "sumColumnB_0cvwCF65.h"

real_T sumColumnB_0cvwCF65(const real_T x[8])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 7; k++) {
    y += x[k + 1];
  }

  return y;
}
