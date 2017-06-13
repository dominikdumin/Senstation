#pragma once
#include <string>
#include <vector>
#include "Sensor.h"
#include "Port.h"

class SensorCreator
{
public:
	SensorCreator();
	virtual ~SensorCreator();

	virtual Sensor* Create(std::vector<Port*> ports, std::string params) = 0;
	virtual std::string Creates() const = 0;
};

