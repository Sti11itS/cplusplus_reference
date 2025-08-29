#include <iostream>
#include <string>

// Inheritance allows one class to reuse attributes and methods from another class.
// Helps to write cleaner, more efficient code by avoiding duplication.
// The Inheritance concept has two categories:
//      - Base class (Parent) = The class being inherited from
//      - Derived class (Child) = The class that inherits from another class
// To inherit, use ":" symbol
//
// Multilevel Inheritance is possible.
// A class can be derived from another class, which itself can be derived from another class.
//
// Multiple Inheritance is possible.
// A class can be derived from more than one base class, using a comma-separated list.
//
// The "Protected" Access Specifier attributes in the base class allows access to members 
// in the derived classes.


// Base Class (Parent)
class MyClass {
    public:
        void myFunction() {
            std::cout << "Some content in parent class" << std::endl;
        }
};

// Derived Class (Child) - Inheritance
class MyChild: public MyClass {
};

// Derived Class (Grandchild) - Multilevel Inheritance
class MyGrandChild: public MyChild {
};

// Another Base Class
class MyOtherClass {
    public:
        void myOtherFunction() {
            std::cout << "Some content in another class" << std::endl;
        }
};

// Derived Class - Multiple Inheritance
class MyMultipleClass: public MyClass, public MyOtherClass {
};

// Access Specifier - Protected
class Employee {
    protected:
        int salary;
};

// Derived Class involving Protected Access Specifier
class Programmer: public Employee {
    public:
        int bonus;
        void setSalary(int s) {
            salary = s;
        }
        int getSalary() {
            return salary;
        }

        Programmer() {
            salary = 0;
        }
};


int main() {
        std::cout << "Multilevel Inheritance: " << std::endl;
        MyGrandChild myObj;
        myObj.myFunction();

        std::cout << std::endl;
        std::cout << "Multiple Inheritance: " << std::endl;
        MyMultipleClass myObj2;
        myObj2.myFunction();
        myObj2.myOtherFunction();

        std::cout << std::endl;
        std::cout << "Access Specifier - Protected: " << std::endl;
        Programmer Prog1;
        Prog1.setSalary(50000);         // salary is Protected, requires methods to access
        Prog1.bonus = 15000;            // bonus is public, direct access is allowed
        std::cout << "Salary: $" << Prog1.getSalary() << std::endl;     // Again, salary is protected
        std::cout << "Bonus: $" << Prog1.bonus << std::endl;            // While bouns is public

        return 0;
}
