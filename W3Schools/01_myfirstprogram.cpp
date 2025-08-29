// Header File Library, to work with input and output objects
// Adds functionality to C++ programs
#include <iostream>

// Use names for objects and variables from standard library
using namespace std;

// Declare function, requires variable type declaration
// int main() {
//     cout << "Hello World! \n";                  // ";" = End of code line
//     cout << "I am learning C++" << endl;        // "cout" = Output Text
//     cout << 5 + 5 << "\n";                      // Many ways to NewLine
//     return 0;
// }

/* 
 * This is a multiple
 * line Comment
 */

// Declare Variables
// type variableName = value; 
// int myNum = 5, myNum2 = 10;  // Integer (whole number without decimals)
// double myFloatNum = 5.99;    // Floating point number (with decimals)
// char myLetter = 'D';         // Character (use single quotes)
// string myText = "Hello";     // String (text, use double quotes)
// bool myBoolean = true;       // Boolean (true or false)

// Constants
// Unchangable and read-only
// const int myNum3 = 15;          // Must declare with value at the same time
// myNum3 = 10;                 // Leads to compiler error

int main() {
  // Student data
  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade = 'B';

  // Print variables using cout
  cout << "Student ID: " << studentID << "\n";
  cout << "Student Age: " << studentAge << "\n";
  cout << "Student Fee: " << studentFee << "\n";
  cout << "Student Grade: " << studentGrade << "\n";

  return 0;
}

