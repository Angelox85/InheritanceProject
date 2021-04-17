// Name : Angel E Hernandez
// Date : April 17
// CIS 1202.800
// Project name : Inheritance

#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

// The vehicle class holds general data 
class Vehicle
{
	private:
		string manufacturer;
		int year;
	public:
		// defaul constructor
		Vehicle()
		{
			manufacturer = " ";
			year = 0;
		}
		// Constructor
		Vehicle(string vehicleManf, int vehicleYear)
		{
			manufacturer = vehicleManf;
			year = vehicleYear;

		}

		// getters
		string getManufacturer() const
		{
			return manufacturer;
		}

		int getYear()
		{
			return year;
		}
		// display info
		void displayInfo();  // define in vehicle.cpp


};
#endif
