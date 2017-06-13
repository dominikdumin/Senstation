#pragma once
#include <stdint.h>
#include <string>

class Sensor
{
public:
	Sensor(uint16_t id, std::string name);
	virtual ~Sensor();

	virtual std::string Signature() const = 0;
	uint16_t Id() const;
	std::string Name() const;

protected:
	uint16_t id;
	std::string name;
};