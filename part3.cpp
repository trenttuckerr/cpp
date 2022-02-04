// CS 271
// Program Name: part3.cpp
// Author: Trent Tucker
// Date: 10/21/2020
// Purpose: The purpose of this program is to calculate the total cost
//          for default values and specified values.

#include <iostream>
#include <iomanip>
using namespace std;

int totalCost(int shippingCost = 0, int boxCost = 4, int numBoxesPurchased = 1); // function prototype that specifies default arguments

int main() {
    // no arguments--use default values
   cout << "The default total cost is: " << totalCost();
   
   // specify shipping cost; default box cost and number of boxes purchased
   cout << "\n\nThe total cost of shipping cost 3,\n"
      << "box cost 4 and number of boxes purchased 1 is: " << totalCost( 10 );
        
   // specify shipping cost and box cost; default number of boxes purchased
   cout << "\n\nThe total cost of shipping cost 3,\n" 
      << "box cost 6 and number of boxes purchased 1 is: " << totalCost( 3, 6 );
   
   // specify all arguments 
   cout << "\n\nThe total cost of shipping cost 3,\n"
      << "box cost 6 and number of boxes purchased 2 is: " << totalCost( 3, 6, 2 );
   cout << endl;
} // end main


int totalCost(int shippingCost, int boxCost, int numBoxesPurchased) { // function calculates the total cost
   return shippingCost + (numBoxesPurchased) * (boxCost);
} // end total
