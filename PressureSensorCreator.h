#pragma once
#include <string>
#include <vector>
#include "Explode.h"
#include "SensorCreator.h"
#include "PressureSensor.h"

class PressureSensorCreator :
	public SensorCreator
{
public:
	PressureSensorCreator();
	~PressureSensorCreator();

	PressureSensor* Create(std::vector<Port*> ports, std::string params) override;
	std::string Creates() const override;
};

