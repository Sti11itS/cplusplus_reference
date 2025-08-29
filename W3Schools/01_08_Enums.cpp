#include <iostream>
#include <string>

// values increment by 1 if not pre-defined
// starts from 0 from index 0
enum Level {
        LOW = 1,
        MEDIUM,
        HIGH
};

int main() {
        // create enum instance
        enum Level myVar = MEDIUM; 

        switch (myVar) {
            case 1:
                std::cout << "Low Level" << std::endl;
                break;
            case 2:
                std::cout << "Medium Level" << std::endl;
                break;
            case 3:
                std::cout << "High Level" << std::endl;
                break;
            }

        return 0;
}

