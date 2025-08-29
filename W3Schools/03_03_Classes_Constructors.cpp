#include <iostream>
#include <string>

// A Constructor is a special method that is automatic called 
// when an object of a class is created.
// To create a Constructor, use the same name as the Class, followed by ().
// No return type, no void even.
// Usually declared public
// Constructors can have parameters as well.
// Like Methods, Constructors can be defined outside of Class codeblock
//
// More than one Constructor is possible. This is called Constructor Overloading.
// Similar to Function Overloading, each Constructor defined must have
// a different number OR type of parameters. The compiler knows which to use.


class Car {                     // Declare Class
    public:                     // Access specifier
        std::string brand;      // Define Attributes
        std::string model;
        int year;

        Car() {                 // Define "default" Constructor
            brand = "Unknown";
            model = "Unknown";
            year = 0;
        }

        Car(std::string b, std::string m, int y); // Constructor to be defined outside codeblock
};

// Constructor definition outside the Class codeblock with parameters
Car::Car(std::string b, std::string m, int y) {
        brand = b;
        model = m;
        year = y;
}


int main() {
        Car car1;                               // Object with empty/default values
        Car car2("BMW", "X5", 2000);            // Objects with input arguments
        Car car3("Ford", "Mustang", 1990);

        std::cout << "Brand  Model  Year" << std::endl;
        std::cout << "Car1: " << car1.brand << " " << car1.model << " " << car1.year << std::endl;
        std::cout << "Car2: " << car2.brand << " " << car2.model << " " << car2.year << std::endl;
        std::cout << "Car3: " << car3.brand << " " << car3.model << " " << car3.year << std::endl;
        
        return 0;
}

