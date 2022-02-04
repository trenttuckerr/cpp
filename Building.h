// CS 271
// Program Name: Building.h
// Author: Trent Tucker
// Date: December 3, 2020
// Purpose: This program contains the data members and member functions for the Building class.

#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include "CarbonFootprint.h"
using namespace std;

class Building : public CarbonFootprint {
	private:
	       	// define the elements of a building
		unsigned int area, woodFrame, basement, concrete, steelParts;
	public:
		// necessary since we will have to override the pure virtual function
		virtual int getCarbonFootprint() override;
		// constructor for a building object
		Building(unsigned int a, unsigned int wF, unsigned int b, unsigned int c, unsigned int sP);
		// set functions
		void setArea(unsigned int x);
		void setWoodFrame(unsigned int x);
		void setBasement(unsigned int x);
		void setConcrete(unsigned int x);
		void setSteelParts(unsigned int x);
		// get functions
		int getArea();
		int getWoodFrame();
		int getBasement();
		int getConcrete();
		int getSteelParts();
}; // end class Building

#endif
