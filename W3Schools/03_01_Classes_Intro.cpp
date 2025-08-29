#include <iostream>
#include <string>

// The difference between `struct` and `class` is the access specifier
// `struct` is always public, `class` is always private
// The access specifier determines whether the members (attributes and methods)
// can be accessible from outside the `class`


class Book {                     // Class declaration
    public:                      // Access specifier, note the indent and colon :
        std::string title;       // Attribute (string variable)
        std::string author;      // Attribute (string variable)
        int year;                // Attribute (int variable)
};                               // close with ;


int main() {
        // Create Class objects
        Book book1, book2;

        // Assign values to their attributes
        book1.title = "Matilda";
        book1.author = "Roald Dahl";
        book1.year = 1988;

        book2.title = "The Giving Tree";
        book2.author = "Shel Silverstein";
        book2.year = 1964;

        // Output
        std::cout << "From the `Book` class, there are:" << std::endl;
        std::cout << "Title; Author; Year" << std::endl;
        std::cout << book1.title << ", " << book1.author << ", " << book1.year << std::endl;
        std::cout << book2.title << ", " << book2.author << ", " << book2.year << std::endl;

        return 0;
}

