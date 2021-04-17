// Name : Angel E Hernandez
// Date : April 17
// CIS 1202.800
// Project name : Inheritance

#pragma once
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <string>
using namespace std;

// define Car class 

class Car : public Vehicle
{
private:
	int doors;
public:
	// defaul constructor
	Car() : Vehicle()
	{
		doors = 0;
	}

	// constructor 2
	Car(string vehicleManf, int vehicleYear, int vehicleDoors)
		: Vehicle(vehicleManf, vehicleYear)
	{
		doors = vehicleDoors;
	}

	// Accesor for door attribute
	int getDoors()
	{
		return doors;
	}
	// display info
	void displayInfo();  // define in car.cpp

};
#endif
