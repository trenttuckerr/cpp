// CS 271
// Program Name: Lab8.cpp
// Author: Trent Tucker
// Date: November 11th, 2020
// Purpose: This program is used to test all the functions of RationalNumber class.
#include <iostream>
#include "RationalNumber.h"
using namespace std;

// include RationalNumber header file for this one and most likely for other .cpp
int main() {
   cout << "Testing the constructor and reduction for numerator = 45 and denominator = -60." << endl;
   // constructs RationalNumber objects to be used in testing	   
   RationalNumber b(45, -60), c(5, 3), d(3, 2), x;
   
   cout << "Fraction is: " << b.printRational() << endl;

   // testing overloaded operators +, -, /, and *

   x = c + d;
   cout << c.printRational() << " + " << d.printRational() << " = " << x.printRational() << endl;

   x = c - d;
   cout << c.printRational() << " - " << d.printRational() << " = " << x.printRational() << endl;

   x = c * d;
   cout << c.printRational() << " * " << d.printRational() << " = " << x.printRational() << endl;

   x = c / d;
   cout << c.printRational() << " / " << d.printRational() << " = " << x.printRational() << endl;

   // prints c's numerator and denominator along with is: as we are about to begin testing the rest of the operators
   cout << c.printRational() << "is:" << endl;
   
   // testing the > operator
   if(c > d) {
      cout << "   > " << d.printRational() << " according to the overloaded > operator" << endl;   
   } // end if
   else {
      cout << "   <= " << d.printRational() << "according to the overloaded > operator" << endl; 
   } // end else

   // testing the < operator
   if(c < d) {
      cout << "   < " << d.printRational() << " according to the overloaded < operator" << endl;
   } // end if
   else {
      cout << "   >= " << d.printRational()  << "according to the overloaded < operator" << endl;
   } // end else

   // testing the >= operator
   if(c >= d) {
      cout << "   >= " << d.printRational() << " according to the overloaded >= operator" << endl;
   } // end if
   else {
      cout << "   < " << d.printRational() << "according to the overloaded >= operator" << endl;
   } // end else

   // testing the <= operator
   if(c <= d) {
      cout << "   <= " << d.printRational() << " according to the overloaded <= operator" << endl;
   } // end if
   else {
      cout << "   > " << d.printRational() << "according to the overloaded <= operator" << endl;
   } // end else

   // testing the == operator
   if(c == d) {
      cout << "   == " << d.printRational() << " according to the overloaded == operator" << endl;
   } // end if
   else {
      cout << "   != " << d.printRational() << "according to the overloaded == operator" << endl;
   } // end else

   // testing the != operator
   if(c != d) {
      cout << "   != " << d.printRational() << " according to the overloaded != operator" << endl;
   } // end if
   else {
      cout << "   == " << "3/2" << "according to the overloaded != operator" << endl;
   } // end else
} // end main
