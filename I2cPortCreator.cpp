#include "stdafx.h"
#include "I2cPortCreator.h"



I2cPortCreator::I2cPortCreator()
{
}

I2cPortCreator::~I2cPortCreator()
{
}

I2cPort * I2cPortCreator::Create(std::string params)
{
	I2cPort* res = nullptr;
	std::vector<std::string> v{ explode(params, ' ') };

	if (v.size() == 2)
	{
		res = new I2cPort(std::stoi(v[0]), v[1]);
	}

	return res;

}

std::string I2cPortCreator::Creates() const
{
	return "I2cPort";
}
