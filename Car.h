// CS 271
// Program Name: Car.h
// Author: Trent Tucker
// Date: December 1, 2020
// Purpose: This program contains the declaration of the data members and member unctions of the car porion of the carbon footprint tracking.

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "CarbonFootprint.h"
using namespace std;

class Car: public CarbonFootprint {
	private:
		unsigned int gallons;
	public:
		// used to override the pure virtual function
		virtual int getCarbonFootprint() override;
		// constructor
		Car(unsigned int x);
		// set function
		void setGallons(unsigned int x);
		//get function
		int getGallons();
}; // end class Car

#endif
