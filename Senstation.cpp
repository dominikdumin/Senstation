// Senstation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdint.h>
#include <string>
#include <iostream>
#include "TemperatureSensor.h"
#include "TemperatureSensorCreator.h"
#include "DoubleResult.h"
#include "WeatherStation.h"
using namespace std;


int main()
{
	WeatherStation ws;
	ws.ExecuteCommand("addPort OneWirePort 14 mojport");
	ws.ExecuteCommand("addSensor PressureSensor 10 kuchnia 14");
	ws.ExecuteCommand("measureSensor 10");
	getchar();
    return 0;
}

