#include "stdafx.h"
#include "IntResult.h"


IntResult::IntResult(int value, std::string unit) : Result(unit)
{
	this->value = value;
}

IntResult::~IntResult()
{
}

std::string IntResult::ToString() const
{
	return std::to_string(value) + " " + unit;
}

void IntResult::Update(int value)
{
	this->value = value;
}

void IntResult::Randomize(double min, double max)
{
	if (min < max)
	{
		int range = max - min;
		srand(time(NULL));
		value = static_cast<double>((rand() % (range * 10)) / 10) + min;
	}
}
