// CS 271
// Program Name: RationalNumber.cpp
// Author: Trent Tucker
// Date: November 11, 2020
// Purpose: This progam contains the implementations for the function prototypes listed in the header file.

#include <iostream>
#include "RationalNumber.h"
using namespace std;

// reduces fraction to its lowest terms
void RationalNumber::reduction() { 
   // once valid RationalNumber object is sent to this method, we run it through the for loop to reduce the fraction
   int i = getNum() * getDen();
   for (i; i > 1; i--) {
      if((getDen() % i ==0) && (getNum() % i ==0)) {
         denominator /= i;
	 numerator /= i;
      } // end if
   } // end for loop
} // end reduction

// prints the fraction
void RationalNumber::printRational() {
   reduction();
   cout << numerator << "/" << denominator;
} // end printRational

// constructor for RationalNumber object
RationalNumber::RationalNumber(int num, int den) {
   numerator = num;
   if(den!=0) {
   	denominator = den;   
   } // end if
   else {
	   throw invalid_argument("Denominator cannot be zero.");
   } // end else
   // checks for a negative denominator; if found, denominator is made positive and numerator is made negative
   if(denominator < 0) {
      denominator * -1;
      numerator * -1;
   } // end if
   reduction();
} // end RationalNumber (constructor)

// returns the numerator for the current object
//int RationalNumber::
int RationalNumber:: getNum() {
   return numerator;
} // end getNum

// returns the deonominator for the current object
//int RationalNumber::
int RationalNumber::getDen() {
   return denominator;
} // end getDen

// overloading the + operator
//RationalNumber RationalNumber::
RationalNumber operator+(RationalNumber a, RationalNumber b) {
   return RationalNumber((a.getNum() * b.getDen()) + (b.getNum() * a.getDen()), a.getDen() * b.getDen());
} // end operator+

// overloading the - operator 
RationalNumber operator-(RationalNumber a, RationalNumber b) {
   return RationalNumber((a.getNum() * b.getDen()) - (b.getNum() * a.getDen()), a.getDen() * b.getDen());
} // end operator-

// overloading the / operator
RationalNumber operator/(RationalNumber a, RationalNumber b) {
   return RationalNumber(a.getNum() * b.getDen(), a.getDen() * b.getNum());
} // end operator/

// overloading the * operator
RationalNumber operator*(RationalNumber a, RationalNumber b) {
   return RationalNumber(a.getNum() * b.getNum(), a.getDen() * b.getDen());
} // end operator*

// overloading the relational operator <
bool operator<(RationalNumber a, RationalNumber b) {
   double one = (double)a.getNum() / a.getDen();
   double two = (double)b.getNum() / b.getDen();
   return one < two;
} // end operator<

// overloading the relational operator >
bool operator>(RationalNumber a, RationalNumber b) {
   double one = (double)a.getNum() / a.getDen();
   double two = (double)b.getNum() / b.getDen();
   return one > two;
} // end operator>

// overloading the relational operator <=
bool operator<=(RationalNumber a, RationalNumber b) {
   double one = (double)a.getNum() / a.getDen();
   double two = (double)b.getNum() / b.getDen();
   return one <= two;
} // end operator<=

// overloading the relational operator >=
bool operator>=(RationalNumber a, RationalNumber b) {
   double one = (double)a.getNum() / a.getDen();
   double two = (double)b.getNum() / b.getDen();
   return one >= two;
} // end operator>=

// overloading the relational operator ==
bool operator==(RationalNumber a, RationalNumber b) {
   double one = (double)a.getNum() / a.getDen();
   double two = (double)b.getNum() / b.getDen();
   return one == two;
} // end operator==

// overloading the relational operator !=
bool operator!=(RationalNumber a, RationalNumber b) {
   double one = (double)a.getNum() / a.getDen();
   double two = (double)b.getNum() / b.getDen();
   return one != two;
} // end operator!=
