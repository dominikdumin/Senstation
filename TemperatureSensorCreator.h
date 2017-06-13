#pragma once
#include <vector>
#include <string>
#include "Explode.h"
#include "SensorCreator.h"
#include "TemperatureSensor.h"

class TemperatureSensorCreator : public SensorCreator
{
public:
	TemperatureSensorCreator();
	~TemperatureSensorCreator();

	TemperatureSensor* Create(std::vector<Port*> ports, std::string params) override;
	std::string Creates() const override;
};

