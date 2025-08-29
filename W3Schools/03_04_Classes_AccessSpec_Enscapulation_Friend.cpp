#include <iostream>
#include <string>

// Access Specifiers control how members (attributes and methods) of a class are accessed.
// They help protect data and organise code so that only the right parts can be seen or changed.
// There are 3 access specifiers:
//      Public -        Members accessible from outside classes.
//      Private -       Members not accessible from outside classes.
//      Protected -     Members not accessible from outside classes, however, are accessible
//                      in inherited classes. See Inheritance later.
// Note: Classes are by default Private, whereas Structures are Public.
//
// Encapsulation is the concert of making sure that "sensitive" data is hidden from users.
// Done by declaring class variables/attributes as Private.
// To read/modify values of private member, use Public "get" and "set" Methods.
//      They do not need to be declared specifically as such. It's mostly for readability.
// 
// Normally Private members of a class can only be accessed using Public methods of the same class
// like "get" and "set". In some cases, a special function called "friend" can be used to 
// access them directly.
// The "friend" function is NOT a member of the class, but is allowed to access the class's
// private data. Also needs to be declared within the codeblock for the class to recognise it.


class Employee {
    private:            // Private attributes
        int salary;

    public:             // Public attributes
        void setSalary(int s) {         // Set method
            salary = s;
        }

        int getSalary() {               // Get method
            return salary;
        }

        Employee() {             // "Default" Constructor
            salary = 0;
        }

        Employee(int s) {       // "Overloaded" Construtor
            salary = s;
        }

        friend void displaySalary(Employee emp);
};

// Define the earlier declared friend function.
void displaySalary(Employee emp) {
        std::cout << "Friend Function used to display salary: $" << emp.salary << std::endl;
}

int main() {
        // Create Employee object, get default Private attribute "salary" using 
        // Public method "getSalary()".
        // Update Private attribute using Public method "setSalary()", get Private attribute
        // using Public method "getSalary()" again.
        Employee myObj;
        std::cout << "Employee salary using default: $" << myObj.getSalary() << std::endl;
        myObj.setSalary(50000);
        std::cout << "Employee new salary: $" << myObj.getSalary() << std::endl;

        // Create Employee object with arguments, use Friend function to display
        // Private attribute.
        std::cout << std::endl;
        Employee myObj2(23456);
        displaySalary(myObj2);

        return 0;
}

