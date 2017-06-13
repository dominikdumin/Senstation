#pragma once
#include "SensorCreator.h"
#include "PressureSensor.h"

class PressureSensorCreator :
	public SensorCreator
{
public:
	PressureSensorCreator();
	~PressureSensorCreator();

	Sensor* Create(std::string params) override;
	std::string Creates() const override;
};

