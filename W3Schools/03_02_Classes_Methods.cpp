#include <iostream>
#include <string>

// Methods are functions that belong to the Class
// There are 2 ways to define Methods: Inside and Outside

class Dog {                                     // Declare Class
    public:                                     // Access specifier
        void bark() {                           // Declare Method/Function
            std::cout << "bark!" << std::endl;
        };
        void yip(int numOfPets);                // Declare Method/Function with Parameters
};

// Classes' Methods can be defined outside the Class block
// Parameters must be the same as defined earlier
void Dog::yip(int numOfPets) {
        while (numOfPets > 0) {
            std::cout << "yip!" << std::endl;
            numOfPets--;
        }
}

int main() {
    Dog myDog;          // Create Class object
    myDog.bark();       // Call Class' Method

    int userInput;
    std::cout << std::endl;
    std::cout << "How many times do you want to pet the dog? ";
    std::cin >> userInput;
    myDog.yip(userInput);       // Call the other Method
    return 0;
}


