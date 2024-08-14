#ifndef PARK_CLARKE_H
#define PARK_CLARKE_H

/// @file park_clarke.h
/// @brief header file containing functions for Clarke and Park transformations.

/// @brief Converts three-phase quantities (a, b, c) to alpha-beta-zero coordinates using the Clarke transformation.
/// @param a Phase A value.
/// @param b Phase B value.
/// @param c Phase C value.
/// @param alpha Pointer to the output alpha component.
/// @param beta Pointer to the output beta component.
/// @param zero Pointer to the output zero-sequence component.
void abcToAlphaBeta(float a, float b, float c, float *alpha, float *beta, float *zero);

/// @brief Converts alpha-beta-zero coordinates to three-phase quantities (a, b, c) using the inverse Clarke transformation.
/// @param alpha Alpha component.
/// @param beta Beta component.
/// @param zero Zero-sequence component.
/// @param a Pointer to the output Phase A value.
/// @param b Pointer to the output Phase B value.
/// @param c Pointer to the output Phase C value.
void alphaBetaToAbc(float alpha, float beta, float zero, float *a, float *b, float *c);

/// @brief Converts alpha-beta coordinates to dq0 coordinates using the Park transformation.
/// @param alpha Alpha component.
/// @param beta Beta component.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param d Pointer to the output d-axis component.
/// @param q Pointer to the output q-axis component.
void alphaBetaToDq0(float alpha, float beta, float sin, float cos, float *d, float *q);

/// @brief Converts dq0 coordinates to alpha-beta coordinates using the inverse Park transformation.
/// @param d d-axis component.
/// @param q q-axis component.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param alpha Pointer to the output alpha component.
/// @param beta Pointer to the output beta component.
void dq0ToAlphaBeta(float d, float q, float sin, float cos, float *alpha, float *beta);

/// @brief Converts three-phase quantities (a, b, c) to dq0 coordinates using combined Clarke and Park transformations.
/// @param a Phase A value.
/// @param b Phase B value.
/// @param c Phase C value.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param d Pointer to the output d-axis component.
/// @param q Pointer to the output q-axis component.
/// @param zero Pointer to the output zero-sequence component.
void abcToDq0(float a, float b, float c, float sin, float cos, float *d, float *q, float *zero);

/// @brief Converts dq0 coordinates to three-phase quantities (a, b, c) using combined inverse Park and Clarke transformations.
/// @param d d-axis component.
/// @param q q-axis component.
/// @param zero Zero-sequence component.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param a Pointer to the output Phase A value.
/// @param b Pointer to the output Phase B value.
/// @param c Pointer to the output Phase C value.
void dq0ToAbc(float d, float q, float zero, float sin, float cos, float *a, float *b, float *c);

/// @brief Converts three-phase quantities (a, b, c) to alpha-beta-zero coordinates using the power-invariant Clarke transformation.
/// @param a Phase A value.
/// @param b Phase B value.
/// @param c Phase C value.
/// @param alpha Pointer to the output alpha component.
/// @param beta Pointer to the output beta component.
/// @param zero Pointer to the output zero-sequence component.
void abcToAlphaBeta_PI(float a, float b, float c, float *alpha, float *beta, float *zero);

/// @brief Converts alpha-beta-zero coordinates to three-phase quantities (a, b, c) using the inverse power-invariant Clarke transformation.
/// @param alpha Alpha component.
/// @param beta Beta component.
/// @param zero Zero-sequence component.
/// @param a Pointer to the output Phase A value.
/// @param b Pointer to the output Phase B value.
/// @param c Pointer to the output Phase C value.
void alphaBetaToAbc_PI(float alpha, float beta, float zero, float *a, float *b, float *c);

/// @brief Converts three-phase quantities (a, b, c) to dq0 coordinates using combined power-invariant Clarke and Park transformations.
/// @param a Phase A value.
/// @param b Phase B value.
/// @param c Phase C value.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param d Pointer to the output d-axis component.
/// @param q Pointer to the output q-axis component.
/// @param zero Pointer to the output zero-sequence component.
void abcToDq0_PI(float a, float b, float c, float sin, float cos, float *d, float *q, float *zero);

/// @brief Converts dq0 coordinates to three-phase quantities (a, b, c) using combined inverse power-invariant Park and Clarke transformations.
/// @param d d-axis component.
/// @param q q-axis component.
/// @param zero Zero-sequence component.
/// @param sin Sine of the angle.
/// @param cos Cosine of the angle.
/// @param a Pointer to the output Phase A value.
/// @param b Pointer to the output Phase B value.
/// @param c Pointer to the output Phase C value.
void dq0ToAbc_PI(float d, float q, float zero, float sin, float cos, float *a, float *b, float *c);

#endif
