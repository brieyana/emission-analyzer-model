/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactClassificationTree.h
 *
 * Code generation for function 'CompactClassificationTree'
 *
 */

#ifndef COMPACTCLASSIFICATIONTREE_H
#define COMPACTCLASSIFICATIONTREE_H

/* Include files */
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
    double obj_CutPredictorIndex[151], double obj_Children[302],
    double obj_CutPoint[151], boolean_T obj_NanCutPoints[151],
    boolean_T obj_InfCutPoints[151], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[604]);

c_classreg_learning_coderutils_ bb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[143], double obj_Children[286],
    double obj_CutPoint[143], boolean_T obj_NanCutPoints[143],
    boolean_T obj_InfCutPoints[143], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[572]);

c_classreg_learning_coderutils_ c_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[155], double obj_Children[310],
    double obj_CutPoint[155], boolean_T obj_NanCutPoints[155],
    boolean_T obj_InfCutPoints[155], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[620]);

void c_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[147], const double obj_Children[294],
    const double obj_CutPoint[147], const boolean_T obj_NanCutPoints[147],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[588], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ cb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[143], double obj_Children[286],
    double obj_CutPoint[143], boolean_T obj_NanCutPoints[143],
    boolean_T obj_InfCutPoints[143], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[572]);

c_classreg_learning_coderutils_ d_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[169], double obj_Children[338],
    double obj_CutPoint[169], boolean_T obj_NanCutPoints[169],
    boolean_T obj_InfCutPoints[169], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[676]);

void d_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[145], const double obj_Children[290],
    const double obj_CutPoint[145], const boolean_T obj_NanCutPoints[145],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[580], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ db_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[135], double obj_Children[270],
    double obj_CutPoint[135], boolean_T obj_NanCutPoints[135],
    boolean_T obj_InfCutPoints[135], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[540]);

c_classreg_learning_coderutils_ e_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[151], double obj_Children[302],
    double obj_CutPoint[151], boolean_T obj_NanCutPoints[151],
    boolean_T obj_InfCutPoints[151], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[604]);

void e_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[151], const double obj_Children[302],
    const double obj_CutPoint[151], const boolean_T obj_NanCutPoints[151],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[604], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ eb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[141], double obj_Children[282],
    double obj_CutPoint[141], boolean_T obj_NanCutPoints[141],
    boolean_T obj_InfCutPoints[141], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[564]);

c_classreg_learning_coderutils_ f_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[151], double obj_Children[302],
    double obj_CutPoint[151], boolean_T obj_NanCutPoints[151],
    boolean_T obj_InfCutPoints[151], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[604]);

void f_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[131], const double obj_Children[262],
    const double obj_CutPoint[131], const boolean_T obj_NanCutPoints[131],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[524], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ fb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[155], double obj_Children[310],
    double obj_CutPoint[155], boolean_T obj_NanCutPoints[155],
    boolean_T obj_InfCutPoints[155], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[620]);

c_classreg_learning_coderutils_ g_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[125], double obj_Children[250],
    double obj_CutPoint[125], boolean_T obj_NanCutPoints[125],
    boolean_T obj_InfCutPoints[125], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[500]);

void g_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[155], const double obj_Children[310],
    const double obj_CutPoint[155], const boolean_T obj_NanCutPoints[155],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[620], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ gb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[157], double obj_Children[314],
    double obj_CutPoint[157], boolean_T obj_NanCutPoints[157],
    boolean_T obj_InfCutPoints[157], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[628]);

c_classreg_learning_coderutils_ h_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[137], double obj_Children[274],
    double obj_CutPoint[137], boolean_T obj_NanCutPoints[137],
    boolean_T obj_InfCutPoints[137], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[548]);

void h_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[169], const double obj_Children[338],
    const double obj_CutPoint[169], const boolean_T obj_NanCutPoints[169],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[676], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ hb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[127], double obj_Children[254],
    double obj_CutPoint[127], boolean_T obj_NanCutPoints[127],
    boolean_T obj_InfCutPoints[127], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[508]);

c_classreg_learning_coderutils_ i_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[165], double obj_Children[330],
    double obj_CutPoint[165], boolean_T obj_NanCutPoints[165],
    boolean_T obj_InfCutPoints[165], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[660]);

void i_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[125], const double obj_Children[250],
    const double obj_CutPoint[125], const boolean_T obj_NanCutPoints[125],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[500], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ ib_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[123], double obj_Children[246],
    double obj_CutPoint[123], boolean_T obj_NanCutPoints[123],
    boolean_T obj_InfCutPoints[123], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[492]);

c_classreg_learning_coderutils_ j_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[149], double obj_Children[298],
    double obj_CutPoint[149], boolean_T obj_NanCutPoints[149],
    boolean_T obj_InfCutPoints[149], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[596]);

void j_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[137], const double obj_Children[274],
    const double obj_CutPoint[137], const boolean_T obj_NanCutPoints[137],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[548], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ jb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[157], double obj_Children[314],
    double obj_CutPoint[157], boolean_T obj_NanCutPoints[157],
    boolean_T obj_InfCutPoints[157], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[628]);

c_classreg_learning_coderutils_ k_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[161], double obj_Children[322],
    double obj_CutPoint[161], boolean_T obj_NanCutPoints[161],
    boolean_T obj_InfCutPoints[161], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[644]);

void k_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[165], const double obj_Children[330],
    const double obj_CutPoint[165], const boolean_T obj_NanCutPoints[165],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[660], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ kb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[141], double obj_Children[282],
    double obj_CutPoint[141], boolean_T obj_NanCutPoints[141],
    boolean_T obj_InfCutPoints[141], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[564]);

c_classreg_learning_coderutils_ l_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[145], double obj_Children[290],
    double obj_CutPoint[145], boolean_T obj_NanCutPoints[145],
    boolean_T obj_InfCutPoints[145], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[580]);

void l_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[149], const double obj_Children[298],
    const double obj_CutPoint[149], const boolean_T obj_NanCutPoints[149],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[596], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ lb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[151], double obj_Children[302],
    double obj_CutPoint[151], boolean_T obj_NanCutPoints[151],
    boolean_T obj_InfCutPoints[151], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[604]);

c_classreg_learning_coderutils_ m_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[151], double obj_Children[302],
    double obj_CutPoint[151], boolean_T obj_NanCutPoints[151],
    boolean_T obj_InfCutPoints[151], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[604]);

void m_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[161], const double obj_Children[322],
    const double obj_CutPoint[161], const boolean_T obj_NanCutPoints[161],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[644], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ mb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[153], double obj_Children[306],
    double obj_CutPoint[153], boolean_T obj_NanCutPoints[153],
    boolean_T obj_InfCutPoints[153], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[612]);

c_classreg_learning_coderutils_ n_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[143], double obj_Children[286],
    double obj_CutPoint[143], boolean_T obj_NanCutPoints[143],
    boolean_T obj_InfCutPoints[143], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[572]);

void n_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[143], const double obj_Children[286],
    const double obj_CutPoint[143], const boolean_T obj_NanCutPoints[143],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[572], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ nb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[131], double obj_Children[262],
    double obj_CutPoint[131], boolean_T obj_NanCutPoints[131],
    boolean_T obj_InfCutPoints[131], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[524]);

c_classreg_learning_coderutils_ o_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[139], double obj_Children[278],
    double obj_CutPoint[139], boolean_T obj_NanCutPoints[139],
    boolean_T obj_InfCutPoints[139], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[556]);

void o_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[139], const double obj_Children[278],
    const double obj_CutPoint[139], const boolean_T obj_NanCutPoints[139],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[556], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ ob_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[165], double obj_Children[330],
    double obj_CutPoint[165], boolean_T obj_NanCutPoints[165],
    boolean_T obj_InfCutPoints[165], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[660]);

c_classreg_learning_coderutils_ p_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[145], double obj_Children[290],
    double obj_CutPoint[145], boolean_T obj_NanCutPoints[145],
    boolean_T obj_InfCutPoints[145], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[580]);

void p_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[157], const double obj_Children[314],
    const double obj_CutPoint[157], const boolean_T obj_NanCutPoints[157],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[628], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ pb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[131], double obj_Children[262],
    double obj_CutPoint[131], boolean_T obj_NanCutPoints[131],
    boolean_T obj_InfCutPoints[131], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[524]);

c_classreg_learning_coderutils_ q_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[139], double obj_Children[278],
    double obj_CutPoint[139], boolean_T obj_NanCutPoints[139],
    boolean_T obj_InfCutPoints[139], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[556]);

void q_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[163], const double obj_Children[326],
    const double obj_CutPoint[163], const boolean_T obj_NanCutPoints[163],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[652], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ qb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[151], double obj_Children[302],
    double obj_CutPoint[151], boolean_T obj_NanCutPoints[151],
    boolean_T obj_InfCutPoints[151], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[604]);

c_classreg_learning_coderutils_ r_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[157], double obj_Children[314],
    double obj_CutPoint[157], boolean_T obj_NanCutPoints[157],
    boolean_T obj_InfCutPoints[157], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[628]);

void r_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[141], const double obj_Children[282],
    const double obj_CutPoint[141], const boolean_T obj_NanCutPoints[141],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[564], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ rb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[149], double obj_Children[298],
    double obj_CutPoint[149], boolean_T obj_NanCutPoints[149],
    boolean_T obj_InfCutPoints[149], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[596]);

c_classreg_learning_coderutils_ s_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[149], double obj_Children[298],
    double obj_CutPoint[149], boolean_T obj_NanCutPoints[149],
    boolean_T obj_InfCutPoints[149], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[596]);

void s_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[153], const double obj_Children[306],
    const double obj_CutPoint[153], const boolean_T obj_NanCutPoints[153],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[612], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ sb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[143], double obj_Children[286],
    double obj_CutPoint[143], boolean_T obj_NanCutPoints[143],
    boolean_T obj_InfCutPoints[143], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[572]);

c_classreg_learning_coderutils_ t_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[163], double obj_Children[326],
    double obj_CutPoint[163], boolean_T obj_NanCutPoints[163],
    boolean_T obj_InfCutPoints[163], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[652]);

void t_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[135], const double obj_Children[270],
    const double obj_CutPoint[135], const boolean_T obj_NanCutPoints[135],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[540], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ tb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[141], double obj_Children[282],
    double obj_CutPoint[141], boolean_T obj_NanCutPoints[141],
    boolean_T obj_InfCutPoints[141], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[564]);

c_classreg_learning_coderutils_ u_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[161], double obj_Children[322],
    double obj_CutPoint[161], boolean_T obj_NanCutPoints[161],
    boolean_T obj_InfCutPoints[161], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[644]);

void u_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[127], const double obj_Children[254],
    const double obj_CutPoint[127], const boolean_T obj_NanCutPoints[127],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[508], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ ub_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[127], double obj_Children[254],
    double obj_CutPoint[127], boolean_T obj_NanCutPoints[127],
    boolean_T obj_InfCutPoints[127], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[508]);

c_classreg_learning_coderutils_ v_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[141], double obj_Children[282],
    double obj_CutPoint[141], boolean_T obj_NanCutPoints[141],
    boolean_T obj_InfCutPoints[141], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[564]);

void v_CompactClassificationTree_pre(
    const double obj_CutPredictorIndex[123], const double obj_Children[246],
    const double obj_CutPoint[123], const boolean_T obj_NanCutPoints[123],
    const int obj_ClassNamesLength[4], const double obj_Cost[16],
    const double obj_ClassProbability[492], const double Xin[3],
    cell_wrap_4 *labels, double scores[4]);

c_classreg_learning_coderutils_ vb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[139], double obj_Children[278],
    double obj_CutPoint[139], boolean_T obj_NanCutPoints[139],
    boolean_T obj_InfCutPoints[139], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[556]);

c_classreg_learning_coderutils_ w_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[153], double obj_Children[306],
    double obj_CutPoint[153], boolean_T obj_NanCutPoints[153],
    boolean_T obj_InfCutPoints[153], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[612]);

c_classreg_learning_coderutils_ wb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[145], double obj_Children[290],
    double obj_CutPoint[145], boolean_T obj_NanCutPoints[145],
    boolean_T obj_InfCutPoints[145], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[580]);

c_classreg_learning_coderutils_ x_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[143], double obj_Children[286],
    double obj_CutPoint[143], boolean_T obj_NanCutPoints[143],
    boolean_T obj_InfCutPoints[143], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[572]);

c_classreg_learning_coderutils_ xb_CompactClassificationTree_Co(
    double obj_CutPredictorIndex[135], double obj_Children[270],
    double obj_CutPoint[135], boolean_T obj_NanCutPoints[135],
    boolean_T obj_InfCutPoints[135], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[540]);

c_classreg_learning_coderutils_ y_CompactClassificationTree_Com(
    double obj_CutPredictorIndex[147], double obj_Children[294],
    double obj_CutPoint[147], boolean_T obj_NanCutPoints[147],
    boolean_T obj_InfCutPoints[147], int obj_ClassNamesLength[4],
    double obj_Prior[4], boolean_T obj_ClassLogicalIndices[4],
    double obj_Cost[16], double obj_ClassProbability[588]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (CompactClassificationTree.h) */
