#include <iostream>
#include <string>

std::string text = "Data Structures are used to store and organise data. An array is \n"
                   "  an example of a data structure, which allows multiple elements \n"
                   "  to be stored in a single variable. \n"
                   "C++ includes many other data structures as well, each is used to \n"
                   "  handle data in different ways. \n"
                   "These are part of the C++ STL, The Standard Template Library. \n";

std::string text2 = "The STL consists of different data structures and algorithms \n"
                    "  to effectively store and manipulate data. \n"
                    "Data Structures store data; Algorithms solve different problems, \n"
                    "  often by searching through and manipulating those data structurs. \n"
                    "Use the right data structure and algorithms. \n";


int main() {
        std::cout << text << std::endl;
        std::cout << text2 << std::endl;
        std::cout << "Common Data Structures:" << std::endl;
        std::cout << "Vector library | #include <vector>" << std::endl;
        std::cout << "- Stores elements like an array but can dynamically change in size. \n"
                     "  Adding/Removing elements usually done at the end. \n"
                     "  Elements accessible by index. \n";
        std::cout << "List library | #include <list>" << std::endl;
        std::cout << "- Stores elements sequentially, where each element is connected to "
                     "the next. \n  Adding/Removing elements possible at both ends. \n"
                     "  Elements not accessible by index. \n";
        std::cout << "Stack library | #include <stack>" << std::endl;
        std::cout << "- Stores elements in specific order, LIFO (Last In, First Out), where "
                     " elements \n  addable/removable only from top. \n"
                     "  Elements not accessible by index. \n";
        std::cout << "Queue library | #include <queue>" << std::endl;
        std::cout << "- Stores elements in specific order, FIFO (First In, First Out), where "
                     " elements \n  are added at end and removed from front. \n"
                     "  Elements not accessible by index. \n";
        std::cout << "Deque library | #include <deque>" << std::endl;
        std::cout << "- Stores elements in double-ended queue, where elements can be added "
                     "and removed from both ends. \n"
                     "  Elements accessible by index. \n";
        std::cout << "Set library | #include <set>" << std::endl;
        std::cout << "- Stores unique elements. Elements not accessible by index." << std::endl;
        std::cout << "Map library | #include <map>" << std:: endl;
        std::cout << "- Stores elements in \"key/value\" pairs. Accessible by keys (not by index)"
                  << std::endl;

        std::cout << std::endl << "Key Concepts of STL" << std::endl;
        std::cout << "The key components of STL consists of Containers, Iterators and Algoriths,"
                     " and their \nrelationship with them:" << std::endl;
        std::cout << "Containers - are data structures that provide a way to store data, \n"
                     "             like vectors and lists." << std::endl;
        std::cout << "Iterators - are objects used to access elements of a data structure."
                  << std::endl;
        std::cout << "Algorithms - includes functions (and methods), like `sort()` and \n "
                     "             `find()`, that perform operations on data structures \n "
                     "             through iterators." 
                  << std::endl;

        return 0;
}


