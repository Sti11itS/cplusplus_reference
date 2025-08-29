#include <iostream>
#include <string>


// Declaring functions is the same as declaring variables, need to determine dataType
void myFunction() {
        std::cout << "Functions with `void` dataType do not need to return a value" << std::endl;
}


// Function to convert Fahrenheit to Celcius
// Default value fahrenheit = 100
float toCelcius(float fahrenheit = 100.0) {
        return (5.0 / 9.0) * (fahrenheit - 32.0);
}


int main() {
        myFunction();  // Call the function
        myFunction();
        myFunction();

        // Get user input for fahrenheit value
        float f_value;
        std::cout << "Input fahrentheit value to conver into Celcius: " << std::endl;
        // The extraction operation of `cin` uses the dataType of variable after the
        // `>>` operator to determine the interpretation of the inputted characters
        std::cin >> f_value; 

        // Call toCelcius function
        float result = toCelcius(f_value);
        float d_result = toCelcius();

        // Print fahrenheit
        std::cout << "Fahrentheit = " << f_value << std::endl;

        // Print resultant Celcius
        std::cout << "Converted Celcius = " << result << std::endl;

        // Print result using default value
        std::cout << "Celcuis using default value Fahrentheit at 100 = " << d_result << std::endl;

        // Because main() is dataType `int` and expects `int` returned
        return 0;
}

