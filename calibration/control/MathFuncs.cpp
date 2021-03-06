
#include "MathFuncs.h"

/* Minimum function */
float min(double x, double y)
{
	return (x < y) ? x : y;
}

/* Maximum function */
float max(double x, double y)
{
	return (x > y) ? x : y;
}

// Saturate a value between minimum boundary and maximum boundary
float saturate(double in, double min_val, double max_val){
	return min(max(in, min_val), max_val);
}
