/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: predictOneWithCache.c
 *
 * MATLAB Coder version            : 24.2
 * C/C++ source code generated on  : 02-Apr-2025 20:52:33
 */

/* Include Files */
#include "predictOneWithCache.h"
#include "CompactClassificationTree.h"
#include "predict_emissions_types.h"
#include "rt_nonfinite.h"
#include "updateCache.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[127]
 *                const double weak_learner_Children[254]
 *                const double weak_learner_CutPoint[127]
 *                const boolean_T weak_learner_NanCutPoints[127]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[508]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void ab_predictOneWithCache(const double X[3], double cachedScore[4],
                            double *cachedWeights, const char combiner[15],
                            const double weak_learner_CutPredictorIndex[127],
                            const double weak_learner_Children[254],
                            const double weak_learner_CutPoint[127],
                            const boolean_T weak_learner_NanCutPoints[127],
                            const int weak_learner_ClassNamesLength[4],
                            const double weak_learner_Cost[16],
                            const double weak_learner_ClassProbability[508],
                            boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  db_CompactClassificationTree_pr(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[219]
 *                const double weak_learner_Children[438]
 *                const double weak_learner_CutPoint[219]
 *                const boolean_T weak_learner_NanCutPoints[219]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[876]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void b_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[219],
                           const double weak_learner_Children[438],
                           const double weak_learner_CutPoint[219],
                           const boolean_T weak_learner_NanCutPoints[219],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[876],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  d_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[123]
 *                const double weak_learner_Children[246]
 *                const double weak_learner_CutPoint[123]
 *                const boolean_T weak_learner_NanCutPoints[123]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[492]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void bb_predictOneWithCache(const double X[3], double cachedScore[4],
                            double *cachedWeights, const char combiner[15],
                            const double weak_learner_CutPredictorIndex[123],
                            const double weak_learner_Children[246],
                            const double weak_learner_CutPoint[123],
                            const boolean_T weak_learner_NanCutPoints[123],
                            const int weak_learner_ClassNamesLength[4],
                            const double weak_learner_Cost[16],
                            const double weak_learner_ClassProbability[492],
                            boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  eb_CompactClassificationTree_pr(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[205]
 *                const double weak_learner_Children[410]
 *                const double weak_learner_CutPoint[205]
 *                const boolean_T weak_learner_NanCutPoints[205]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[820]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void c_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[205],
                           const double weak_learner_Children[410],
                           const double weak_learner_CutPoint[205],
                           const boolean_T weak_learner_NanCutPoints[205],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[820],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  e_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[151]
 *                const double weak_learner_Children[302]
 *                const double weak_learner_CutPoint[151]
 *                const boolean_T weak_learner_NanCutPoints[151]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[604]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void cb_predictOneWithCache(const double X[3], double cachedScore[4],
                            double *cachedWeights, const char combiner[15],
                            const double weak_learner_CutPredictorIndex[151],
                            const double weak_learner_Children[302],
                            const double weak_learner_CutPoint[151],
                            const boolean_T weak_learner_NanCutPoints[151],
                            const int weak_learner_ClassNamesLength[4],
                            const double weak_learner_Cost[16],
                            const double weak_learner_ClassProbability[604],
                            boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  fb_CompactClassificationTree_pr(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[245]
 *                const double weak_learner_Children[490]
 *                const double weak_learner_CutPoint[245]
 *                const boolean_T weak_learner_NanCutPoints[245]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[980]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void d_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[245],
                           const double weak_learner_Children[490],
                           const double weak_learner_CutPoint[245],
                           const boolean_T weak_learner_NanCutPoints[245],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[980],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  f_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[153]
 *                const double weak_learner_Children[306]
 *                const double weak_learner_CutPoint[153]
 *                const boolean_T weak_learner_NanCutPoints[153]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[612]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void db_predictOneWithCache(const double X[3], double cachedScore[4],
                            double *cachedWeights, const char combiner[15],
                            const double weak_learner_CutPredictorIndex[153],
                            const double weak_learner_Children[306],
                            const double weak_learner_CutPoint[153],
                            const boolean_T weak_learner_NanCutPoints[153],
                            const int weak_learner_ClassNamesLength[4],
                            const double weak_learner_Cost[16],
                            const double weak_learner_ClassProbability[612],
                            boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  gb_CompactClassificationTree_pr(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[221]
 *                const double weak_learner_Children[442]
 *                const double weak_learner_CutPoint[221]
 *                const boolean_T weak_learner_NanCutPoints[221]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[884]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void e_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[221],
                           const double weak_learner_Children[442],
                           const double weak_learner_CutPoint[221],
                           const boolean_T weak_learner_NanCutPoints[221],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[884],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  g_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[131]
 *                const double weak_learner_Children[262]
 *                const double weak_learner_CutPoint[131]
 *                const boolean_T weak_learner_NanCutPoints[131]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[524]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void eb_predictOneWithCache(const double X[3], double cachedScore[4],
                            double *cachedWeights, const char combiner[15],
                            const double weak_learner_CutPredictorIndex[131],
                            const double weak_learner_Children[262],
                            const double weak_learner_CutPoint[131],
                            const boolean_T weak_learner_NanCutPoints[131],
                            const int weak_learner_ClassNamesLength[4],
                            const double weak_learner_Cost[16],
                            const double weak_learner_ClassProbability[524],
                            boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  hb_CompactClassificationTree_pr(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[235]
 *                const double weak_learner_Children[470]
 *                const double weak_learner_CutPoint[235]
 *                const boolean_T weak_learner_NanCutPoints[235]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[940]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void f_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[235],
                           const double weak_learner_Children[470],
                           const double weak_learner_CutPoint[235],
                           const boolean_T weak_learner_NanCutPoints[235],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[940],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  h_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[165]
 *                const double weak_learner_Children[330]
 *                const double weak_learner_CutPoint[165]
 *                const boolean_T weak_learner_NanCutPoints[165]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[660]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void fb_predictOneWithCache(const double X[3], double cachedScore[4],
                            double *cachedWeights, const char combiner[15],
                            const double weak_learner_CutPredictorIndex[165],
                            const double weak_learner_Children[330],
                            const double weak_learner_CutPoint[165],
                            const boolean_T weak_learner_NanCutPoints[165],
                            const int weak_learner_ClassNamesLength[4],
                            const double weak_learner_Cost[16],
                            const double weak_learner_ClassProbability[660],
                            boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  ib_CompactClassificationTree_pr(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[233]
 *                const double weak_learner_Children[466]
 *                const double weak_learner_CutPoint[233]
 *                const boolean_T weak_learner_NanCutPoints[233]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[932]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void g_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[233],
                           const double weak_learner_Children[466],
                           const double weak_learner_CutPoint[233],
                           const boolean_T weak_learner_NanCutPoints[233],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[932],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  i_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[149]
 *                const double weak_learner_Children[298]
 *                const double weak_learner_CutPoint[149]
 *                const boolean_T weak_learner_NanCutPoints[149]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[596]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void gb_predictOneWithCache(const double X[3], double cachedScore[4],
                            double *cachedWeights, const char combiner[15],
                            const double weak_learner_CutPredictorIndex[149],
                            const double weak_learner_Children[298],
                            const double weak_learner_CutPoint[149],
                            const boolean_T weak_learner_NanCutPoints[149],
                            const int weak_learner_ClassNamesLength[4],
                            const double weak_learner_Cost[16],
                            const double weak_learner_ClassProbability[596],
                            boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  jb_CompactClassificationTree_pr(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[243]
 *                const double weak_learner_Children[486]
 *                const double weak_learner_CutPoint[243]
 *                const boolean_T weak_learner_NanCutPoints[243]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[972]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void h_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[243],
                           const double weak_learner_Children[486],
                           const double weak_learner_CutPoint[243],
                           const boolean_T weak_learner_NanCutPoints[243],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[972],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  j_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[227]
 *                const double weak_learner_Children[454]
 *                const double weak_learner_CutPoint[227]
 *                const boolean_T weak_learner_NanCutPoints[227]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[908]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void i_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[227],
                           const double weak_learner_Children[454],
                           const double weak_learner_CutPoint[227],
                           const boolean_T weak_learner_NanCutPoints[227],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[908],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  k_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[257]
 *                const double weak_learner_Children[514]
 *                const double weak_learner_CutPoint[257]
 *                const boolean_T weak_learner_NanCutPoints[257]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[1028]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void j_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[257],
                           const double weak_learner_Children[514],
                           const double weak_learner_CutPoint[257],
                           const boolean_T weak_learner_NanCutPoints[257],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[1028],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  l_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[211]
 *                const double weak_learner_Children[422]
 *                const double weak_learner_CutPoint[211]
 *                const boolean_T weak_learner_NanCutPoints[211]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[844]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void k_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[211],
                           const double weak_learner_Children[422],
                           const double weak_learner_CutPoint[211],
                           const boolean_T weak_learner_NanCutPoints[211],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[844],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  m_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[215]
 *                const double weak_learner_Children[430]
 *                const double weak_learner_CutPoint[215]
 *                const boolean_T weak_learner_NanCutPoints[215]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[860]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void l_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[215],
                           const double weak_learner_Children[430],
                           const double weak_learner_CutPoint[215],
                           const boolean_T weak_learner_NanCutPoints[215],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[860],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  n_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[231]
 *                const double weak_learner_Children[462]
 *                const double weak_learner_CutPoint[231]
 *                const boolean_T weak_learner_NanCutPoints[231]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[924]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void m_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[231],
                           const double weak_learner_Children[462],
                           const double weak_learner_CutPoint[231],
                           const boolean_T weak_learner_NanCutPoints[231],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[924],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  o_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[241]
 *                const double weak_learner_Children[482]
 *                const double weak_learner_CutPoint[241]
 *                const boolean_T weak_learner_NanCutPoints[241]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[964]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void n_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[241],
                           const double weak_learner_Children[482],
                           const double weak_learner_CutPoint[241],
                           const boolean_T weak_learner_NanCutPoints[241],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[964],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  p_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[199]
 *                const double weak_learner_Children[398]
 *                const double weak_learner_CutPoint[199]
 *                const boolean_T weak_learner_NanCutPoints[199]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[796]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void o_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[199],
                           const double weak_learner_Children[398],
                           const double weak_learner_CutPoint[199],
                           const boolean_T weak_learner_NanCutPoints[199],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[796],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  q_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[223]
 *                const double weak_learner_Children[446]
 *                const double weak_learner_CutPoint[223]
 *                const boolean_T weak_learner_NanCutPoints[223]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[892]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void p_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[223],
                           const double weak_learner_Children[446],
                           const double weak_learner_CutPoint[223],
                           const boolean_T weak_learner_NanCutPoints[223],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[892],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  r_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[229]
 *                const double weak_learner_Children[458]
 *                const double weak_learner_CutPoint[229]
 *                const boolean_T weak_learner_NanCutPoints[229]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[916]
 *                boolean_T *cached
 *                boolean_T initCache
 *                double score[4]
 * Return Type  : void
 */
void predictOneWithCache(const double X[3], double cachedScore[4],
                         double *cachedWeights, const char combiner[15],
                         const double weak_learner_CutPredictorIndex[229],
                         const double weak_learner_Children[458],
                         const double weak_learner_CutPoint[229],
                         const boolean_T weak_learner_NanCutPoints[229],
                         const int weak_learner_ClassNamesLength[4],
                         const double weak_learner_Cost[16],
                         const double weak_learner_ClassProbability[916],
                         boolean_T *cached, boolean_T initCache,
                         double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  c_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  if (initCache) {
    cachedScore[0] = 0.0;
    cachedScore[1] = 0.0;
    cachedScore[2] = 0.0;
    cachedScore[3] = 0.0;
  } else {
    int k;
    boolean_T exitg1;
    boolean_T y;
    y = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (rtIsNaN(cachedScore[k])) {
        y = true;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (y) {
      if (rtIsNaN(cachedScore[0])) {
        cachedScore[0] = 0.0;
      }
      if (rtIsNaN(cachedScore[1])) {
        cachedScore[1] = 0.0;
      }
      if (rtIsNaN(cachedScore[2])) {
        cachedScore[2] = 0.0;
      }
      if (rtIsNaN(cachedScore[3])) {
        cachedScore[3] = 0.0;
      }
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[217]
 *                const double weak_learner_Children[434]
 *                const double weak_learner_CutPoint[217]
 *                const boolean_T weak_learner_NanCutPoints[217]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[868]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void q_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[217],
                           const double weak_learner_Children[434],
                           const double weak_learner_CutPoint[217],
                           const boolean_T weak_learner_NanCutPoints[217],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[868],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  s_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[143]
 *                const double weak_learner_Children[286]
 *                const double weak_learner_CutPoint[143]
 *                const boolean_T weak_learner_NanCutPoints[143]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[572]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void r_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[143],
                           const double weak_learner_Children[286],
                           const double weak_learner_CutPoint[143],
                           const boolean_T weak_learner_NanCutPoints[143],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[572],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  u_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[155]
 *                const double weak_learner_Children[310]
 *                const double weak_learner_CutPoint[155]
 *                const boolean_T weak_learner_NanCutPoints[155]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[620]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void s_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[155],
                           const double weak_learner_Children[310],
                           const double weak_learner_CutPoint[155],
                           const boolean_T weak_learner_NanCutPoints[155],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[620],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  v_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[135]
 *                const double weak_learner_Children[270]
 *                const double weak_learner_CutPoint[135]
 *                const boolean_T weak_learner_NanCutPoints[135]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[540]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void t_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[135],
                           const double weak_learner_Children[270],
                           const double weak_learner_CutPoint[135],
                           const boolean_T weak_learner_NanCutPoints[135],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[540],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  w_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[145]
 *                const double weak_learner_Children[290]
 *                const double weak_learner_CutPoint[145]
 *                const boolean_T weak_learner_NanCutPoints[145]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[580]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void u_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[145],
                           const double weak_learner_Children[290],
                           const double weak_learner_CutPoint[145],
                           const boolean_T weak_learner_NanCutPoints[145],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[580],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  x_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[139]
 *                const double weak_learner_Children[278]
 *                const double weak_learner_CutPoint[139]
 *                const boolean_T weak_learner_NanCutPoints[139]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[556]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void v_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[139],
                           const double weak_learner_Children[278],
                           const double weak_learner_CutPoint[139],
                           const boolean_T weak_learner_NanCutPoints[139],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[556],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  y_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[163]
 *                const double weak_learner_Children[326]
 *                const double weak_learner_CutPoint[163]
 *                const boolean_T weak_learner_NanCutPoints[163]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[652]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void w_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[163],
                           const double weak_learner_Children[326],
                           const double weak_learner_CutPoint[163],
                           const boolean_T weak_learner_NanCutPoints[163],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[652],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  ab_CompactClassificationTree_pr(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[141]
 *                const double weak_learner_Children[282]
 *                const double weak_learner_CutPoint[141]
 *                const boolean_T weak_learner_NanCutPoints[141]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[564]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void x_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[141],
                           const double weak_learner_Children[282],
                           const double weak_learner_CutPoint[141],
                           const boolean_T weak_learner_NanCutPoints[141],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[564],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  bb_CompactClassificationTree_pr(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * Arguments    : const double X[3]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                const char combiner[15]
 *                const double weak_learner_CutPredictorIndex[157]
 *                const double weak_learner_Children[314]
 *                const double weak_learner_CutPoint[157]
 *                const boolean_T weak_learner_NanCutPoints[157]
 *                const int weak_learner_ClassNamesLength[4]
 *                const double weak_learner_Cost[16]
 *                const double weak_learner_ClassProbability[628]
 *                boolean_T *cached
 *                double score[4]
 * Return Type  : void
 */
void y_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[157],
                           const double weak_learner_Children[314],
                           const double weak_learner_CutPoint[157],
                           const boolean_T weak_learner_NanCutPoints[157],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[628],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double b_dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  cb_CompactClassificationTree_pr(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, b_dv);
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (rtIsNaN(cachedScore[k])) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (y) {
    if (rtIsNaN(cachedScore[0])) {
      cachedScore[0] = 0.0;
    }
    if (rtIsNaN(cachedScore[1])) {
      cachedScore[1] = 0.0;
    }
    if (rtIsNaN(cachedScore[2])) {
      cachedScore[2] = 0.0;
    }
    if (rtIsNaN(cachedScore[3])) {
      cachedScore[3] = 0.0;
    }
  }
  updateCache(b_dv, cachedScore, cachedWeights, cached, combiner, score);
}

/*
 * File trailer for predictOneWithCache.c
 *
 * [EOF]
 */
