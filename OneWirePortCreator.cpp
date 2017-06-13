#include "stdafx.h"
#include "OneWirePortCreator.h"


OneWirePortCreator::OneWirePortCreator()
{
}


OneWirePortCreator::~OneWirePortCreator()
{
}

OneWirePort * OneWirePortCreator::Create(std::string params)
{
	OneWirePort* res = nullptr;
	std::vector<std::string> v{ explode(params, ' ') };

	if (v.size() == 2)
	{
		res = new OneWirePort(std::stoi(v[0]), v[1]);
	}

	return res;
}

std::string OneWirePortCreator::Creates() const
{
	return "OneWirePort";
}
