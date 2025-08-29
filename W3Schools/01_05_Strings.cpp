#include <iostream>             // Include the "iostream" library
#include <string>               // Include the "C++ String" library
#include <limits>               // Include the "C++ Limits" library

//using namespace std           // Not using namespace "std"
                                // Note that not using this makes things more tedious

int main() {
    
    std::cout << std::endl;
    std::cout << "_____________" << std::endl;
    std::cout << "Concatenate" << std::endl;
    std::string firstName = "John";
    std::string lastName = "Doe";
    std::string fullName = firstName + " " + lastName;
    std::cout << "By Concaternate: " << fullName << std::endl;
    std::cout << "By String Method .append(): " << firstName.append(lastName) << std::endl; 

    std::cout << std::endl;
    std::cout << "_____________" << std::endl;
    std::cout << "String Length" << std::endl;
    std::string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "The txt std::string is: " << txt << std::endl;
    std::cout << "The length of the txt std::string using std::string.length() is: " << txt.length() << std::endl; 
    std::cout << "The length of the txt std::string using std::string.size() is: " << txt.size() << std::endl; 

    std::cout << std::endl;
    std::cout << "_____________" << std::endl;
    std::cout << "Access Strings" << std::endl;
    std::string myString = "Hello";
    std::cout << "myString is :" << myString << std::endl;                                // Outputs Hello
    std::cout << "Using index positions" << std::endl;
    std::cout << "First position: " << myString[0] << std::endl;                          // First character
    std::cout << "Second position: " << myString[1] << std::endl;                         // Second character
    std::cout << "Using String method .at()" << std::endl;
    std::cout << "Third position: " << myString.at(2) << std::endl;                       // Third character
    std::cout << "Fourth position: " << myString.at(3) << std::endl;                      // Fourth character
    std::cout << "Last position: " << myString.at(myString.length() - 1) << std::endl;    // Last character

    std::cout << std::endl;
    std::cout << "string contents can be changed (!)" << std::endl;
    myString[0] = 'J';
    std::cout << "Using string index []: " << myString << std::endl;                      // Outputs Jello
    myString.at(myString.length() - 1) = 'y';                                             // Cannot use -1 to represent last position
    std::cout << "Using string method .at(): " << myString << std::endl;                  // Outputs Jelly

    std::cout << std::endl;
    std::cout << "_____________" << std::endl;
    std::cout << "User Input Strings" << std::endl;
    std::cout << "cin considers any whitespace character as terminating character" << std::endl;
    std::string inputName;
    std::cout << "Type your full name: ";
    std::cin >> inputName;
    std::cout << "Your full name is: " << inputName << std::endl;
    std::cin.clear();                                                                     // Reset the Input Stream state
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');                   // Clear the cin
    std::cout << std::endl << "To store multiple word sentences, need to use std::getline() function" << std::endl;
    std::string inputName2;
    std::cout << "Type your full name again: ";
    std::getline (std::cin, inputName2);
    std::cout << "Your full name is: " << inputName2 << std::endl;

    std::cout << std::endl;
    std::cout << "_____________" << std::endl;
    std::cout << "C-Sytle Strings" << std::endl;
    std::string greeting1 = "Hello";  // Regular String
    char greeting2[] = "Hello";  // C-Style String (an array of characters)
    std::cout << greeting1 << std::endl;
    std::cout << greeting2 << std::endl;

    return 0;
}
