#include "stdafx.h"
#include "PressureSensor.h"


PressureSensor::~PressureSensor()
{
	delete value;
}

PressureSensor::PressureSensor(uint16_t id, std::string name) : Sensor(id, name)
{
	value = new DoubleResult(0.0, "hPa");
}

std::string PressureSensor::Signature() const
{
	return "PressureSensor";
}

Result * PressureSensor::Measure()
{
	srand(time(NULL));
	value->Randomize(900.0, 1100.0);
	return value;
}

Result * PressureSensor::GetValue()
{
	return value;
}
