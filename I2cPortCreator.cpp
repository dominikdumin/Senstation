#include "stdafx.h"
#include "I2cPortCreator.h"



I2cPortCreator::I2cPortCreator()
{
}

I2cPortCreator::~I2cPortCreator()
{
}

Port * I2cPortCreator::Create(std::string params)
{
	return new I2cPort(123, "lala");
}

std::string I2cPortCreator::Creates() const
{
	return "I2cPort";
}
