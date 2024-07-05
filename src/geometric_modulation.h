#ifndef GEOMETRIC_MODULATION_H
#define GEOMETRIC_MODULATION_H

// CONSTANTS
#define SQRT2 1.41421356237
#define SQRT3 1.73205080757
#define SQRT3_BY_2 0.86602540378
#define SQRT2_BY_3 0.81649658092
#define SQRT6_BY_2 1.224744873191
#define ONE_BY_SQRT2 0.70710678118
#define ONE_BY_SQRT3 0.57735026919
#define ONE_BY_SQRT6 0.40824829046
#define OPT_LENGTH 20

// FOR ALPHABETA COORDINATES

// FUNCTIONS
float geoMod_computeV0(float i0, float e, float val, float vbe, float ia, float ib, float ic);
//void geoMod_executeGeometricModulation(float e, float val, float vbe, float ia, float ib, float ic, float *vag, float *vbg, float *vcg);

// AUXILIARY FUNCTIONS
extern inline float max_of_two(float a, float b);
extern inline float max_of_three(float a, float b, float c);
extern inline float min_of_two(float a, float b);
extern inline float min_of_three(float a, float b, float c);

#endif