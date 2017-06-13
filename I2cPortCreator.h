#pragma once
#include <vector>
#include <string>
#include "PortCreator.h"
#include "I2cPort.h"
#include "Explode.h"

class I2cPortCreator : public PortCreator
{
public:
	I2cPortCreator();
	~I2cPortCreator();

	I2cPort* Create(std::string params) override;
	std::string Creates() const override;
};

