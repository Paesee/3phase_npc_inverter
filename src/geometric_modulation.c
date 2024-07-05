#include "geometric_modulation.h"
#include <math.h>

// FOR ALPHABETA COORDINATES

// FUNCTIONS
float geoMod_computeV0(float i0, float e, float val, float vbe, float ia, float ib, float ic)
{
  // compute conditions
  float c1 = -SQRT2 * val;
  float c2 = +ONE_BY_SQRT2 * val - SQRT6_BY_2 * vbe;
  float c3 = +ONE_BY_SQRT2 * val + SQRT6_BY_2 * vbe;
  float c4 = +SQRT3 * e + c1;
  float c5 = +SQRT3 * e + c2;
  float c6 = +SQRT3 * e + c3;
  // minimun and maximum values for v_{0}
  float v0_min = max_of_three(c1, c2, c3);
  float v0_max = min_of_three(c4, c5, c6);
  // variables initilization
  //float v0_opt = 0.5 * v0_min + 0.5 * v0_max;
  float v0_opt = v0_min;
  float f_min = 99999999;
  // compute loop for finding optimal v_{0}
  for (float i = 0; i <= OPT_LENGTH; i++)
  {
    float v_aux = v0_min + (i/OPT_LENGTH) * (v0_max - v0_min);
    float a = +(SQRT2_BY_3   * val) + (0.0000000000 * vbe) + (ONE_BY_SQRT3 * v_aux) - 0.5 * e;
    float b = -(ONE_BY_SQRT6 * val) + (ONE_BY_SQRT2 * vbe) + (ONE_BY_SQRT3 * v_aux) - 0.5 * e;
    float c = -(ONE_BY_SQRT6 * val) - (ONE_BY_SQRT2 * vbe) + (ONE_BY_SQRT3 * v_aux) - 0.5 * e;
    float f = fabs(2 * (ia * (fabs(a) - fabs(c)) + ib * (fabs(b) - fabs(c))) - i0);
    if (f < f_min)
    {
      f_min = f;
      v0_opt = v_aux;
    }
  }
  // return optimized v_{0}
  return v0_opt;
}

//void geoMod_executeGeometricModulation(float e, float val, float vbe, float ia, float ib, float ic, float *vag, float *vbg, float *vcg)
//{
//  float v0 = geoMod_computeV0(e, val, vbe, ia, ib, ic);
//  *vag = SQRT2_BY_3 * (+1.0 * val + 0.00000000 * vbe + ONE_BY_SQRT2 * v0);
//  *vbg = SQRT2_BY_3 * (-0.5 * val + SQRT3_BY_2 * vbe + ONE_BY_SQRT2 * v0);
//  *vcg = SQRT2_BY_3 * (-0.5 * val - SQRT3_BY_2 * vbe + ONE_BY_SQRT2 * v0);
//}

// AUXILIARY FUNCTIONS
extern inline float max_of_two(float a, float b)
{
  return (a > b) ? a : b;
}

extern inline float max_of_three(float a, float b, float c)
{
  return max_of_two(max_of_two(a, b), c);
}

extern inline float min_of_two(float a, float b)
{
  return (a < b) ? a : b;
}

extern inline float min_of_three(float a, float b, float c)
{
  return min_of_two(min_of_two(a, b), c);
}