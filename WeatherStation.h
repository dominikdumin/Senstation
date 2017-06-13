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

#include "Explode.h"

class WeatherStation
{
public:
	WeatherStation();
	~WeatherStation();

	void AddSensor(std::string sensor, std::string params);
	void AddPort(std::string port, std::string params);
	std::string MeasureSensor(std::string id);
	void ExecuteCommand(std::string command);

private:
	std::map<std::string, PortCreator*> portCreators;
	std::map<std::string, SensorCreator*> sensorCreators;

	std::vector<Port*> ports;
	std::vector<Sensor*> sensors;
	
	void RegisterPortCreator(PortCreator* creator);
	void RegisterSensorCreator(SensorCreator* creator);
};