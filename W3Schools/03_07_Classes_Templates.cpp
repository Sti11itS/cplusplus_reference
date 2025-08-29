#include <iostream>
#include <string>

// Templates let you write functions or classes that works with different data types.
// They help avoid repeating code and make programs more flexible.
// Create the function/class with the `template` keyword.
// - Avoid repeating same logic for different datatypes
// - Write cleaner, reusable code
// - Supports generic programming
// Note: Templates must be defined in the same file where they are used 
// (usually in the .h file)
// 

// Function Template
// Syntax
// ****************
// template <typename T>
// return_type function_name(T parameter) {
//      // code
// }
// ****************
// `T` is placeholder for data type (like `int` or `float`)
// Any name can be used, `T` is most common.

template <typename T>
T add(T a, T b) {
    return a + b;
}

// Class Template
// Syntax
// ****************
// template <typename T>
// class ClassName {
//      // members and methods using T datatype
// };
// ****************

template <typename T1, typename T2>
class Pair {
    public:
        T1 first;
        T2 second;

        Pair(T1 a, T2 b) {
            first = a;
            second = b;
        }

        void display() {
            std::cout << "First: " << first << ", Second: " << second << std::endl;
        }
};


int main() {
        std::cout << "Function Templates:" << std::endl;
        std::cout << "Func Tempt <int>: " << add<int>(5, 3) << std::endl;
        std::cout << "Func Tempt <double>: " << add<double>(2.34523, 1.345345) << std::endl;

        std::cout << std::endl;
        std::cout << "Class Template:" << std::endl;
        Pair<std::string, int> person("John", 36);   // declare Class template Pair with string and int
        Pair<int, double> score(18, 91.6);      // declare Class template Pair with int and double

        std::cout << "Class Tempt <std::string, int> ";
        person.display();
        std::cout << "Class Tempt <int, double> ";
        score.display();

        return 0;
}

