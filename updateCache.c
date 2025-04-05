/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: updateCache.c
 *
 * MATLAB Coder version            : 24.2
 * C/C++ source code generated on  : 02-Apr-2025 20:52:33
 */

/* Include Files */
#include "updateCache.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>

/* Function Definitions */
/*
 * Arguments    : const double learnerscore[4]
 *                double cachedScore[4]
 *                double *cachedWeights
 *                boolean_T *cached
 *                const char combinerName[15]
 *                double score[4]
 * Return Type  : void
 */
void updateCache(const double learnerscore[4], double cachedScore[4],
                 double *cachedWeights, boolean_T *cached,
                 const char combinerName[15], double score[4])
{
  static const char b_cv[128] = {
      '\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\a',   '\b',
      '\t',   '\n',   '\v',   '\f',   '\r',   '\x0e', '\x0f', '\x10', '\x11',
      '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19', '\x1a',
      '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ',    '!',    '\"',   '#',
      '$',    '%',    '&',    '\'',   '(',    ')',    '*',    '+',    ',',
      '-',    '.',    '/',    '0',    '1',    '2',    '3',    '4',    '5',
      '6',    '7',    '8',    '9',    ':',    ';',    '<',    '=',    '>',
      '?',    '@',    'a',    'b',    'c',    'd',    'e',    'f',    'g',
      'h',    'i',    'j',    'k',    'l',    'm',    'n',    'o',    'p',
      'q',    'r',    's',    't',    'u',    'v',    'w',    'x',    'y',
      'z',    '[',    '\\',   ']',    '^',    '_',    '`',    'a',    'b',
      'c',    'd',    'e',    'f',    'g',    'h',    'i',    'j',    'k',
      'l',    'm',    'n',    'o',    'p',    'q',    'r',    's',    't',
      'u',    'v',    'w',    'x',    'y',    'z',    '{',    '|',    '}',
      '~',    '\x7f'};
  static const char b_cv1[15] = {'w', 'e', 'i', 'g', 'h', 't', 'e', 'd',
                                 'a', 'v', 'e', 'r', 'a', 'g', 'e'};
  score[0] = cachedScore[0];
  score[1] = cachedScore[1];
  score[2] = cachedScore[2];
  score[3] = cachedScore[3];
  if (!*cached) {
    __m128d r;
    int kstr;
    boolean_T b_bool;
    *cached = true;
    r = _mm_loadu_pd(&cachedScore[0]);
    _mm_storeu_pd(&cachedScore[0],
                  _mm_add_pd(r, _mm_loadu_pd(&learnerscore[0])));
    r = _mm_loadu_pd(&cachedScore[2]);
    _mm_storeu_pd(&cachedScore[2],
                  _mm_add_pd(r, _mm_loadu_pd(&learnerscore[2])));
    (*cachedWeights)++;
    b_bool = false;
    kstr = 0;
    int exitg1;
    do {
      exitg1 = 0;
      if (kstr < 15) {
        if (b_cv[(int)combinerName[kstr]] != b_cv[(int)b_cv1[kstr]]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
    if (b_bool) {
      __m128d r1;
      r = _mm_loadu_pd(&cachedScore[0]);
      r1 = _mm_set1_pd(*cachedWeights);
      _mm_storeu_pd(&score[0], _mm_div_pd(r, r1));
      r = _mm_loadu_pd(&cachedScore[2]);
      _mm_storeu_pd(&score[2], _mm_div_pd(r, r1));
    } else {
      score[0] = cachedScore[0];
      score[1] = cachedScore[1];
      score[2] = cachedScore[2];
      score[3] = cachedScore[3];
    }
  }
}

/*
 * File trailer for updateCache.c
 *
 * [EOF]
 */
