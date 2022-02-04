// CS 271
// Program Name: Package.h
// Author: Trent Tucker
// Date: November 18, 2020
// Purpose: The purpose of this program is to define the header file for the base class.

#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Package { // this is the base class
	private:
		// declares private data members
		string senderName;
		string senderAddress;
		string senderCity;
		string senderState;
		string senderZip;
		string recipientName;
		string recipientAddress;
		string recipientCity;
		string recipientState;
		string recipientZip;
		double weight;
		double costPerOunce;	
	public:
		// Package constructor
		Package(const string & sname, const string & saddress, const string & scity, const string & sstate, const string & szip,
		         const string & rname, const string & raddress, const string & rcity, const string & rstate, const string & rzip,
			 double w, double c); 
		// accessor and mutator funtions for the data members
		string getSenderName() const;
		void setSenderName(const string &); 
		
		string getSenderAddress() const;
		void setSenderAddress(const string &);
		
		string getSenderCity() const;
		void setSenderCity(const string &);
	
		string getSenderState() const; 
		void setSenderState(const string &);

		string getRecipientName() const;
		void setRecipientName(const string &);

		string getRecipientAddress() const;
		void setRecipientAddress(const string &);

		string getRecipientCity() const;
		void setRecipientCity(const string &);

		string getRecipientState() const;
		void setRecipientState(const string &);

		string getRecipientZip() const;
		void setRecipientZip(const string &);

		double getWeight() const;
		void setWeight(const double &);

		double getCostPerOunce() const;
		void setCostPerOunce(const double &);

		virtual double calculateCost() const;
}; // end class Package
#endif
