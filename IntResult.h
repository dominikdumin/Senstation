#pragma once
#include <cstdlib>
#include <ctime>
#include <string>
#include "Result.h"

class IntResult :
	public Result
{
public:
	IntResult(int value, std::string unit);
	~IntResult();

	std::string ToString() const override;
	void Update(int value);
	void Randomize(double min, double max) override;

protected:
	int value;
};