#pragma once
#include <string>
#include "Port.h"

class PortCreator
{
public:
	PortCreator();
	virtual ~PortCreator();

	virtual Port* Create(std::string params) = 0;
	virtual std::string Creates() const = 0;
};

