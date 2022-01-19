//CS 271(Object Oriented Programming)
//Author: Alex RObic
//Date: 11/13/2020
//File: Lab9.cpp
//Purpose: Driver program for the entire lab
#include <iostream> //Program requires the iostream library
#include <fstream> //Program requires the fstream library
#include <ctime> //Program requires the ctime library
#include <cstdlib> //Program requires the cstdlib library
#include <vector> //Program requires the vector library
#include "Package.h" //Program requires the user made Package.h library
#include "TwoDayPackage.h" //Program requires the user made TwoDayPackage.h library
using namespace std;
#define ARRAY_SIZE 250

//Returns a random int between min and max
inline int random_int(int min, int max) {
	return (rand() % (max - min + 1)) + min;
} //end function random_int

//Returns a random double between min and max with a precision of 0.01
inline double random_double(int min, int max) {
	return (double) random_int(min * 100, max * 100) / 100;
} //end function random_double

//Takes a string and returns a list (splits a string with a char, like python's string.split() method)
inline vector<string> split_line(string line, char separator) {
	vector<string> result;
	string word = "";

	for(int c = 0; line[c]; c++) {

		if(line[c] == separator || c == (int) line.size() -1) {
			result.push_back(word);
			word.clear();
		} else {
			word += line[c];
		} //end if


		if(line[c] == '\n') {
			break;
		} //end if

	} //end for

	return result;
} //end function split_line


int main(int argc, char **argv) {
	srand(time(NULL));
	fstream fin(argv[1], ios::in); //The file being used for the data (here, I took 500 US addresses from a random generator online and shoved it into a CSV)

	for(int i = 0; i < ARRAY_SIZE; i++) {
		string line, lineb;
		getline(fin, line);
		vector<string> split = split_line(line, ',');
		getline(fin, lineb);
		vector<string> splitb = split_line(lineb, ',');
        //The 2 addresses and names needed
        //Each even line sends to th next uneven line
		double weight = random_double(100, 1000), cost = random_double(1, 5);
        //Get a random weight and cost (some towns are cheaper than others)
		Package p = Package(split[0] + " " + split[1], split[2], split[3], split[4], split[5], splitb[0] + " " + splitb[1], splitb[2], splitb[3], splitb[4], splitb[5], weight, cost);
        //Create a package object
		cout << "Package weighing " << p.get_weight() << " and costing $" << p.get_CPO() << " per ounce costs $" << p.calculateCost() << " to send from " << p.get_senderCity() << " to " << p.get_recipientCity() << endl;
		double fee = random_double(5, 9);
        //Create a TwoDayPackage object with a random flat fee added
		TwoDayPackage tdp = TwoDayPackage(split[0] + " " + split[1], split[2], split[3], split[4], split[5], splitb[0] + " " + splitb[1], splitb[2], splitb[3], splitb[4], splitb[5], weight, cost, fee);
		cout << "2 day Package weighing " << tdp.get_weight() << " and costing $" << tdp.get_CPO() << " per ounce costs with a flat fee of $" << tdp.get_flatFee() << " costs $" << tdp.calculateCost() << " to send from " << tdp.get_senderCity() << " to " << tdp.get_recipientCity() << endl;
	} //end for

	cout << "End of program" << endl; //For development purposes only, disregard
	return 0;
} //end function main

//Formatted with Alex Robic's comment_file.py script

