/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * updateCache.c
 *
 * Code generation for function 'updateCache'
 *
 */

/* Include files */
#include "updateCache.h"
#include "rt_nonfinite.h"

/* Function Definitions */
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
    int kstr;
    boolean_T b_bool;
    *cached = true;
    cachedScore[0] += learnerscore[0];
    cachedScore[1] += learnerscore[1];
    cachedScore[2] += learnerscore[2];
    cachedScore[3] += learnerscore[3];
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
      score[0] = cachedScore[0] / *cachedWeights;
      score[1] = cachedScore[1] / *cachedWeights;
      score[2] = cachedScore[2] / *cachedWeights;
      score[3] = cachedScore[3] / *cachedWeights;
    } else {
      score[0] = cachedScore[0];
      score[1] = cachedScore[1];
      score[2] = cachedScore[2];
      score[3] = cachedScore[3];
    }
  }
}

/* End of code generation (updateCache.c) */
