// math_utils.cpp
//
// This file contains math helper functions for the calculations
// using in the EuropeanOption.cpp class

#include <stdio.h>
#include <math.h>
#include <iostream>

// This returns the value from the cumilative normal density function
// for the standard normal distribution
double N(double value)
{
   return 0.5 * erfc(-value * M_SQRT1_2);
}
