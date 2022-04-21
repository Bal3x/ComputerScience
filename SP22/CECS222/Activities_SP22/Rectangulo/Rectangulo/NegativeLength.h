#pragma once
#include <stdexcept>
#include <string>
class NegativeLength
{
private:
	double value;
public:
	NegativeLength(double val)
	{
		value = val;
	}
	double getValue() const
	{
		return value;
	}
};