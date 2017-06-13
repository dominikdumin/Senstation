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
	void Randomize(int min, int max);

protected:
	int value;
};