#include "stdafx.h"
#include "WeatherStation.h"


WeatherStation::WeatherStation()
{
	RegisterSensorCreator(new TemperatureSensorCreator());
	RegisterSensorCreator(new PressureSensorCreator());
}


WeatherStation::~WeatherStation()
{
}

void WeatherStation::AddSensor(std::string sensor, std::string params)
{
	sensors.push_back(sensorCreators[sensor]->Create(params));
}

void WeatherStation::RegisterPortCreator(PortCreator * creator)
{
	portCreators[creator->Creates()] = creator;
}

void WeatherStation::RegisterSensorCreator(SensorCreator * creator)
{
	sensorCreators[creator->Creates()] = creator;
}
