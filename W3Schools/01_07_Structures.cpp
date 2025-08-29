#include <iostream>
#include <string>

struct student {
        std::string name;
        int age;
        char grade;
};


int main() {
        student stud1;

        stud1.name = "Liam";
        stud1.age = 35;
        stud1.grade = 'A';

        std::cout << "Name: " << stud1.name << std::endl;
        std::cout << "Age: " << stud1.age << std::endl;
        std::cout << "Grade: " << stud1.grade << std::endl;

        return 0;
}

