// CS 271
// Program Name: distinct.h
// Author: Trent Tucker
// Date: October 21, 2020
// Purpose: This purpose of this function template is
//          to determine the number of distinct
//          values among its three arguments. 

template < class T >  // or template< typename T >
int distinct( T value1, T value2, T value3 ) {
   int distinctValues = 0; // set number of distinctValues to 0

   // checks if all values are the same and returns one is so (no need to 
   // run rest of the if statements if all of the values are the same)
   if ( value1 == value2 && value2 == value3 ) {
      return 1;
   } // end if

   // the following 3 if statements check for equality among the values;
   // distinctValues increases by one if equality is found. these statements
   // are needed due to the last three if statements not checking for this
   // case.
   if ( value1 == value2 ) {
      distinctValues++;
   } // end if
   if ( value1 == value3 ) {
      distinctValues++;
   } // end if
   if ( value2 == value3 ) {
      distinctValues++;
   } // end if

   // determine whether value1 is distinct or not
   if ( value1 != value2 && value1 != value3 ) {
      distinctValues++;
   } // end if
   // determine whether value2 is distinct or not
   if ( value2 != value1 && value2 != value3 ) {
      distinctValues++;
   } // end if
   // determine whether value3 is distinct or not
   if ( value3 != value1 && value3 != value2 ) {
        distinctValues++;
   } // end if
   return distinctValues;
} // end distinct

