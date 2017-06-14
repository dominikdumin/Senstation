#pragma once
#include <stdint.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Sensor.h"
#include "DoubleResult.h"

class TemperatureSensor : public Sensor
{
public:
	TemperatureSensor(uint16_t id, std::string name);
	~TemperatureSensor();

	std::string Signature() const override;
	Result* Measure() override;
	Result* GetValue() override;
};