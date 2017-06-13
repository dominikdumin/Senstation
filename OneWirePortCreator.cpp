#include "stdafx.h"
#include "OneWirePortCreator.h"


OneWirePortCreator::OneWirePortCreator()
{
}


OneWirePortCreator::~OneWirePortCreator()
{
}

Port * OneWirePortCreator::Create(std::string params)
{
	return new OneWirePort(123, "abc abc ow");
}

std::string OneWirePortCreator::Creates() const
{
	return "OneWirePort";
}
