/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: CompactClassificationTree.h
 *
 * MATLAB Coder version            : 24.2
 * C/C++ source code generated on  : 02-Apr-2025 20:52:33
 */

#ifndef COMPACTCLASSIFICATIONTREE_H
#define COMPACTCLASSIFICATIONTREE_H

/* Include Files */
#include "predict_emissions_internal_types.h"
#include "predict_emissions_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
c_classreg_learning_coderutils_ ab_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[205], double obj_Children[410],
    double obj_CutPoint[205], boolean_T obj_NanCutPoints[205],
    boolean_T obj_InfCutPoints[205], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[820]);

void ab_CompactClassificationTree_pr(
    const double obj_CutPredictorIndex[163], const double obj_Children[326],
    const double obj_CutPoint[163], const boolean_T obj_NanCutPoints[163],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[652], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ ac_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[151], double obj_Children[302],
    double obj_CutPoint[151], boolean_T obj_NanCutPoints[151],
    boolean_T obj_InfCutPoints[151], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[604]);

c_classreg_learning_coderutils_ bb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[223], double obj_Children[446],
    double obj_CutPoint[223], boolean_T obj_NanCutPoints[223],
    boolean_T obj_InfCutPoints[223], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[892]);

void bb_CompactClassificationTree_pr(
    const double obj_CutPredictorIndex[141], const double obj_Children[282],
    const double obj_CutPoint[141], const boolean_T obj_NanCutPoints[141],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[564], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ bc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[149], double obj_Children[298],
    double obj_CutPoint[149], boolean_T obj_NanCutPoints[149],
    boolean_T obj_InfCutPoints[149], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[596]);

c_classreg_learning_coderutils_ c_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[205], double obj_Children[410],
    double obj_CutPoint[205], boolean_T obj_NanCutPoints[205],
    boolean_T obj_InfCutPoints[205], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[820]);

void c_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[229], const double obj_Children[458],
    const double obj_CutPoint[229], const boolean_T obj_NanCutPoints[229],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[916], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ cb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[245], double obj_Children[490],
    double obj_CutPoint[245], boolean_T obj_NanCutPoints[245],
    boolean_T obj_InfCutPoints[245], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[980]);

void cb_CompactClassificationTree_pr(
    const double obj_CutPredictorIndex[157], const double obj_Children[314],
    const double obj_CutPoint[157], const boolean_T obj_NanCutPoints[157],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[628], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ cc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[143], double obj_Children[286],
    double obj_CutPoint[143], boolean_T obj_NanCutPoints[143],
    boolean_T obj_InfCutPoints[143], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[572]);

c_classreg_learning_coderutils_ d_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[245], double obj_Children[490],
    double obj_CutPoint[245], boolean_T obj_NanCutPoints[245],
    boolean_T obj_InfCutPoints[245], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[980]);

void d_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[219], const double obj_Children[438],
    const double obj_CutPoint[219], const boolean_T obj_NanCutPoints[219],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[876], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ db_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[217], double obj_Children[434],
    double obj_CutPoint[217], boolean_T obj_NanCutPoints[217],
    boolean_T obj_InfCutPoints[217], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[868]);

void db_CompactClassificationTree_pr(
    const double obj_CutPredictorIndex[127], const double obj_Children[254],
    const double obj_CutPoint[127], const boolean_T obj_NanCutPoints[127],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[508], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ dc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[141], double obj_Children[282],
    double obj_CutPoint[141], boolean_T obj_NanCutPoints[141],
    boolean_T obj_InfCutPoints[141], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[564]);

c_classreg_learning_coderutils_ e_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[221], double obj_Children[442],
    double obj_CutPoint[221], boolean_T obj_NanCutPoints[221],
    boolean_T obj_InfCutPoints[221], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[884]);

void e_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[205], const double obj_Children[410],
    const double obj_CutPoint[205], const boolean_T obj_NanCutPoints[205],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[820], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ eb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[233], double obj_Children[466],
    double obj_CutPoint[233], boolean_T obj_NanCutPoints[233],
    boolean_T obj_InfCutPoints[233], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[932]);

void eb_CompactClassificationTree_pr(
    const double obj_CutPredictorIndex[123], const double obj_Children[246],
    const double obj_CutPoint[123], const boolean_T obj_NanCutPoints[123],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[492], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ ec_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[127], double obj_Children[254],
    double obj_CutPoint[127], boolean_T obj_NanCutPoints[127],
    boolean_T obj_InfCutPoints[127], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[508]);

c_classreg_learning_coderutils_ f_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[235], double obj_Children[470],
    double obj_CutPoint[235], boolean_T obj_NanCutPoints[235],
    boolean_T obj_InfCutPoints[235], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[940]);

void f_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[245], const double obj_Children[490],
    const double obj_CutPoint[245], const boolean_T obj_NanCutPoints[245],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[980], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ fb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[155], double obj_Children[310],
    double obj_CutPoint[155], boolean_T obj_NanCutPoints[155],
    boolean_T obj_InfCutPoints[155], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[620]);

void fb_CompactClassificationTree_pr(
    const double obj_CutPredictorIndex[151], const double obj_Children[302],
    const double obj_CutPoint[151], const boolean_T obj_NanCutPoints[151],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[604], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ fc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[139], double obj_Children[278],
    double obj_CutPoint[139], boolean_T obj_NanCutPoints[139],
    boolean_T obj_InfCutPoints[139], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[556]);

c_classreg_learning_coderutils_ g_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[233], double obj_Children[466],
    double obj_CutPoint[233], boolean_T obj_NanCutPoints[233],
    boolean_T obj_InfCutPoints[233], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[932]);

void g_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[221], const double obj_Children[442],
    const double obj_CutPoint[221], const boolean_T obj_NanCutPoints[221],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[884], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ gb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[135], double obj_Children[270],
    double obj_CutPoint[135], boolean_T obj_NanCutPoints[135],
    boolean_T obj_InfCutPoints[135], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[540]);

void gb_CompactClassificationTree_pr(
    const double obj_CutPredictorIndex[153], const double obj_Children[306],
    const double obj_CutPoint[153], const boolean_T obj_NanCutPoints[153],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[612], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ gc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[145], double obj_Children[290],
    double obj_CutPoint[145], boolean_T obj_NanCutPoints[145],
    boolean_T obj_InfCutPoints[145], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[580]);

c_classreg_learning_coderutils_ h_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[243], double obj_Children[486],
    double obj_CutPoint[243], boolean_T obj_NanCutPoints[243],
    boolean_T obj_InfCutPoints[243], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[972]);

void h_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[235], const double obj_Children[470],
    const double obj_CutPoint[235], const boolean_T obj_NanCutPoints[235],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[940], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ hb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[145], double obj_Children[290],
    double obj_CutPoint[145], boolean_T obj_NanCutPoints[145],
    boolean_T obj_InfCutPoints[145], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[580]);

void hb_CompactClassificationTree_pr(
    const double obj_CutPredictorIndex[131], const double obj_Children[262],
    const double obj_CutPoint[131], const boolean_T obj_NanCutPoints[131],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[524], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ hc_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[135], double obj_Children[270],
    double obj_CutPoint[135], boolean_T obj_NanCutPoints[135],
    boolean_T obj_InfCutPoints[135], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[540]);

c_classreg_learning_coderutils_ i_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[227], double obj_Children[454],
    double obj_CutPoint[227], boolean_T obj_NanCutPoints[227],
    boolean_T obj_InfCutPoints[227], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[908]);

void i_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[233], const double obj_Children[466],
    const double obj_CutPoint[233], const boolean_T obj_NanCutPoints[233],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[932], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ ib_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[139], double obj_Children[278],
    double obj_CutPoint[139], boolean_T obj_NanCutPoints[139],
    boolean_T obj_InfCutPoints[139], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[556]);

void ib_CompactClassificationTree_pr(
    const double obj_CutPredictorIndex[165], const double obj_Children[330],
    const double obj_CutPoint[165], const boolean_T obj_NanCutPoints[165],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[660], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ j_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[221], double obj_Children[442],
    double obj_CutPoint[221], boolean_T obj_NanCutPoints[221],
    boolean_T obj_InfCutPoints[221], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[884]);

void j_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[243], const double obj_Children[486],
    const double obj_CutPoint[243], const boolean_T obj_NanCutPoints[243],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[972], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ jb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[163], double obj_Children[326],
    double obj_CutPoint[163], boolean_T obj_NanCutPoints[163],
    boolean_T obj_InfCutPoints[163], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[652]);

void jb_CompactClassificationTree_pr(
    const double obj_CutPredictorIndex[149], const double obj_Children[298],
    const double obj_CutPoint[149], const boolean_T obj_NanCutPoints[149],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[596], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ k_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[205], double obj_Children[410],
    double obj_CutPoint[205], boolean_T obj_NanCutPoints[205],
    boolean_T obj_InfCutPoints[205], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[820]);

void k_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[227], const double obj_Children[454],
    const double obj_CutPoint[227], const boolean_T obj_NanCutPoints[227],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[908], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ kb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[143], double obj_Children[286],
    double obj_CutPoint[143], boolean_T obj_NanCutPoints[143],
    boolean_T obj_InfCutPoints[143], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[572]);

c_classreg_learning_coderutils_ l_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[233], double obj_Children[466],
    double obj_CutPoint[233], boolean_T obj_NanCutPoints[233],
    boolean_T obj_InfCutPoints[233], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[932]);

void l_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[257], const double obj_Children[514],
    const double obj_CutPoint[257], const boolean_T obj_NanCutPoints[257],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[1028], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ lb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[143], double obj_Children[286],
    double obj_CutPoint[143], boolean_T obj_NanCutPoints[143],
    boolean_T obj_InfCutPoints[143], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[572]);

c_classreg_learning_coderutils_ m_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[229], double obj_Children[458],
    double obj_CutPoint[229], boolean_T obj_NanCutPoints[229],
    boolean_T obj_InfCutPoints[229], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[916]);

void m_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[211], const double obj_Children[422],
    const double obj_CutPoint[211], const boolean_T obj_NanCutPoints[211],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[844], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ mb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[135], double obj_Children[270],
    double obj_CutPoint[135], boolean_T obj_NanCutPoints[135],
    boolean_T obj_InfCutPoints[135], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[540]);

c_classreg_learning_coderutils_ n_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[243], double obj_Children[486],
    double obj_CutPoint[243], boolean_T obj_NanCutPoints[243],
    boolean_T obj_InfCutPoints[243], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[972]);

void n_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[215], const double obj_Children[430],
    const double obj_CutPoint[215], const boolean_T obj_NanCutPoints[215],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[860], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ nb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[141], double obj_Children[282],
    double obj_CutPoint[141], boolean_T obj_NanCutPoints[141],
    boolean_T obj_InfCutPoints[141], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[564]);

c_classreg_learning_coderutils_ o_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[257], double obj_Children[514],
    double obj_CutPoint[257], boolean_T obj_NanCutPoints[257],
    boolean_T obj_InfCutPoints[257], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[1028]);

void o_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[231], const double obj_Children[462],
    const double obj_CutPoint[231], const boolean_T obj_NanCutPoints[231],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[924], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ ob_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[155], double obj_Children[310],
    double obj_CutPoint[155], boolean_T obj_NanCutPoints[155],
    boolean_T obj_InfCutPoints[155], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[620]);

c_classreg_learning_coderutils_ p_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[243], double obj_Children[486],
    double obj_CutPoint[243], boolean_T obj_NanCutPoints[243],
    boolean_T obj_InfCutPoints[243], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[972]);

void p_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[241], const double obj_Children[482],
    const double obj_CutPoint[241], const boolean_T obj_NanCutPoints[241],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[964], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ pb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[157], double obj_Children[314],
    double obj_CutPoint[157], boolean_T obj_NanCutPoints[157],
    boolean_T obj_InfCutPoints[157], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[628]);

c_classreg_learning_coderutils_ q_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[227], double obj_Children[454],
    double obj_CutPoint[227], boolean_T obj_NanCutPoints[227],
    boolean_T obj_InfCutPoints[227], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[908]);

void q_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[199], const double obj_Children[398],
    const double obj_CutPoint[199], const boolean_T obj_NanCutPoints[199],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[796], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ qb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[127], double obj_Children[254],
    double obj_CutPoint[127], boolean_T obj_NanCutPoints[127],
    boolean_T obj_InfCutPoints[127], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[508]);

c_classreg_learning_coderutils_ r_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[211], double obj_Children[422],
    double obj_CutPoint[211], boolean_T obj_NanCutPoints[211],
    boolean_T obj_InfCutPoints[211], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[844]);

void r_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[223], const double obj_Children[446],
    const double obj_CutPoint[223], const boolean_T obj_NanCutPoints[223],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[892], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ rb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[123], double obj_Children[246],
    double obj_CutPoint[123], boolean_T obj_NanCutPoints[123],
    boolean_T obj_InfCutPoints[123], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[492]);

c_classreg_learning_coderutils_ s_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[215], double obj_Children[430],
    double obj_CutPoint[215], boolean_T obj_NanCutPoints[215],
    boolean_T obj_InfCutPoints[215], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[860]);

void s_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[217], const double obj_Children[434],
    const double obj_CutPoint[217], const boolean_T obj_NanCutPoints[217],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[868], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ sb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[157], double obj_Children[314],
    double obj_CutPoint[157], boolean_T obj_NanCutPoints[157],
    boolean_T obj_InfCutPoints[157], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[628]);

c_classreg_learning_coderutils_ t_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[243], double obj_Children[486],
    double obj_CutPoint[243], boolean_T obj_NanCutPoints[243],
    boolean_T obj_InfCutPoints[243], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[972]);

void t_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[137], const double obj_Children[274],
    const double obj_CutPoint[137], const boolean_T obj_NanCutPoints[137],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[548], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ tb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[141], double obj_Children[282],
    double obj_CutPoint[141], boolean_T obj_NanCutPoints[141],
    boolean_T obj_InfCutPoints[141], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[564]);

c_classreg_learning_coderutils_ u_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[245], double obj_Children[490],
    double obj_CutPoint[245], boolean_T obj_NanCutPoints[245],
    boolean_T obj_InfCutPoints[245], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[980]);

void u_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[143], const double obj_Children[286],
    const double obj_CutPoint[143], const boolean_T obj_NanCutPoints[143],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[572], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ ub_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[151], double obj_Children[302],
    double obj_CutPoint[151], boolean_T obj_NanCutPoints[151],
    boolean_T obj_InfCutPoints[151], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[604]);

c_classreg_learning_coderutils_ v_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[231], double obj_Children[462],
    double obj_CutPoint[231], boolean_T obj_NanCutPoints[231],
    boolean_T obj_InfCutPoints[231], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[924]);

void v_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[155], const double obj_Children[310],
    const double obj_CutPoint[155], const boolean_T obj_NanCutPoints[155],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[620], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ vb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[153], double obj_Children[306],
    double obj_CutPoint[153], boolean_T obj_NanCutPoints[153],
    boolean_T obj_InfCutPoints[153], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[612]);

c_classreg_learning_coderutils_ w_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[245], double obj_Children[490],
    double obj_CutPoint[245], boolean_T obj_NanCutPoints[245],
    boolean_T obj_InfCutPoints[245], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[980]);

void w_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[135], const double obj_Children[270],
    const double obj_CutPoint[135], const boolean_T obj_NanCutPoints[135],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[540], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ wb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[131], double obj_Children[262],
    double obj_CutPoint[131], boolean_T obj_NanCutPoints[131],
    boolean_T obj_InfCutPoints[131], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[524]);

c_classreg_learning_coderutils_ x_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[241], double obj_Children[482],
    double obj_CutPoint[241], boolean_T obj_NanCutPoints[241],
    boolean_T obj_InfCutPoints[241], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[964]);

void x_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[145], const double obj_Children[290],
    const double obj_CutPoint[145], const boolean_T obj_NanCutPoints[145],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[580], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ xb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[165], double obj_Children[330],
    double obj_CutPoint[165], boolean_T obj_NanCutPoints[165],
    boolean_T obj_InfCutPoints[165], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[660]);

c_classreg_learning_coderutils_ y_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[199], double obj_Children[398],
    double obj_CutPoint[199], boolean_T obj_NanCutPoints[199],
    boolean_T obj_InfCutPoints[199], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[796]);

void y_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[139], const double obj_Children[278],
    const double obj_CutPoint[139], const boolean_T obj_NanCutPoints[139],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[556], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ yb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[131], double obj_Children[262],
    double obj_CutPoint[131], boolean_T obj_NanCutPoints[131],
    boolean_T obj_InfCutPoints[131], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[524]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for CompactClassificationTree.h
 *
 * [EOF]
 */
