// external libraries must be included in .c file for HIL compatibility
#include <math.h>

// include its header file
#include "park_clarke.h"

// Clarke Transform Matrix
/// @brief Clarke Transformation matrix for conversion from abc to alpha-beta-zero coordinates.
const float ABC2ALFABETA[3][3] = {
    {1, -0.5, -0.5},
    {0, 0.86602540378, -0.86602540378},
    {0.5, 0.5, 0.5}};

/// @brief Inverse Clarke Transformation matrix for conversion from alpha-beta-zero to abc coordinates.
const float ALFABETA2ABC[3][3] = {
    {1, 0, 1},
    {-0.5, 0.86602540378, 1},
    {-0.5, -0.86602540378, 1}};

// Clarke Power Invariant Transform Matrix

/// @brief Clarke Transformation matrix (Power Invariant) for conversion from abc to alpha-beta-zero coordinates.
const float ABC2ALFABETA_PI[3][3] = {
    {0.666666666666667, -0.333333333333333, -0.333333333333333},
    {0, 0.57735026919, -0.57735026919},
    {0.4714045207910317, 0.4714045207910317, 0.4714045207910317}};

/// @brief Inverse Clarke Transformation matrix (Power Invariant) for conversion from alpha-beta-zero to abc coordinates.
const float ALFABETA2ABC_PI[3][3] = {
    {1, 0, 0.7071067811865475},
    {-0.5, 0.8660254037844386, 0.7071067811865475},
    {-0.5, -0.8660254037844386, 0.7071067811865475}};

/// CLASSICAL CLARKE AND PARK TRANSFORMATION IMPLEMENTATION

/// @brief Apply Clarke Transformation to convert abc to alpha-beta-zero coordinates.
/// @param a Phase A value.
/// @param b Phase B value.
/// @param c Phase C value.
/// @param alpha Pointer to the output alpha component.
/// @param beta Pointer to the output beta component.
/// @param zero Pointer to the output zero-sequence component.
void abcToAlphaBeta(float a, float b, float c, float *alpha, float *beta, float *zero)
{
  *alpha = 0.666666 * (ABC2ALFABETA[0][0] * a + ABC2ALFABETA[0][1] * b + ABC2ALFABETA[0][2] * c);
  *beta = 0.666666 * (ABC2ALFABETA[1][0] * a + ABC2ALFABETA[1][1] * b + ABC2ALFABETA[1][2] * c);
  *zero = 0.666666 * (ABC2ALFABETA[2][0] * a + ABC2ALFABETA[2][1] * b + ABC2ALFABETA[2][2] * c);
}

/// @brief Apply Clarke Inverse Transformation to convert alpha-beta-zero to abc coordinates.
/// @param alpha Alpha component.
/// @param beta Beta component.
/// @param zero Zero-sequence component.
/// @param a Pointer to the output Phase A value.
/// @param b Pointer to the output Phase B value.
/// @param c Pointer to the output Phase C value.
void alphaBetaToAbc(float alpha, float beta, float zero, float *a, float *b, float *c)
{
  *a = ALFABETA2ABC[0][0] * alpha + ALFABETA2ABC[0][1] * beta + ALFABETA2ABC[0][2] * zero;
  *b = ALFABETA2ABC[1][0] * alpha + ALFABETA2ABC[1][1] * beta + ALFABETA2ABC[1][2] * zero;
  *c = ALFABETA2ABC[2][0] * alpha + ALFABETA2ABC[2][1] * beta + ALFABETA2ABC[2][2] * zero;
}

/// @brief Apply Park Transformation to convert alpha-beta to dq0 coordinates.
/// @param alpha Alpha component.
/// @param beta Beta component.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param d Pointer to the output d-axis component.
/// @param q Pointer to the output q-axis component.
void alphaBetaToDq0(float alpha, float beta, float sin, float cos, float *d, float *q)
{
  *d = +alpha * cos + beta * sin;
  *q = -alpha * sin + beta * cos;
}

/// @brief Apply Park Inverse Transformation to convert dq0 to alpha-beta coordinates.
/// @param d d-axis component.
/// @param q q-axis component.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param alpha Pointer to the output alpha component.
/// @param beta Pointer to the output beta component.
void dq0ToAlphaBeta(float d, float q, float sin, float cos, float *alpha, float *beta)
{
  *alpha = cos * d - sin * q;
  *beta = sin * d + cos * q;
}

/// @brief Apply combined Park and Clarke Transformation to convert abc to dq0 coordinates.
/// @param a Phase A value.
/// @param b Phase B value.
/// @param c Phase C value.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param d Pointer to the output d-axis component.
/// @param q Pointer to the output q-axis component.
/// @param zero Pointer to the output zero-sequence component.
void abcToDq0(float a, float b, float c, float sin, float cos, float *d, float *q, float *zero)
{
  float alpha = 0, beta = 0;
  abcToAlphaBeta(a, b, c, &alpha, &beta, zero);
  alphaBetaToDq0(alpha, beta, sin, cos, d, q);
}

/// @brief Apply combined Inverse Park and Clarke Transformation to convert dq0 to abc coordinates.
/// @param d d-axis component.
/// @param q q-axis component.
/// @param zero Zero-sequence component.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param a Pointer to the output Phase A value.
/// @param b Pointer to the output Phase B value.
/// @param c Pointer to the output Phase C value.
void dq0ToAbc(float d, float q, float zero, float sin, float cos, float *a, float *b, float *c)
{
  float alpha = 0, beta = 0;
  dq0ToAlphaBeta(d, q, sin, cos, &alpha, &beta);
  alphaBetaToAbc(alpha, beta, zero, a, b, c);
}

/// POWER INVARIANT CLARKE AND PARK TRANSFORMATION IMPLEMENTATION

/// @brief Apply Clarke Transformation (Power Invariant) to convert abc to alpha-beta-zero coordinates.
/// @param a Phase A value.
/// @param b Phase B value.
/// @param c Phase C value.
/// @param alpha Pointer to the output alpha component.
/// @param beta Pointer to the output beta component.
/// @param zero Pointer to the output zero-sequence component.
void abcToAlphaBeta_PI(float a, float b, float c, float *alpha, float *beta, float *zero)
{
  *alpha = 0.81649658092 * (ABC2ALFABETA_PI[0][0] * a + ABC2ALFABETA_PI[0][1] * b + ABC2ALFABETA_PI[0][2] * c);
  *beta = 0.81649658092 * (ABC2ALFABETA_PI[1][0] * a + ABC2ALFABETA_PI[1][1] * b + ABC2ALFABETA_PI[1][2] * c);
  *zero = 0.81649658092 * (ABC2ALFABETA_PI[2][0] * a + ABC2ALFABETA_PI[2][1] * b + ABC2ALFABETA_PI[2][2] * c);
}

/// @brief Apply Clarke Inverse Transformation (Power Invariant) to convert alpha-beta-zero to abc coordinates.
/// @param alpha Alpha component.
/// @param beta Beta component.
/// @param zero Zero-sequence component.
/// @param a Pointer to the output Phase A value.
/// @param b Pointer to the output Phase B value.
/// @param c Pointer to the output Phase C value.
void alphaBetaToAbc_PI(float alpha, float beta, float zero, float *a, float *b, float *c)
{
  *a = 0.81649658092 * (ALFABETA2ABC_PI[0][0] * alpha + ALFABETA2ABC_PI[0][1] * beta + ALFABETA2ABC_PI[0][2] * zero);
  *b = 0.81649658092 * (ALFABETA2ABC_PI[1][0] * alpha + ALFABETA2ABC_PI[1][1] * beta + ALFABETA2ABC_PI[1][2] * zero);
  *c = 0.81649658092 * (ALFABETA2ABC_PI[2][0] * alpha + ALFABETA2ABC_PI[2][1] * beta + ALFABETA2ABC_PI[2][2] * zero);
}

/// @brief Apply combined Park and Clarke Transformation (Power Invariant) to convert abc to dq0 coordinates.
/// @param a Phase A value.
/// @param b Phase B value.
/// @param c Phase C value.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param d Pointer to the output d-axis component.
/// @param q Pointer to the output q-axis component.
/// @param zero Pointer to the output zero-sequence component.
void abcToDq0_PI(float a, float b, float c, float sin, float cos, float *d, float *q, float *zero)
{
  float alpha = 0, beta = 0;
  abcToAlphaBeta_PI(a, b, c, &alpha, &beta, zero);
  alphaBetaToDq0(alpha, beta, sin, cos, d, q);
}

/// @brief Apply combined Inverse Park and Clarke Transformation (Power Invariant) to convert dq0 to abc coordinates.
/// @param d d-axis component.
/// @param q q-axis component.
/// @param zero Zero-sequence component.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param a Pointer to the output Phase A value.
/// @param b Pointer to the output Phase B value.
/// @param c Pointer to the output Phase C value.
void dq0ToAbc_PI(float d, float q, float zero, float sin, float cos, float *a, float *b, float *c)
{
  float alpha = 0, beta = 0;
  dq0ToAlphaBeta(d, q, sin, cos, &alpha, &beta);
  alphaBetaToAbc_PI(alpha, beta, zero, a, b, c);
}
