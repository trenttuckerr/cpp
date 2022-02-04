// CS 271
// Program Name: Car.cpp
// Author: Trent Tucker
// Date: December 1, 2020
// Purpose: This program contains the implementations derived from the Car header file.

#include <iostream>
#include "CarbonFootprint.h"
#include "Car.h"
using namespace std;

// constructor
Car::Car(unsigned int x) {
	Car::setGallons(x);
} // end Car

// set function
void Car::setGallons(unsigned int x) {
	Car::gallons = x;
} // end setGallons

// get function
int Car::getGallons() {
	return Car::gallons;
} // end getGallons

// footprint
int Car::getCarbonFootprint() {
	// implement given formula
	return Car::getGallons() * 20;
} // end getCarbonFootprint
