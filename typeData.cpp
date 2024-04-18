//CODE BY ARSYBAI
#include <iostream>
#include <string>
using namespace std;
 
int main () {
  // Creating variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  double myDoubleNum = 9.98;   // Floating point number
  char myLetter = 'A';         // Character
  bool myBoolean = true;       // Boolean
  string myString = "Arsybai";   // String
   
  // Print variable values
  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  cout << "string: " << myString << "\n";
 
  return 0;
}

/*int 4 bytes Stores whole numbers, without decimals, from -2,147,483,648 to 2,147,483,647
float 4 bytes Stores fractional numbers, containing one or more decimals, from 3.4e−038 to 3.4e+038. Sufficient for storing 7 decimal digits
double  8 bytes Stores fractional numbers, containing one or more decimals, from 1.7e−308 to 1.7e+038. Sufficient for storing 15 decimal digits
boolean 1 byte  Stores true or false values
char  1 byte  Stores a single character/letter/number, or ASCII values */