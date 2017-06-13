#pragma once
#include "PortCreator.h"
#include "OneWirePort.h"

class OneWirePortCreator :
	public PortCreator
{
public:
	OneWirePortCreator();
	~OneWirePortCreator();

	Port* Create(std::string params) override;
	std::string Creates() const override;
};

