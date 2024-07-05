// external libraries must be included in .c file for hil compatibility
#include <math.h>

// include header file
#include "park_clarke.h"

// Clarke Transform Matrix
const float ABC2ALFABETA[3][3] = {{1, -0.5, -0.5}, {0, 0.86602540378, -0.86602540378}, {0.5, 0.5, 0.5}};
const float ALFABETA2ABC[3][3] = {{1, 0, 1}, {-0.5, 0.86602540378, 1}, {-0.5, -0.86602540378, 1}};

// Clarke Power Invariant Transform Matrix
// const float ABC2ALFABETA_PI[3][3] = {{1, 0, 7.071067811865475e-01}, {-0.5, 8.660254037844386e-01, 7.071067811865475e-01}, {-5.000000000000000e-01, -8.660254037844386e-01, 7.071067811865475e-01}};
// const float ALFABETA2ABC_PI[3][3] = {{6.666666666666667e-01, -3.333333333333333e-01, -3.333333333333333e-01}, {0, 5.773502691896258e-01, -5.773502691896258e-01}, {4.714045207910317e-01, 4.714045207910317e-01, 4.714045207910317e-01}};
const float ABC2ALFABETA_PI[3][3] = {{6.666666666666667e-01, -3.333333333333333e-01, -3.333333333333333e-01}, {0, 5.773502691896258e-01, -5.773502691896258e-01}, {4.714045207910317e-01, 4.714045207910317e-01, 4.714045207910317e-01}};
const float ALFABETA2ABC_PI[3][3] = {{1, 0, 7.071067811865475e-01}, {-0.5, 8.660254037844386e-01, 7.071067811865475e-01}, {-0.5, -8.660254037844386e-01, 7.071067811865475e-01}};

/// CLASSICAL CLARKE AND PARK TRANSFORMATION IMPLEMENTATION

/// @brief Apply Clarke Transformation
/// @param a
/// @param b
/// @param c
/// @param alpha
/// @param beta
/// @param zero
void abcToAlphaBeta(float a, float b, float c, float *alpha, float *beta, float *zero)
{
  *alpha = 0.666666 * (ABC2ALFABETA[0][0] * a + ABC2ALFABETA[0][1] * b + ABC2ALFABETA[0][2] * c);
  *beta = 0.666666 * (ABC2ALFABETA[1][0] * a + ABC2ALFABETA[1][1] * b + ABC2ALFABETA[1][2] * c);
  *zero = 0.666666 * (ABC2ALFABETA[2][0] * a + ABC2ALFABETA[2][1] * b + ABC2ALFABETA[2][2] * c);
}

/// @brief Apply Clarke Inverse Transformation
/// @param alpha
/// @param beta
/// @param zero
/// @param a
/// @param b
/// @param c
void alphaBetaToAbc(float alpha, float beta, float zero, float *a, float *b, float *c)
{
  *a = ALFABETA2ABC[0][0] * alpha + ALFABETA2ABC[0][1] * beta + ALFABETA2ABC[0][2] * zero;
  *b = ALFABETA2ABC[1][0] * alpha + ALFABETA2ABC[1][1] * beta + ALFABETA2ABC[1][2] * zero;
  *c = ALFABETA2ABC[2][0] * alpha + ALFABETA2ABC[2][1] * beta + ALFABETA2ABC[2][2] * zero;
}

/// @brief Apply Park Transformation
/// @param alpha
/// @param beta
/// @param sin
/// @param cos
/// @param d
/// @param q
void alphaBetaToDq0(float alpha, float beta, float sin, float cos, float *d, float *q)
{
  *d = +alpha * cos + beta * sin;
  *q = -alpha * sin + beta * cos;
}

/// @brief Apply Park Inverse Transformation
/// @param d
/// @param q
/// @param sin
/// @param cos
/// @param alpha
/// @param beta
void dq0ToAlphaBeta(float d, float q, float sin, float cos, float *alpha, float *beta)
{
  *alpha = cos * d - sin * q;
  *beta = sin * d + cos * q;
}

/// @brief Apply Park and Clarke Transformation
/// @param a
/// @param b
/// @param c
/// @param sin
/// @param cos
/// @param d
/// @param q
/// @param zero
void abcToDq0(float a, float b, float c, float sin, float cos, float *d, float *q, float *zero)
{
  float alpha = 0, beta = 0;
  abcToAlphaBeta(a, b, c, &alpha, &beta, zero);
  alphaBetaToDq0(alpha, beta, sin, cos, d, q);
}

/// @brief Apply Inverse Park and Clarke Transformation
/// @param d
/// @param q
/// @param zero
/// @param sin
/// @param cos
/// @param a
/// @param b
/// @param c
void dq0ToAbc(float d, float q, float zero, float sin, float cos, float *a, float *b, float *c)
{
  float alpha = 0, beta = 0;
  dq0ToAlphaBeta(d, q, sin, cos, &alpha, &beta);
  alphaBetaToAbc(alpha, beta, zero, a, b, c);
}
/// POWER INVARIANT CLARKE AND PARK TRANSFORMATION IMPLEMENTATION

/// @brief Apply Clarke Transformation (Power Invariant)
/// @param a
/// @param b
/// @param c
/// @param alpha
/// @param beta
/// @param zero
void abcToAlphaBeta_PI(float a, float b, float c, float *alpha, float *beta, float *zero)
{
  *alpha = 0.81649658092 * (ABC2ALFABETA_PI[0][0] * a + ABC2ALFABETA_PI[0][1] * b + ABC2ALFABETA_PI[0][2] * c);
  *beta = 0.81649658092 * (ABC2ALFABETA_PI[1][0] * a + ABC2ALFABETA_PI[1][1] * b + ABC2ALFABETA_PI[1][2] * c);
  *zero = 0.81649658092 * (ABC2ALFABETA_PI[2][0] * a + ABC2ALFABETA_PI[2][1] * b + ABC2ALFABETA_PI[2][2] * c);
}

/// @brief Apply Clarke Inverse Transformation (Power Invariant)
/// @param alpha
/// @param beta
/// @param zero
/// @param a
/// @param b
/// @param c
void alphaBetaToAbc_PI(float alpha, float beta, float zero, float *a, float *b, float *c)
{
  *a = 0.81649658092 * (ALFABETA2ABC_PI[0][0] * alpha + ALFABETA2ABC_PI[0][1] * beta + ALFABETA2ABC_PI[0][2] * zero);
  *b = 0.81649658092 * (ALFABETA2ABC_PI[1][0] * alpha + ALFABETA2ABC_PI[1][1] * beta + ALFABETA2ABC_PI[1][2] * zero);
  *c = 0.81649658092 * (ALFABETA2ABC_PI[2][0] * alpha + ALFABETA2ABC_PI[2][1] * beta + ALFABETA2ABC_PI[2][2] * zero);
}

/// @brief Apply Park and Clarke Transformation (Power Invariant)
/// @param a
/// @param b
/// @param c
/// @param sin
/// @param cos
/// @param d
/// @param q
/// @param zero
void abcToDq0_PI(float a, float b, float c, float sin, float cos, float *d, float *q, float *zero)
{
  float alpha = 0, beta = 0;
  abcToAlphaBeta_PI(a, b, c, &alpha, &beta, zero);
  alphaBetaToDq0(alpha, beta, sin, cos, d, q);
}

/// @brief Apply Inverse Park and Clarke Transformation (Power Invariant)
/// @param d
/// @param q
/// @param zero
/// @param sin
/// @param cos
/// @param a
/// @param b
/// @param c
void dq0ToAbc_PI(float d, float q, float zero, float sin, float cos, float *a, float *b, float *c)
{
  float alpha = 0, beta = 0;
  dq0ToAlphaBeta(d, q, sin, cos, &alpha, &beta);
  alphaBetaToAbc_PI(alpha, beta, zero, a, b, c);
}