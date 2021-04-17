// Name : Angel E Hernandez
// Date : April 17
// CIS 1202.800
// Project name : Inheritance

#pragma once
#include <iostream>
#include "Car.h"
using namespace std;


void Car::displayInfo()
{
	string manufact;
	int vYear;
	int numDoors;

	// prompt user to enter information
	cout << "Car: \n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufact);
	cout << "Enter the year built: ";
	cin >> vYear;
	cout << "Enter the number of doors: ";
	cin >> numDoors;

	// define a vehicle object
	Car car(manufact, vYear, numDoors);

	// display information
	cout << "Vehicle information: \n";
	cout << "Manufacturer: " << car.getManufacturer() << endl;
	cout << "Year Buil: " << car.getYear() << endl;
	cout << "Doors: " << car.getDoors() << endl;
	cout << endl;

}