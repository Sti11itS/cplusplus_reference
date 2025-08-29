#include <iostream>
#include <functional> // Needed for std::function

// Syntax
// dataType lambdaName = [capture] (parameters) { code } ;

// A function that takes another function as parameter
void myFunction(std::function<void()> func) {
        func();
        func();
}

int main() {
        // The Lambda function
        auto message = []() {
            std::cout << "Hello World!" << std::endl;
        };

        // Lambda function with capture
        int a = 10, b = 20;
        auto show = [a, b]() {
            std::cout << "Captured a: " << a << std::endl << "Captured b: " << b << std::endl;
        };

        // Lambda function with parameters
        auto add = [](int a, int b) {
            return a + b;
        };

        // Basic Lambda
        std::cout << "Basic Lambda" << std::endl;
        message();
        // Lambda with capture
        std::cout << "Lambda with capture" << std::endl;
        show();
        // Lambda with parameter
        std::cout << "Lambda with parameter" << std::endl;
        std::cout << add(3, 4) << std::endl;
        // Lamda with loops, also function overload
        std::cout << "Lambda with loops, also function overload" << std::endl;
        for (int i = 1; i <= 3; i++) {
            auto show = [i]() {
                std::cout << "Number: " << i << std::endl;
            };
            show();
        };
        // Passing Lambda to Functions
        std::cout << "Passing Lambda to functions, requires <functional> library" << std::endl;
        myFunction(message);
        return 0;
}

