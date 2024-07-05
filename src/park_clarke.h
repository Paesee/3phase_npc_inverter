#ifndef PARK_CLARKE_H
#define PARK_CLARKE_H

/// AMPLITUDE INVARIANT CLARKE AND PARK TRANSFORMATION

// Clarke Functions
void abcToAlphaBeta(float a, float b, float c, float *alpha, float *beta, float *zero);
void alphaBetaToAbc(float alpha, float beta, float zero, float *a, float *b, float *c);
// Park Functions
void alphaBetaToDq0(float alpha, float beta, float sin, float cos, float *d, float *q);
void dq0ToAlphaBeta(float d, float q, float sin, float cos, float *alpha, float *beta);
// Clarke and Park Combined Transformations
void abcToDq0(float a, float b, float c, float sin, float cos, float *d, float *q, float *zero);
void dq0ToAbc(float d, float q, float zero, float sin, float cos, float *a, float *b, float *c);

/// POWER INVARIANT CLARKE AND PARK TRANSFORMATION

// Clarke Functions
void abcToAlphaBeta_PI(float a, float b, float c, float *alpha, float *beta, float *zero);
void alphaBetaToAbc_PI(float alpha, float beta, float zero, float *a, float *b, float *c);
// Clarke and Park Combined Transformations
void abcToDq0_PI(float a, float b, float c, float sin, float cos, float *d, float *q, float *zero);
void dq0ToAbc_PI(float d, float q, float zero, float sin, float cos, float *a, float *b, float *c);

#endif