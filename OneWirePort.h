#pragma once
#include "Port.h"
class OneWirePort :
	public Port
{
public:
	OneWirePort(uint16_t id, std::string name);
	~OneWirePort();

	std::string Signature() const override;
};

