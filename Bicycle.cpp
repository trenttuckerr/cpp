// CS 271
// Program Name: Bicycle.cpp
// Author: Trent Tucker
// Date: December 1, 2020
// Purpose: This program contains the implementations for the Bicycle class.

#include <iostream>
#include "Bicycle.h"
using namespace std;

// set function implementation
void Bicycle::setSeatNumber(unsigned int x) {
	Bicycle::seatNumber = x;
} // end setSeatNumber

unsigned int Bicycle::getSeatNumber() {
	return Bicycle::seatNumber;
} // end getSeatNumber
