/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predictOneWithCache.c
 *
 * Code generation for function 'predictOneWithCache'
 *
 */

/* Include files */
#include "predictOneWithCache.h"
#include "CompactClassificationTree.h"
#include "predict_emissions_types.h"
#include "rt_nonfinite.h"
#include "updateCache.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[137],
                           const double weak_learner_Children[274],
                           const double weak_learner_CutPoint[137],
                           const boolean_T weak_learner_NanCutPoints[137],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[548],
                           boolean_T *cached, boolean_T initCache,
                           double score[4])
{
  cell_wrap_4 a__2;
  double dv[4];
  j_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void c_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  d_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void d_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  e_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void e_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  f_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void f_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  g_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void g_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  k_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void h_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  l_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void i_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[161],
                           const double weak_learner_Children[322],
                           const double weak_learner_CutPoint[161],
                           const boolean_T weak_learner_NanCutPoints[161],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[644],
                           boolean_T *cached, double score[4])
{
  cell_wrap_4 a__2;
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  m_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void j_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  n_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void k_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  o_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void l_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  p_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void m_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  q_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void n_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  r_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void o_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  s_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void p_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  t_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void predictOneWithCache(const double X[3], double cachedScore[4],
                         double *cachedWeights, const char combiner[15],
                         const double weak_learner_CutPredictorIndex[147],
                         const double weak_learner_Children[294],
                         const double weak_learner_CutPoint[147],
                         const boolean_T weak_learner_NanCutPoints[147],
                         const int weak_learner_ClassNamesLength[4],
                         const double weak_learner_Cost[16],
                         const double weak_learner_ClassProbability[588],
                         boolean_T *cached, boolean_T initCache,
                         double score[4])
{
  cell_wrap_4 a__2;
  double dv[4];
  c_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

void q_predictOneWithCache(const double X[3], double cachedScore[4],
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
  double dv[4];
  int k;
  boolean_T exitg1;
  boolean_T y;
  u_CompactClassificationTree_pre(
      weak_learner_CutPredictorIndex, weak_learner_Children,
      weak_learner_CutPoint, weak_learner_NanCutPoints,
      weak_learner_ClassNamesLength, weak_learner_Cost,
      weak_learner_ClassProbability, X, &a__2, dv);
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
  updateCache(dv, cachedScore, cachedWeights, cached, combiner, score);
}

/* End of code generation (predictOneWithCache.c) */
