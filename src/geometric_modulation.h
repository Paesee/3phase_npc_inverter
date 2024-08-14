#ifndef GEOMETRIC_MODULATION_H
#define GEOMETRIC_MODULATION_H

/// @file geometric_modulation.h
/// @brief header file containing functions for optimum geometric modulation applied to NPC inverter.

/// @brief sqrt(2)
#define SQRT2 1.41421356237
/// @brief sqrt(3)
#define SQRT3 1.73205080757
/// @brief sqrt(3)/2
#define SQRT3_BY_2 0.86602540378
/// @brief sqrt(2/3)
#define SQRT2_BY_3 0.81649658092
/// @brief sqrt(6)/2
#define SQRT6_BY_2 1.224744873191
/// @brief 1/sqrt(2)
#define ONE_BY_SQRT2 0.70710678118
/// @brief 1/sqrt(3)
#define ONE_BY_SQRT3 0.57735026919
/// @brief 1/sqrt(6)
#define ONE_BY_SQRT6 0.40824829046
/// @brief number of times that the optimization function is executed 
#define OPT_LENGTH 20

/// @brief computation of common-mode voltage v_{0}
/// @param i0 
/// @param e 
/// @param val 
/// @param vbe 
/// @param ia 
/// @param ib 
/// @param ic 
/// @return common-mode voltage (v_{0})
float computeV0(float i0, float e, float val, float vbe, float ia, float ib, float ic);

/// @brief return max of two numberss
/// @param a 
/// @param b 
/// @return the greater number
extern inline float max_of_two(float a, float b);

/// @brief return max of three numbers
/// @param a 
/// @param b 
/// @param c 
/// @return the greater number
extern inline float max_of_three(float a, float b, float c);

/// @brief return min of two numberss
/// @param a 
/// @param b 
/// @return the lower number
extern inline float min_of_two(float a, float b);

/// @brief return min of three numberss
/// @param a 
/// @param b 
/// @param c 
/// @return the lower number
extern inline float min_of_three(float a, float b, float c);

#endif