#include "stdafx.h"
#include "PressureSensor.h"


PressureSensor::~PressureSensor()
{
}

PressureSensor::PressureSensor(uint16_t id, std::string name) : Sensor(id, name)
{
}

std::string PressureSensor::Signature() const
{
	return "PressureSensor";
}
