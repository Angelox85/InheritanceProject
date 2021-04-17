// Name : Angel E Hernandez
// Date : April 17
// CIS 1202.800
// Project name : Inheritance

#pragma once
#include <iostream>
#include "Vehicle.h"

using namespace std;

// define displayInfo function from vehicle class
void Vehicle::displayInfo()
{
	string manufact;
	int vYear;

	cout << "vehicle Program" << endl << endl;

	// prompt user to enter information
	cout << "Vehicle: \n";
	cout << "Enter the manufacturer: ";
	getline(cin, manufact);
	cout << "Enter the year built: ";
	cin >> vYear;

	// define a vehicle object
	Vehicle veh(manufact, vYear);

	// display information
	cout << "Vehicle information: \n";
	cout << "Manufacturer: " << veh.getManufacturer() << endl;
	cout << "Year Buil: " << veh.getYear() << endl;
	cout << endl;

}