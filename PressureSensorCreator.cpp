#include "stdafx.h"
#include "PressureSensorCreator.h"


PressureSensorCreator::PressureSensorCreator()
{
}


PressureSensorCreator::~PressureSensorCreator()
{
}

PressureSensor * PressureSensorCreator::Create(std::vector<Port*> ports, std::string params)
{
	PressureSensor* res = nullptr;
	std::vector<std::string> v{ explode(params, ' ') };

	if (v.size() >= 2)
	{
		return new PressureSensor(std::stoi(v[0]), v[1]);
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

std::string PressureSensorCreator::Creates() const
{
	return "PressureSensor";
}
