// CS 271
// Program Name: distinct.cpp
// Author: Trent Tucker
// Date: October 21, 2020
// Purpose: The purpose of this program is to test the template
//          distinct.h.

#include <iostream>
using namespace std;
#include "distinct.h" // include definition of function template distinct

int main() {
   // demonstrate distinct with int values
   int int1, int2, int3;

   cout << "Input three integer values: ";
   cin >> int1 >> int2 >> int3;

   // invoke int version of distinct
   cout << "The number of distinct values is "
      << distinct( int1, int2, int3 );

   // demonstrate distinct with char values
   char char1, char2, char3;

   cout << "\n\nInput three character values: ";
   cin >> char1 >> char2 >> char3;

   // invoke char version of distinct
   cout << "The number of distinct values is "
      << distinct( char1, char2, char3 );      

   // demonstrate distinct with double values
   double double1, double2, double3;

   cout << "\n\nInput three floating-point values: ";
   cin >> double1 >> double2 >> double3;

   // invoke double version of distinct
   cout << "The number of distinct values is "
      << distinct( double1, double2, double3 ) << endl;
} // end main
