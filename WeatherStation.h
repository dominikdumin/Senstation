#pragma once
#include <vector>
#include <string>
#include <map>
#include "Port.h"
#include "PortCreator.h"
#include "I2cPortCreator.h"
#include "OneWirePortCreator.h"
#include "Sensor.h"
#include "SensorCreator.h"
#include "PressureSensorCreator.h"
#include "TemperatureSensorCreator.h"

class WeatherStation
{
public:
	WeatherStation();
	~WeatherStation();

	void AddSensor(std::string sensor, std::string params);
private:
	std::map<std::string, PortCreator*> portCreators;
	std::vector<Sensor*> sensors;
	std::map<std::string, SensorCreator*> sensorCreators;

	void RegisterPortCreator(PortCreator* creator);
	void RegisterSensorCreator(SensorCreator* creator);
};

