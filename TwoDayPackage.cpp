// CS 271
// Program Name: TwoDayPackage.cpp
// Author: Trent Tucker
// Date: November 20, 2020
// Purpose: This program contains the implementations for the derived portion of the lab.

#include <iostream>
#include <iomanip>
#include <string>
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string & sname, const string & saddress, const string & scity,
                              const string & sstate, const string & szip, const string & rname,
                              const string & raddress, const string & rcity, const string & rstate,
                              const string & rzip,
                              double w, double c, double f) {
	senderName = sname;
	senderAddress = saddress;
	senderCity = scity;
	senderState = sstate;
	senderZip = szip;
	recipientName = rname;
	recipientAddress = raddress;
	recipientCity = rcity;
	recipientState = rstate;
	recipientZip = rzip;
	weight = w;
	costPerOunce = c;
	flatFee = f;
} // end TwoDayPackage constructor

void TwoDayPackage::setFlatFee(double f) {
	if(f > 0) {
	   flatFee = f;
	} // end if
	else {
		throw invalid_arugment("flat fee must be positive.");
	} // end else
} // end setFlatFee

double TwoDayPackage::getFlatFee() {
	return flatFee;
} // end getFlatFee

double TwoDayPackage::calculateCost() {
	return weight * costPerOunce + flatFee;
} // end calculateCost
