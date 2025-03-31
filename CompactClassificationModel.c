/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactClassificationModel.c
 *
 * Code generation for function 'CompactClassificationModel'
 *
 */

/* Include files */
#include "CompactClassificationModel.h"
#include "minOrMax.h"
#include "predict_emissions_data.h"
#include "predict_emissions_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void c_CompactClassificationModel_ma(const int obj_ClassNamesLength[4],
                                     const double obj_Prior[4],
                                     const double scores[4],
                                     cell_wrap_4 *labels)
{
  int i;
  int iindx;
  int k;
  boolean_T b[4];
  boolean_T exitg1;
  boolean_T y;
  b[0] = rtIsNaN(scores[0]);
  b[1] = rtIsNaN(scores[1]);
  b[2] = rtIsNaN(scores[2]);
  b[3] = rtIsNaN(scores[3]);
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (!b[k]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  maximum(obj_Prior, &iindx);
  k = obj_ClassNamesLength[iindx - 1];
  labels->f1.size[0] = 1;
  labels->f1.size[1] = k;
  for (i = 0; i < k; i++) {
    labels->f1.data[i] = cv1[(iindx + (i << 2)) - 1];
  }
  if (!y) {
    maximum(scores, &iindx);
    i = iindx;
    if (iindx < 0) {
      i = 0;
    }
    k = obj_ClassNamesLength[i - 1];
    if (iindx < 0) {
      iindx = 0;
    }
    labels->f1.size[0] = 1;
    labels->f1.size[1] = k;
    for (i = 0; i < k; i++) {
      labels->f1.data[i] = cv1[(iindx + (i << 2)) - 1];
    }
  }
}

/* End of code generation (CompactClassificationModel.c) */
