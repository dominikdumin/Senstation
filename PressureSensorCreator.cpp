#include "stdafx.h"
#include "PressureSensorCreator.h"


PressureSensorCreator::PressureSensorCreator()
{
}


PressureSensorCreator::~PressureSensorCreator()
{
}

Sensor * PressureSensorCreator::Create(std::string params)
{
	return new PressureSensor(65432765, "³azienka");
}

std::string PressureSensorCreator::Creates() const
{
	return "PressureSensor";
}
