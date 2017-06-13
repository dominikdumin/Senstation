#include "stdafx.h"
#include "TemperatureSensor.h"


TemperatureSensor::~TemperatureSensor()
{
	delete value;
}

TemperatureSensor::TemperatureSensor(uint16_t id, std::string name) : Sensor(id, name)
{
	value = new DoubleResult(0.0, "st.C");
}

std::string TemperatureSensor::Signature() const
{
	return "TemperatureSensor";
}

DoubleResult * TemperatureSensor::Measure()
{
	srand(time(NULL));
	value->Randomize(-40.0, 40.0);
	return value;
}

DoubleResult * TemperatureSensor::GetValue()
{
	return value;
}
