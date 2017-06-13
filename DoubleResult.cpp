#include "stdafx.h"
#include "DoubleResult.h"


DoubleResult::DoubleResult(double value, std::string unit) : Result(unit)
{
	this->value = value;
}

DoubleResult::~DoubleResult()
{
}

std::string DoubleResult::ToString() const
{
	return std::to_string(value) + " " + unit;
}

void DoubleResult::Update(double value)
{
	this->value = value;
}

void DoubleResult::Randomize(double min, double max)
{
	if (min < max)
	{
		
		double range = max - min;
		int intRange = static_cast<int>(range);
		srand(time(NULL));
		value = static_cast<double>((rand() % (intRange * 10))) / 10.0 + min;
	}
}
