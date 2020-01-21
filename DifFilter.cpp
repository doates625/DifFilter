/**
 * @file DifFilter.cpp
 * @author Dan Oates (WPI Class of 2020)
 */
#include <DifFilter.h>

/**
 * @brief Constructor
 * @param fs Sample frequency
 */
DifFilter::DifFilter(float fs);
{
	// Allocate data
	const uint8_t A = 1; float a[A];
	const uint8_t B = 2; float b[B];

	// Assign coefficients
	a[0] = 1.0f;
	b[0] = +fs;
	b[1] = -fs;

	// Construct filter
	(*this) = LTIFilter(A, a, B, b);
}
