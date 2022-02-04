// CS 271
// Program Name: Date.h
// Author: Trent Tucker
// Date: October 29, 2020
// Purpose: This program is the class definition for class Date.

// prevent multiple inclusions of header
#ifndef DATE_H
#define DATE_H

// Date class definition
class Date {
public:
	
   // declaration of the six needed public static constant data members	
   static const int MIN_MONTH = 1;
   static const int MAX_MONTH = 12;
   static const int MIN_DAY = 1;
   static const int MAX_DAY = 31;
   static const int MIN_YEAR = 1950;
   static const int MAX_YEAR = 2049;

   explicit Date(); // default constructor
   explicit Date( int, int, int ); // Date constructor with parameters
   
   // set functions
   void setMonth( int ); // set month (after validation) 
   void setDay( int ); // sets day (after validation)
   void setYear( int ); // sets year (after validation)

   //get functions
   unsigned int getMonth() const; // return month
   unsigned int getDay() const; // return day
   unsigned int getYear() const; // return year

   void printUS() const; // output the Date in the US format mm/dd/yyyy
   void printShort() const; // output the Date in the format m/d/yy
   void printInternational() const; // output the Date in the standard International format YYYY-MM-DD
private:
   unsigned int month; // 1 - 12
   unsigned int day; // 1 - 31
   unsigned int year; // 1950 - 2049
}; // end class Date
#endif

