#include "stdafx.h"
#include "TemperatureSensorCreator.h"


TemperatureSensorCreator::TemperatureSensorCreator()
{
}


TemperatureSensorCreator::~TemperatureSensorCreator()
{
}

Sensor * TemperatureSensorCreator::Create(std::string params)
{
	return new TemperatureSensor(634635, "kuchnia");
}

std::string TemperatureSensorCreator::Creates() const
{
	return "TemperatureSensor";
}
