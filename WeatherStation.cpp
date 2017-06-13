#include "stdafx.h"
#include <iostream>
#include "WeatherStation.h"


WeatherStation::WeatherStation()
{
	RegisterPortCreator(new I2cPortCreator());
	RegisterPortCreator(new OneWirePortCreator());

	RegisterSensorCreator(new TemperatureSensorCreator());
	RegisterSensorCreator(new PressureSensorCreator());
}


WeatherStation::~WeatherStation()
{
}

void WeatherStation::AddSensor(std::string sensor, std::string params)
{
	auto it = sensorCreators.find(sensor);

	Sensor* toAdd;
	if (it != sensorCreators.end())
	{
		toAdd = sensorCreators[sensor]->Create(ports, params);
		if(toAdd != nullptr)
			sensors.push_back(toAdd);
	}
}

void WeatherStation::AddPort(std::string port, std::string params)
{
	auto it = portCreators.find(port);

	Port* toAdd;
	if (it != portCreators.end())
	{
		toAdd = portCreators[port]->Create(params);
		
		if (toAdd != nullptr)
			ports.push_back(toAdd);
	}
}

std::string WeatherStation::MeasureSensor(std::string id)
{
	uint16_t intId = std::stoi(id);
	for (auto it = sensors.begin(); it != sensors.end(); ++it)
	{
		if ((*it)->Id() == intId)
			return (*it)->Measure()->ToString();
	}
	return std::string();
}



void WeatherStation::ExecuteCommand(std::string command)
{
	std::vector<std::string> v{ explode(command, ' ') };

	std::string cmd = (v.size() >= 1) ? v[0] : "";
	std::string paramL = (v.size() >= 2) ? v[1] : "";
	std::string params = "";
	if (v.size() >= 3)
	{
		for (int i = 2; i < v.size(); i++)
		{
			params += (i == 2) ? v[i] : " " + v[i];
		}
	}


	if (cmd == "addPort")
	{
		AddPort(paramL, params);
	}
	else if (cmd == "addSensor")
	{
		AddSensor(paramL, params);
	}
	else if (cmd == "measureSensor")
	{
		std::cout << MeasureSensor(paramL) << std::endl;
	}
}

void WeatherStation::RegisterPortCreator(PortCreator * creator)
{
	portCreators[creator->Creates()] = creator;
}

void WeatherStation::RegisterSensorCreator(SensorCreator * creator)
{
	sensorCreators[creator->Creates()] = creator;
}
