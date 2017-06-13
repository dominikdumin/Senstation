#include "stdafx.h"
#include "I2cPort.h"


I2cPort::I2cPort(uint16_t id, std::string name) : Port(id, name)
{
}

I2cPort::~I2cPort()
{
}

std::string I2cPort::Signature() const
{
	return "I2cPort";
}
