/**
 * @file DifFilter.h
 * @brief Class for first-order differentiators
 * @author Dan Oates (WPI Class of 2020)
 */
#pragma once
#include <LTIFilter.h>

/**
 * Class Declaration
 */
class DifFilter : public LTIFilter
{
public:
	DifFilter(float fs);
};
