// Name : Angel E Hernandez
// Date : April 17
// CIS 1202.800
// Project name : Inheritance

#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "Vehicle.h"
using namespace std;



int main()

{
	// create a vehicle object
	Vehicle v;
	// show vehicle information
	v.displayInfo();
	// create a car object
	Car c;
	// show car information
	c.displayInfo();
	// create a truck information
	Truck t;
	// show truck information
	t.displayInfo();

	system("pause");
	return 0;

}