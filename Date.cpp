// CS 271
// Program Name: Date.cpp
// Author: Trent Tucker
// Date: October 29, 2020
// Purpose: The definitions for the 11 member functions of the date
//          class are implemented here.

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h" // include the definition of class Date from Date.h
using namespace std;

// initializes the date object to 1/1/1950
Date::Date() { 
   month = 1;
   day = 1;
   year = 1950; 
} // end Date default constructor

// sets the date to what is recieved
Date::Date( int m, int d, int y ) {
   setMonth(m);
   setDay(d);
   setYear(y); 
} // end Date parameterized constructor

// set month value
void Date::setMonth( int m ) {
   // checks if m is valid, then sets to month if so
   if ( m >= MIN_MONTH && m <= MAX_MONTH ) {
      month = m;
   } // end if
   else {
      throw invalid_argument( "month must be 1-12" );
   } // end else
} // end function setMonth 

// set day value
void Date::setDay( int d ) {
   // checks if d is valid, then sets to day if so
   if ( d >= MIN_DAY && d <= MAX_DAY ) {
      day = d;
   } // end if
   else {
      throw invalid_argument( "day must be 1-31" );
   } // end else
} // end function setDay

// set year value
void Date::setYear( int y ) {
   // checks if y is valid, then sets to year if so
   if ( y >= MIN_YEAR && y <= MAX_YEAR ) {
      year = y;
   } // end if
   else {
      throw invalid_argument( "year must be 1950-2049" );      
   } // end else 
} // end function setYear

// return month value
unsigned int Date::getMonth() const {
   return month;
} // end function getMonth

// return day value
unsigned int Date::getDay() const {
   return day;
} // end function getDay

//return year value
unsigned int Date::getYear() const {
   return year;
} // end function getYear

// print date in US format mm/dd/yyyy
void Date::printUS() const {
   cout << setfill( '0' ) << setw( 2 ) << getMonth() << "/"
	   << setw( 2 ) << getDay() << "/" << getYear() << endl;
} // end function printUS

// print date in the format m/d/yy
void Date::printShort() const {
   int yearToPrint = getYear(); 
   int firstDigit, secondDigit; 
   secondDigit = yearToPrint % 10; // gets the last digit of the year
   yearToPrint /= 10; // divide by ten to get rid of far-right digit
   firstDigit = yearToPrint % 10; // gets the third digit of the year
   cout << getMonth() << "/" << getDay() << "/" << firstDigit
	   << secondDigit << endl;
} // end function printShort

// print date in the format yyyy-mm-dd
void Date::printInternational() const {
   cout << setfill( '0' ) << getYear() << "-" << setw( 2 ) <<
	   getMonth() << "-" << setw( 2 ) << getDay() << endl;
} // end function printInternational 
