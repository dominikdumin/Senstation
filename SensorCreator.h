#pragma once
#include <string>
#include "Sensor.h"

class SensorCreator
{
public:
	SensorCreator();
	virtual ~SensorCreator();

	virtual Sensor* Create(std::string params) = 0;
	virtual std::string Creates() const = 0;
};

