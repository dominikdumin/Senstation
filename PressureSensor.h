#pragma once
#include <stdint.h>
#include <string>
#include "Sensor.h"

class PressureSensor : public Sensor
{
public:
	PressureSensor(uint16_t id, std::string name);
	~PressureSensor();

	std::string Signature() const override;
protected:
};