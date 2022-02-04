// CS 271
// Program Name: Calendar.cpp
// Author: Trent Tucker
// Date: October 29, 2020
// Purpose: This program tests the programs we have written for this lab.

#include <iostream>
#include <stdexcept>
#include <exception>
#include <cstdlib>
#include <ctime>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;
#define SIZE 5 // declares a local constant SIZE with value 5
class invalid_argument;
   int main() {
   Date d[SIZE];
   const int MIN_YEAR = 1950; // decalring local constant using "const"
   const int MAX_YEAR = 2049; // declaring local constant using "const"
   for( int i = 0; i < SIZE; i++ ) { 
      // generate a random number between MIN_YEAR and MAX_YEAR
      int randomYear;
      srand((unsigned)time(0));
      randomYear = rand() % (MAX_YEAR - MIN_YEAR + 1) + MIN_YEAR;
      d[i].setYear(randomYear);
      cout << "Enter a month and day for the generated year " << randomYear
	      << endl;
      int enteredMonth;
      int enteredDay;
      cin >> enteredMonth; // sends user input to enteredMonth
      cin >> enteredDay; // sends user input to enteredDay
      d[i].setMonth(enteredMonth);
      d[i].setDay(enteredDay);
   } // end for loop
   cout << "The elements of the array in US format (mm/dd/yyyy) : " <<
	   endl;
   // prints all the elements of the array in US format
   for (int a = 0 ; a < SIZE; a++) {
      d[a].printUS();
   } // end for loop
   cout << "The elements of the array in short format (m/d/yy) : " <<
	   endl;
   // prints all the elements of the array in short format
   for (int b = 0; b < SIZE; b++) {
      d[b].printShort();
   } // end for loop
   cout << "The elements of the array in standard International format (YYYY-MM-DD) : " << endl;
   // prints all the elements of the array in International format
   for (int c = 0; c < SIZE; c++) {
      d[c].printInternational();
   } // end for loop
      
   // now it is time to test other member functions and constructors

   cout << "The date for the default constructor is: " << endl;

   // tests the default constructor Date
   Date testing1;

   // testing the getMonth() function
   cout << testing1.getMonth() << "/";

   // testing the getDay() function
   cout << testing1.getDay() << "/";

   // testing the getYear() function
   cout << testing1.getYear() << endl;

   // tests the parameterized constructor Date ( int, int, int )
   Date testing2( 12, 25, 2020 );

   cout << "The date constructed using the paramaterized constructor is: ";

   // since we have tested all functions we can just print using printUS()
   testing2.printUS();

   // attempt to initialize testing3 with invalid high values
   try {
      Date testing3( 13, 32, 2050 ); // try to create with all invalid high values
   } // end try
   catch ( const std::invalid_argument& ia) {
	   std::cerr << "\n\nException while initializing testing3: " << ia.what() << endl;
   } // end catch


   //attempt to initialize testing4 with invalid low values
//   try {
//      Date testing4( 0, 0, 1949 ); // try to create with all invalid low values
//   } // end try
//   catch ( const std::invalid_argument &e ) {
//      cerr << "\n\nException while initializing testing4: " << e.what() <<
//	      endl;
//   } // end catch
} // end function main
