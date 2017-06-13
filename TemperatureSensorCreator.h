#pragma once
#include "SensorCreator.h"
#include "TemperatureSensor.h"

class TemperatureSensorCreator : public SensorCreator
{
public:
	TemperatureSensorCreator();
	~TemperatureSensorCreator();

	Sensor* Create(std::string params) override;
	std::string Creates() const override;
};

