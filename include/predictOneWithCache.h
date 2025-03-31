/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predictOneWithCache.h
 *
 * Code generation for function 'predictOneWithCache'
 *
 */

#ifndef PREDICTONEWITHCACHE_H
#define PREDICTONEWITHCACHE_H

/* Include files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
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
                           double score[4]);

void c_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[145],
                           const double weak_learner_Children[290],
                           const double weak_learner_CutPoint[145],
                           const boolean_T weak_learner_NanCutPoints[145],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[580],
                           boolean_T *cached, double score[4]);

void d_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[151],
                           const double weak_learner_Children[302],
                           const double weak_learner_CutPoint[151],
                           const boolean_T weak_learner_NanCutPoints[151],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[604],
                           boolean_T *cached, double score[4]);

void e_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[131],
                           const double weak_learner_Children[262],
                           const double weak_learner_CutPoint[131],
                           const boolean_T weak_learner_NanCutPoints[131],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[524],
                           boolean_T *cached, double score[4]);

void f_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[155],
                           const double weak_learner_Children[310],
                           const double weak_learner_CutPoint[155],
                           const boolean_T weak_learner_NanCutPoints[155],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[620],
                           boolean_T *cached, double score[4]);

void g_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[165],
                           const double weak_learner_Children[330],
                           const double weak_learner_CutPoint[165],
                           const boolean_T weak_learner_NanCutPoints[165],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[660],
                           boolean_T *cached, double score[4]);

void h_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[149],
                           const double weak_learner_Children[298],
                           const double weak_learner_CutPoint[149],
                           const boolean_T weak_learner_NanCutPoints[149],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[596],
                           boolean_T *cached, double score[4]);

void i_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[161],
                           const double weak_learner_Children[322],
                           const double weak_learner_CutPoint[161],
                           const boolean_T weak_learner_NanCutPoints[161],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[644],
                           boolean_T *cached, double score[4]);

void j_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[143],
                           const double weak_learner_Children[286],
                           const double weak_learner_CutPoint[143],
                           const boolean_T weak_learner_NanCutPoints[143],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[572],
                           boolean_T *cached, double score[4]);

void k_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[139],
                           const double weak_learner_Children[278],
                           const double weak_learner_CutPoint[139],
                           const boolean_T weak_learner_NanCutPoints[139],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[556],
                           boolean_T *cached, double score[4]);

void l_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[157],
                           const double weak_learner_Children[314],
                           const double weak_learner_CutPoint[157],
                           const boolean_T weak_learner_NanCutPoints[157],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[628],
                           boolean_T *cached, double score[4]);

void m_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[163],
                           const double weak_learner_Children[326],
                           const double weak_learner_CutPoint[163],
                           const boolean_T weak_learner_NanCutPoints[163],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[652],
                           boolean_T *cached, double score[4]);

void n_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[141],
                           const double weak_learner_Children[282],
                           const double weak_learner_CutPoint[141],
                           const boolean_T weak_learner_NanCutPoints[141],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[564],
                           boolean_T *cached, double score[4]);

void o_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[153],
                           const double weak_learner_Children[306],
                           const double weak_learner_CutPoint[153],
                           const boolean_T weak_learner_NanCutPoints[153],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[612],
                           boolean_T *cached, double score[4]);

void p_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[135],
                           const double weak_learner_Children[270],
                           const double weak_learner_CutPoint[135],
                           const boolean_T weak_learner_NanCutPoints[135],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[540],
                           boolean_T *cached, double score[4]);

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
                         double score[4]);

void q_predictOneWithCache(const double X[3], double cachedScore[4],
                           double *cachedWeights, const char combiner[15],
                           const double weak_learner_CutPredictorIndex[127],
                           const double weak_learner_Children[254],
                           const double weak_learner_CutPoint[127],
                           const boolean_T weak_learner_NanCutPoints[127],
                           const int weak_learner_ClassNamesLength[4],
                           const double weak_learner_Cost[16],
                           const double weak_learner_ClassProbability[508],
                           boolean_T *cached, double score[4]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (predictOneWithCache.h) */
