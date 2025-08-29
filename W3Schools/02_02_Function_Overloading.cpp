#include <iostream>
#include <string>

int plusFunc(int x, int y) {
        return x + y;
}

double plusFunc(double x, double y) {
        return x + y;
}

int plusFunc(int x, int y, int z) {
        return x + y + z;
}


int main() {
        int result1 = plusFunc(1, 2);
        double result2 = plusFunc(3.4, 4.678);
        int result3 = plusFunc(5, 6, 7);

        std::cout << "Function Overloading allows multiple functions to have " \
                      "the same name, as long as their parameters are " \
                      "different in type or number." << std::endl;
        std::cout << "Sum of 2 integers: " << result1 << std::endl;
        std::cout << "Sum of 2 doubles: " << result2 << std::endl;
        std::cout << "Sum of 3 integers: " << result3 << std::endl;

        return 0;
}

            
