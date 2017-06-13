#include "stdafx.h"
#include "TemperatureSensor.h"


TemperatureSensor::~TemperatureSensor()
{
}

TemperatureSensor::TemperatureSensor(uint16_t id, std::string name) : Sensor(id, name)
{
}

std::string TemperatureSensor::Signature() const
{
	return "TemperatureSensor";
}
