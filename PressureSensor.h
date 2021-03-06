#pragma once
#include <stdint.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Sensor.h"
#include "DoubleResult.h"

class PressureSensor : public Sensor
{
public:
	PressureSensor(uint16_t id, std::string name);
	~PressureSensor();

	std::string Signature() const override;
	Result* Measure() override;
	Result* GetValue() override;
};