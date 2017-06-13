#pragma once
#include "Port.h"
class I2cPort :
	public Port
{
public:
	I2cPort(uint16_t id, std::string name);
	~I2cPort();

	std::string Signature() const override;
};

