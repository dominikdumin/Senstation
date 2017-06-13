#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "PortCreator.h"
#include "OneWirePort.h"
#include "Explode.h"

class OneWirePortCreator :
	public PortCreator
{
public:
	OneWirePortCreator();
	~OneWirePortCreator();

	OneWirePort* Create(std::string params) override;
	std::string Creates() const override;
};

