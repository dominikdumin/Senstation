#include "stdafx.h"
#include "TemperatureSensorCreator.h"


TemperatureSensorCreator::TemperatureSensorCreator()
{
}


TemperatureSensorCreator::~TemperatureSensorCreator()
{
}

TemperatureSensor * TemperatureSensorCreator::Create(std::vector<Port*> ports, std::string params)
{
	TemperatureSensor* res = nullptr;
	std::vector<std::string> v{ explode(params, ' ') };

	if (v.size() >= 2)
	{
		res = new TemperatureSensor(std::stoi(v[0]), v[1]);
	}

	if (v.size() == 3)
	{
		for (auto it = ports.begin(); it < ports.end(); ++it)
		{
			if ((*it)->Id() == std::stoi(v[2]))
				res->ConnectPort(*it);
		}
	}
	return res;
}

std::string TemperatureSensorCreator::Creates() const
{
	return "TemperatureSensor";
}
