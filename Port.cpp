#include "stdafx.h"
#include "Port.h"


Port::Port(uint16_t id, std::string name)
{
	this->id = id;
	this->name = name;
}

Port::~Port()
{
}

uint16_t Port::Id() const
{
	return id;
}

std::string Port::Name() const
{
	return name;
}
