#pragma once
#include "PortCreator.h"
#include "I2cPort.h"

class I2cPortCreator : public PortCreator
{
public:
	I2cPortCreator();
	~I2cPortCreator();

	Port* Create(std::string params) override;
	std::string Creates() const override;
};

