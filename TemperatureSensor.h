#pragma once
#include <stdint.h>
#include <string>
#include "Sensor.h"

class TemperatureSensor : public Sensor
{
public:
	TemperatureSensor(uint16_t id, std::string name);
	~TemperatureSensor();

	std::string Signature() const override;
protected:

};