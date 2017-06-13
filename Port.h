#pragma once
#include <stdint.h>
#include <string>

class Port
{
public:
	Port(uint16_t id, std::string name);
	virtual ~Port();

	virtual std::string Signature() const = 0;
	uint16_t Id() const;
	std::string Name() const;

protected:
	uint16_t id;
	std::string name;
};