// Senstation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdint.h>
#include <string>
#include <iostream>
#include "TemperatureSensor.h"
#include "TemperatureSensorCreator.h"
using namespace std;


int main()
{
	Sensor *s;
	TemperatureSensorCreator cr;
	s = cr.Create("aa");
	cout << s->Id();
	getchar();
    return 0;
}

