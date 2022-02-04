// CS 271
// Program Name: Package.cpp
// Author: Trent Tucker
// Date: November 18, 2020
// Purpose: This program includes the implementations of the prototypes listed in the header file.

#include <iostream>
#include <iomanip>
#include "Package.h"
using namespace std;

        Package::Package(const string & sname, const string & saddress, const string & scity, const string & sstate, const string & szip,
                         const string & rname, const string & raddress, const string & rcity, const string & rstate, const string & rzip,
                         double w, double c) {
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
	} // end constructor Package

	string Package::getSenderName() const {
		return senderName;
	} // end getSenderName
        void Package::setSenderName(const string & sn) {
		senderName = sn;
	} // end setSenderName

        string Package::getSenderAddress() const {
		return senderAddress;
	} // end getSenderAddress
        void Package::setSenderAddress(const string & sa) {
		senderAddress = sa;
	} // end setSenderAddress

        string Package::getSenderCity() const {
		return senderCity;
	} // end getSenderCity
        void Package::setSenderCity(const string & sc) {
		senderCity = sc;
	} // end setSenderCity

        string Package::getSenderState() const {
		return senderState;
	} // end getSenderState
        void Package::setSenderState(const string & ss) {
		senderState = ss;
	} // end setSenderState

        string Package::getRecipientName() const {
		return recipientName;
	} // end getRecipientName
        void Package::setRecipientName(const string & rn) {
		recipientName = rn;
	} // end setRecipientName

        string Package::getRecipientAddress() const {
		return recipientAddress;
	} // end getRecipientAddress
        void Package::setRecipientAddress(const string & ra) {
		recipientAddress = ra;
	} // end setRecipientAddress

        string Package::getRecipientCity() const {
		return recipientCity;
	} // end getRecipientCity
        void Package::setRecipientCity(const string & rc) {
		recipientCity = rc;
	} // end setRecipientCity

        string Package::getRecipientState() const {
		return recipientState;
	} // end getRecipientState
        void Package::setRecipientState(const string & rs) {
		recipientState = rs;
	} // end setRecipientState

        string Package::getRecipientZip() const {
		return recipientZip;
	} // end getRecipientZip
        void Package::setRecipientZip(const string & rz) {
		recipientZip = rz;
	} // end setRecipientZip

	double Package::getWeight() const {
		return weight;
	} // end getWeight
	void Package::setWeight(const double & wt) {
		if(wt > 0) {
			weight = wt;
		} // end if
		else {
			throw invalid_argument("weight must be positive");
		} // end else
	} // end setWeight

	double Package::getCostPerOunce() const {
		return costPerOunce;
	} // end getCostPerOunce

	void Package::setCostPerOunce(const double & cpo) {
		if(cpo > 0) {
			costPerOunce = cpo;
		} // end if
		else {
			throw invalid_argument("cost per ounce must be positive.");
		} // end else
	} // end setCostPerOunce

        double Package::calculateCost() const {
		return weight * costPerOunce;
	} // end calculateCost

