#include <iostream>
#include <string>

// Exception Handling uses these 3 keywords:
//      - `try`:        Defines code to test
//      - `throw`:      Triggers the exception
//      - `catch`:      Handles the error


int main() {
        try {
            int age = 15;
            if (age >= 18) {
                std::cout << "Access granted - you are old enough." << std::endl;
            } else {
                throw 505;      // Developer defined arbitrary number
            }
        }
        catch (int myNum) {     // Where the thrown error number is catched
        // catch (...) {        // Use ellipses to catch all thrown exceptions
                                // Especially when dataType of thrown error is unknown
            std::cout << "Access denied - You must be at least 18 years old." << std::endl;
            std::cout << "Error Number: " << myNum << std::endl;
        }

        return 0;
}

