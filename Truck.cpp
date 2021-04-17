// Name : Angel E Hernandez
// Date : April 17
// CIS 1202.800
// Project name : Inheritance

#pragma once
#include <iostream>
#include "Truck.h"
using namespace std;

// define display function for truck class

void Truck::displayInfo()
{
	string manufact;
	int vYear;
	int cap;


	// prompt user to enter information
	cout << "Car: \n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufact);
	cout << "Enter the year built: ";
	cin >> vYear;
	cout << "Enter the towing capacity: ";
	cin >> cap;


	// define a vehicle object
	Truck truck(manufact, vYear, cap);

	// display information
	cout << "Vehicle information: \n";
	cout << "Manufacturer: " << truck.getManufacturer() << endl;
	cout << "Year Buil: " << truck.getYear() << endl;
	cout << "Towing capacity: " << truck.getCapacity() << endl;
	cout << endl;

}