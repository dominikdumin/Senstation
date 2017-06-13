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

DoubleResult * PressureSensor::Measure()
{
	srand(time(NULL));
	value->Randomize(900.0, 1100.0);
	return value;
}

DoubleResult * PressureSensor::GetValue()
{
	return value;
}
