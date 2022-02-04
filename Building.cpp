// CS 271
// Program Name: Building.cpp
// Author: Trent Tucker
// Date: December 1, 2020
// Purpose: This program contains the implementations for the functions defined in the header class

#include <iostream>
#include "CarbonFootprint.h"
#include "Building.h"
using namespace std;

// constructor implementation
Building::Building(unsigned int a, unsigned int wF, unsigned int b, unsigned int c, unsigned int sP) {
	Building::setArea(a);
	Building::setWoodFrame(wF);
	Building::setBasement(b);
	Building::setConcrete(c);
	Building::setSteelParts(sP);
} // end Building

// used in the overriding process
int Building:: getCarbonFootprint() {
	return Building::getArea() * (Building::getBasement() + Building::getConcrete() + Building::getSteelParts() + Building::getWoodFrame());  
} // end getCarbonFootprint

// set function implementations
void Building::setArea(unsigned int x) {
	Building::area = x;
} // end setArea

void Building::setWoodFrame(unsigned int x) {
        Building::woodFrame = x;
} // end setWoodFrame

void Building::setBasement(unsigned int x) {
        Building::basement = x;
} // end setBasement

void Building::setConcrete(unsigned int x) {
        Building::concrete = x;
} // end setConcrete

void Building::setSteelParts(unsigned int x) {
        Building::steelParts = x;
} // end setSteelParts

// get function implementations
int Building::getArea() {
	return Building::area;
} //end getArea

int Building::getWoodFrame() {
	return Building::woodFrame;
} //end getWoodFrame

int Building::getBasement() {
	return Building::basement;
} //end getBasement

int Building::getConcrete() {
	return Building::concrete;
} //end getConcrete

int Building::getSteelParts() {
	return Building::steelParts;
} //end getSteelParts



