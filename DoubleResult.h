#pragma once
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include "Result.h"

class DoubleResult :
	public Result
{
public:
	DoubleResult(double value, std::string unit);
	~DoubleResult();

	std::string ToString() const override;
	void Update(double value);
	void Randomize(double min, double max);

protected:
	double value;
};