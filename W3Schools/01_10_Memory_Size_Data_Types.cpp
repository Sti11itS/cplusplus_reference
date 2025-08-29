#include <iostream>

int main() {
        int myInt;
        float myFloat;
        double myDouble;
        char myChar;
        bool myBool;

        std::cout << "Note: Size is in Bytes" << std::endl;
        std::cout << "Size of myInt: " << sizeof(myInt) << std::endl;
        std::cout << "Size of myFloat: " << sizeof(myFloat) << std::endl;
        std::cout << "Size of myDouble: " << sizeof(myDouble) << std::endl;
        std::cout << "Size of myChar: " << sizeof(myChar) << std::endl;
        std::cout << "Size of myBool: " << sizeof(myBool) << std::endl;

        return 0;
}

