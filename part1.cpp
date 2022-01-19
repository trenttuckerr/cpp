// CS 271
// Program Name: part1.cpp
// Author: Trent Tucker
// Date: 10/21/2020
// Purpose: The purpose of this program is to receive a radius
//          and output an area using inline functions.

#include <iostream>
#include <iomanip>
using namespace std;

inline double circleArea(const double radius) {
    return 3.14159 * (radius * radius); 
}

int main() {
    double rad; // declares the radius variable as a double so it can be used in more cases
    int run = 1; // used to continuously run the while loop
    while (run == 1) {  // runs repeatedly and ends only when if statement is true
        cout << "Enter the radius of your circle (-1 to end): ";
        cin >> rad; // assigns the input to rad
        if (rad == -1) {
            break;  // breaks due to user entering the ending integer
        }
        cout << "Area of circle with radius " << rad << " is " << circleArea(rad) << endl; // calls inline function to find area
        cout << endl;
    }
    cout  <<  "Good bye!" << endl;
}