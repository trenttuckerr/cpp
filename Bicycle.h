// CS 271
// Program Name: Bicycle.h
// Author: Trent Tucker
// Date: December 1, 2020
// Purpose: This program contains the data members and member functions for the bicycle poriton of the carbon footprint calculation.

#ifndef BICYCLE_H
#define BICYCLE_H

#include <iostream>
#include "CarbonFootprint.h"
using namespace std;

class Bicycle : public CarbonFootprint {
	private:
		unsigned int seatNumber;
	public:
		// constructor for bikes
		Bicycle(unsigned int x) {
			Bicycle::setSeatNumber(x);
		}
		// used to override the pure virtual function
		virtual int getCarbonFootprint() override { return 0; }
		// set function
		void setSeatNumber(unsigned int x);
		// get function
		unsigned int getSeatNumber();
}; // end class Bicycle

#endif
