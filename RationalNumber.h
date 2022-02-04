// CS 271
// Program Name: RationalNumber.h
// Author: Trent Tucker
// Date: November 11th, 2020
// Purpose: This program serves the purpose of being the header file that contains the class definition and function prototypes.   

// prevents multiple inclusions of header
#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

// RationalNumber class definition
class RationalNumber {
public:
	// prototype for the constructor of a RationalNumber object
	explicit RationalNumber(int, int);
	// overloading prototypes for addition, subtraction, multiplication, and division
	friend RationalNumber operator+(RationalNumber a, RationalNumber b);
	friend RationalNumber operator-(RationalNumber a, RationalNumber b);
	friend RationalNumber operator/(RationalNumber a, RationalNumber b);
	friend RationalNumber operator*(RationalNumber a, RationalNumber b);
	// overloading prototypes for the relational operators
	friend bool operator<(RationalNumber a, RationalNumber b);
	friend bool operator>(RationalNumber a, RationalNumber b);
	friend bool operator<=(RationalNumber a, RationalNumber b);
	friend bool operator>=(RationalNumber a, RationalNumber b);
	// overloading prototypes for the equality operators
	friend bool operator==(RationalNumber a, RationalNumber b);
	friend bool operator!=(RationalNumber a, RationalNumber b);
	// prototype for the printRational function
	void printRational(); // display rational number
	// prototypes for out get functions
	int getNum();
	int getDen();
private:
	// declares two private data members of type int that represent the numerator and denominator
	int numerator;
	int denominator;
	// declares a private helper member function that reduces or simplifies a fraction to lowest terms
	void reduction();
}; // end class RationalNumber
#endif
