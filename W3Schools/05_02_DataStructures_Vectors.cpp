#include <iostream>
#include <string>
#include <vector>       // Header file <vector> required for `vector` Data Structure

// Vector in C++ is a resizable array.
// Stores multiple elements with the *same* dataType.
// Size of Array cannot be modified.
// Vectors, however, can grow and shrink in size as needed.


int main() {
        std::cout << "To use <vector> Data Structures, include the <vector> header: "
                  << std::endl << "#include <vector>" << std::endl;

        std::cout << std::endl;
        std::cout << "Create a <vector> Data Structure" << std::endl;
        std::cout << "Add elements in curly brackets {}" << std::endl;
        std::cout << "std::vector<std::string> cars = {\"Volvo\", \"BMW\", \"Ford\", \"Mazda\"}" 
                  << std::endl;
        std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

        std::cout << std::endl;
        std::cout << "Print vector elements, using for-each loop" << std::endl;
        for (std::string car : cars) {
            std::cout << car << std::endl;
        }

        std::cout << std::endl;
        std::cout << "Access <vector> element by index number inside []:" << std::endl;
        std::cout << "Index [0] is: " << cars[0] << std::endl;
        std::cout << "Index [1] is: " << cars[1] << std::endl;
        std::cout << "Access first/last element by .front()/.back() functions:" << std::endl;
        std::cout << "First element by <vector>.front(): " << cars.front() << std::endl;
        std::cout << "Last elememt by <vector>.back(): " << cars.back() << std::endl;
        std::cout << "Access element at specified index location, use .at() function: " 
                  << std::endl;
        std::cout << "Second element at <vector>.at(1): " << cars.at(1) << std::endl;
        std::cout << "Third element at <vector>.at(2): " << cars.at(2) << std::endl;
        std::cout << ".at() function is preferred over [] because C++ lets you know "
                  << "when an error occurs" << std::endl;
        std::cout << "Out of range, say <vector>.at(6), gives this error and terminates" 
                  << std::endl;
        // std::cout << cars.at(6) << std::endl;
        std::cout << "```" << std::endl;
        std::cout << "terminate called after throwing an instance of 'std::out_of_range' " << std::endl
                  << "  what():  vector::_M_range_check: __n (which is 6) >= this->size() (which is 4)" << std::endl
                  << "Aborted (core dumped)" << std::endl;
        std::cout << "```" << std::endl;
        std::cout << "Out of range direct index access returns nothing: " << std::endl;
        std::cout << "Out of range index cars[6] for example: " << cars[6] << std::endl;

        std::cout << std::endl;
        std::cout << "To change specific element value, refer to index number: " << std::endl;
        std::cout << "Change first element: cars[0] = \"BYD\"" << std::endl;
        cars[0] = "BYD";
        std::cout << cars[0] << std::endl;
        std::cout << "Still safer to use the .at() function: " << std::endl;
        std::cout << "Out of range error is same as previous" << std::endl;
        std::cout << "Change first element again: cars.at(0) = \"GWM\"" << std::endl;
        cars.at(0) = "GWM";
        std::cout << cars.at(0) << std::endl;

        std::cout << std::endl;
        std::cout << "Grow/Shrink <vector> Data Structures via Adding/Removing elements" << std::endl;
        std::cout << "Done using .push_back() and .pop_back() functions to add/remove "
                  << "elements at the end of the <vector>: " << std::endl;
        cars.push_back("XPENG");
        cars.push_back("Toyota");
        cars.push_back("Honda");
        cars.push_back("Nissan");
        cars.push_back("Tesla");
        cars.push_back("Jeep");
        std::cout << "Using .push_back(): " << std::endl;
        for (std::string car : cars) {
            std::cout << car << ", ";
        }
        std::cout << std::endl;
        std::cout << "Using .pop_back(): " << std::endl; 
        for (int i = 0 ; i < 2 ; i++) {
            cars.pop_back();
        }
        for (std::string car : cars) {
            std::cout << car << ", ";
        }
        std::cout << std::endl;

        std::cout << std::endl;
        std::cout << "Check for <vector> size or whether it's empty "
                  << "using .size() and .empty() respectively" << std::endl;
        std::cout << ".size() returns size of <vector>: " << std::endl;
        std::cout << "<vector> container \"cars\" has " << cars.size() << " elements" << std::endl;
        std::cout << ".empty() returns 1 (true) for empty or 0 (false) for having elements: "
                  << std::endl;
        std::cout << "Is <vector> container \"cars\" empty? " << cars.empty() << " (No)"
                  << std::endl;
        std::vector<std::string> vehicles;
        std::cout << "Is <vector> container \"vehicles\" empty? " << vehicles.empty() << " (Yes)"
                  << std::endl;


        std::cout << std::endl;
        std::cout << "Use the <vector>.size() function to help with for loops: " << std::endl;
        for (int i = 0; i < cars.size(); i++) {
            std::cout << cars[i] << ", ";
        }
        std::cout << std::endl;

        return 0;
}
