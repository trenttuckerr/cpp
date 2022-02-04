// CS 271
// Program Name: CarbonFootprint.h
// Author: Trent Tucker
// Date: December 1, 2020 
// Purpose: This program defines an abstract class that contains the pure virtual function needed for our carbon footprint project. 

#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H

#include <iostream>
using namespace std;

// abstract class
class CarbonFootprint {
        public: 
		// pure virtual function
                virtual int getCarbonFootprint() = 0;
}; // end of class CarbonFootprint

#endif
