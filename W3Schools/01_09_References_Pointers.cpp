#include <iostream>
#include <string>

int main() {
        std::string food = "Pizza";          // string variable
        std::string* ptr = &food;            // pointer string variable
                                             // referencing a string variable
        // Note: pointer variable must be the same as the referenced variable type
        
        // Output the value of food
        std::cout << "String variable \"Food\" = " << food << std::endl;

        // Output the memory address of food
        std::cout << "String variable memory address of \"Food\" = " << &food << std::endl;

        // Output the memory address of food using the pointer instead
        std::cout << "value of pointer variable that is referencing string variable \"Food\" = " << ptr << std::endl;

        // Output the memory address of the pointer variable itself
        std::cout << "Pointer variable memory address itself &ptr = " << &ptr << std::endl;

        // Access the memory address of "Food" and output its value
        // a.k.a dereferencing the value (stored memory address) of ptr
        std::cout << "Dereferenced value of ptr = " << *ptr << std::endl;

        // Change the derefenced value of the pointer
        *ptr = "Hamburger";

        // Output the new dereferenced value of the pointer
        std::cout << "New dereferenced value of ptr = " << *ptr << std::endl;

        // Output the new value of "Food"
        // Note: changing the derefenced value of ptr also changes the value of "Food"
        std::cout << "New value of \"Food\" = " << food << std::endl;

        return 0;
}

