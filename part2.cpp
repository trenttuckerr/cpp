// CS 271
// Program Name: part2.cpp
// Author: Trent Tucker
// Date: 10/21/2020
// Purpose: The purpose of this program is to compare a variable after
//          being run through a sumByValue and a sumByRefernce method.

#include <iostream>
#include <iomanip>
using namespace std;

int sumByValue(int v); // function prototype for sumByValue
void sumByReference(int &r); // function prototype for sumByReference

int main() {
    int num; // declares num for our testing
    cout << "Please enter the value of num: ";
    cin >> num; // assigns user input to variable num
    cout << endl;
    cout << "num = " << num << " before sumByValue" << endl; // prints num's initial value after input assigned
    cout << "Value returned by sumByValue: " << sumByValue(num) << endl; // prints value returned by sumByValue method
    cout << "num = " << num << " after sumByValue" << endl; // prints num's value after it is sent to sumByValue
    cout << endl;
    cout << "num = " << num << " before sumByReference" << endl; // prints num's current value before being sent to sumByReference
    sumByReference(num); // runs sumByReference with num
    cout << "num = " << num << " after sumByReference" << endl; // prints num's final value after run through sumByReference
} // end main

int sumByValue(int v) {
    int sum = v;
    for(int i = 1; i < v; i++) { // for loop will run from one until one less than v inclusive
        sum+=i; // computes the sum of integers from 1 to num
    } // end for loop
    return sum; // returns computed value 
} // end sumByReference

void sumByReference(int &num) {
    int count = 0; // count initialized to count number that is to be added to num
    for(int i = 1; i < num; i++) { // for loop will run from one until one less than num inclusive
        count+=i; //i is added to count to figure what number will be added to num
    } // end for loop 
    num+=count; // num is computed to the sum of integers from 1 to the alias
} // end sumByReference
