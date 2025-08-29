#include <iostream>
#include <string>

// Polymorphism occurs when we have many classes that are related to each other by Inheritance.
// As before, Inheritance lets derived classes inherit attributes and methods from other classes.
// Polymorphism uses those inherited methods to perform different tasks.
// This allows us to use the same method/function in different ways.
//
// Virtual Functions are member functions in the base class that can be 
// overwritten in derived classes.
// These Virtual Functions play a key part of Polymorphism in C++.
// They let different objects respond differently to the same function call.
// Without `virtual`, C++ decides which function to call based on pointer type, not the 
// actual object type.
// With `virtual`, C++ checks the actual object the point is pointing to.
//      - Without `virtual`: Base function runs, even if object is from child class.
//      - With `virtual`: Child's version runs
//      - The `override` keyword is optional, but recommended for clarity.


// Base Class for Polymorphism
class Animal {
    public:
        void animalSound() {
            std::cout << "The animal makes a sound" << std::endl;
        }
};

// Derived Class
class Pig: public Animal {
    public:
        void animalSound() {
            std::cout << "The pig says: oink oink" << std::endl;
        }
};

// Another Derived Class
class Dog: public Animal {
    public:
        void animalSound() {
            std::cout << "The dog says: bow wow" << std::endl;
        }
};


// Base Class for Virtual Function
class Vehicle {
    public:
        virtual void sound() {
            std::cout << "Sound from a vehicle" << std::endl;
        }
};

// Derived Class
class Car: public Vehicle {
    public:
        void sound() override {         // `Override` keyword optional but recommended
            std::cout << "The sounds from a Car" << std::endl;
        }
};


int main() {
        Animal myAnimal;
        Pig myPig;
        Dog myDog;

        std::cout << "Showcasing Polymorphism:" << std::endl;
        myAnimal.animalSound();
        myPig.animalSound();
        myDog.animalSound();

        std::cout << std::endl;
        std::cout << "Showcasing Virtual Functions involving Pointers:" << std::endl;
        std::cout << "Without `virtual` keyword" << std::endl;
        Animal* animalPointer;          // Declare pointer to base class (Animal)
        Dog dogObj;                     // Declare object of derived class (Dog)
        animalPointer = &dogObj;        // Point base class pointer to Dog object
        animalPointer->animalSound();   // Call the animalSound() method. Since method is
                                        // not virtual, this calls base class' version.
        std::cout << std::endl;
        std::cout << "With `virtual` keyword" << std::endl;
        Vehicle* vehPointer;            // Declare base class pointer
        Car carObj;                     // Declare derived class object
        vehPointer = &carObj;           // Point base class point pointer to derived object
        vehPointer->sound();            // Call the sound() method. Because of `virtual`
                                        // keyword, this calls derived class' version.

        return 0;
}

