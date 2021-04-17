// Name : Angel E Hernandez
// Date : April 17
// CIS 1202.800
// Project name : Inheritance

#pragma once
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <string>
using namespace std;


// Truck is a type of vehicle that inherits members variables
//and functions from the class vehicle

class Truck : public Vehicle
{
private:
	int capacity = 0;
public:
	// defaul constructor
	Truck() : Vehicle()
	{
		int capacity = 0;
	}

	// constructor 2
	Truck(string vehicleManf, int vehicleYear, int vehicleCapacity)
		: Vehicle(vehicleManf, vehicleYear)
	{
		capacity = vehicleCapacity;
	}

	// Accesor for capacity attribute
	int getCapacity()
	{
		return capacity;
	}

	// display info
	void displayInfo(); // define in truck.cpp

};
#endif