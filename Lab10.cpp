// CS 271
// Program Name: Lab10.cpp
// Author: Trent Tucker
// Date: December 1, 2020
// Purpose: The purpose of this program is to test and produce output from the created programs in the directory.

using namespace std;
#define ARRAY_SIZE 10

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "CarbonFootprint.h"
#include "Building.h"
#include "Car.h"
#include "Bicycle.h"

int main() {
	CarbonFootprint *footprints[ARRAY_SIZE * 3];
	Building *buildings = (Building*) calloc(ARRAY_SIZE, sizeof(Building));
	Car *cars = (Car*) calloc(ARRAY_SIZE, sizeof(Car));
	Bicycle *bicycles = (Bicycle*) calloc(ARRAY_SIZE, sizeof(Bicycle));
	for(int i = 0; i < ARRAY_SIZE; i++) {
		buildings[i] = Building(2500, 50, 20, 47, 17); // creates a building with 2500 square feet
		cars[i] = Car(10); // creates a car that has used 10 gallons of gas
		bicycles[i] = Bicycle(1); // creates a one seater
	} // end for loop
	for(int i = 0; i < ARRAY_SIZE; i++) {
                footprints[i] = new Car(cars[i].getGallons());
                footprints[i+10] = new Building(buildings[i].getArea(), 50, 20, 47, 17);
                footprints[i+20] = new Bicycle(bicycles[i].getSeatNumber());
        } // end for loop
        // for loop for the readable output
        for(int i = 0; i < 1; i++) {
                cout << "Bicycle: " << footprints[i+20]->getCarbonFootprint() << endl;
                cout << "Building with " << buildings[i].getArea() << " square feet: " << footprints[i+10]->getCarbonFootprint() << endl;
                cout << "Car that has used " << cars[i].getGallons() << " gallons of gas: " << footprints[i]->getCarbonFootprint() << endl;
        } // end for loop
} // end main
