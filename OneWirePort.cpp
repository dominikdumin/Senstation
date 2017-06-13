#include "stdafx.h"
#include "OneWirePort.h"


OneWirePort::OneWirePort(uint16_t id, std::string name) : Port(id, name)
{
}

OneWirePort::~OneWirePort()
{
}

std::string OneWirePort::Signature() const
{
	return "OneWirePort";
}
