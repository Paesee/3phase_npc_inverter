// include its header file
#include "geometric_modulation.h"
// include math.h (it must be included in the implementation file for Typhoon HIL Control Center Compatibility)
#include <math.h>

/// @brief computation of common-mode voltage v_{0}
/// @param i0
/// @param e
/// @param val
/// @param vbe
/// @param ia
/// @param ib
/// @param ic
/// @return common-mode voltage v_{0}
float computeV0(float i0, float e, float val, float vbe, float ia, float ib, float ic)
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
  float v0_opt = v0_min;
  float f_min = 99999999;
  // compute loop for finding optimal v_{0}
  for (float i = 0; i <= OPT_LENGTH; i++)
  {
    float v_aux = v0_min + (i / OPT_LENGTH) * (v0_max - v0_min);
    float a = +(SQRT2_BY_3 * val) + (0.0000000000 * vbe) + (ONE_BY_SQRT3 * v_aux) - 0.5 * e;
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

/// @brief return max of two numberss
/// @param a
/// @param b
/// @return the greater number
extern inline float max_of_two(float a, float b)
{
  return (a > b) ? a : b;
}

/// @brief return max of three numbers
/// @param a
/// @param b
/// @param c
/// @return the greater number
extern inline float max_of_three(float a, float b, float c)
{
  return max_of_two(max_of_two(a, b), c);
}

/// @brief return min of two numberss
/// @param a
/// @param b
/// @return the lower number
extern inline float min_of_two(float a, float b)
{
  return (a < b) ? a : b;
}

/// @brief return min of three numberss
/// @param a
/// @param b
/// @param c
/// @return the lower number
extern inline float min_of_three(float a, float b, float c)
{
  return min_of_two(min_of_two(a, b), c);
}