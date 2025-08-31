#include <iostream>
#include <string>
#include <limits>       // Required for code to clear buffer

// There are different techniques to validate input


int main() {
        // Validate Integer Input
        int myInt;
        std::cout << "Enter an integer: ";
        while (!(std::cin >> myInt)) {       // Keep asking till valid
            std::cout << "Invalid input. Try again: ";
            std::cin.clear();                                            // Clear input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
        }
        std::cout << "You entered: " << myInt << std::endl;

        // Validate Number Range
        float myFloat;
        do {                                    // Using do-while loop
            std::cout << "Choose a float between 1 and 5: ";
            std::cin >> myFloat;
        } while (myFloat < 1 || myFloat > 5);   // Keep asking till valid
        std::cout << "You chose: " << myFloat << std::endl;

        // Validate Text Input
        std::string myName;
        do {
            std::cout << "Enter your name: ";
            std::getline(std::cin, myName);
        } while (myName.empty());               // Keep asking till not empty
        std::cout << "Hello, " << myName << std::endl;

        return 0;
}

