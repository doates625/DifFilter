/**
 * @file DifFilter.cpp
 * @author Dan Oates (WPI Class of 2020)
 */
#include <DifFilter.h>

/**
 * @brief Constructor
 * @param fs Sample frequency
 */
DifFilter::DifFilter(float fs) :
	LTIFilter()
{
	A = 1;
	B = 2;
	a[0] = 1.0f;
	b[0] = +fs;
	b[1] = -fs;
}
