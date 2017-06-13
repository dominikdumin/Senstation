#pragma once
#include <stdint.h>
#include <string>
#include "Result.h"
#include "Port.h"

class Sensor
{
public:
	Sensor(uint16_t id, std::string name);
	virtual ~Sensor();

	virtual std::string Signature() const = 0;
	uint16_t Id() const;
	std::string Name() const;

	virtual Result* Measure() = 0;
	virtual Result* GetValue() = 0;

	virtual void ConnectPort(Port* port);

protected:
	uint16_t id;
	std::string name;

	Port* port;
};