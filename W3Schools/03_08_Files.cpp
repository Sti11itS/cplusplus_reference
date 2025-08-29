#include <iostream>
#include <string>
#include <fstream>

// <fstream> library allows working with files
// both <iostream> and <fstream> are required
//
// 3 classes in <fstream>:
//      - `ofstream`: Creates and writes to files
//      - `ifstream`: Reads from files
//      ` `fstream`: Combination of `ofstream` and `ifstream`


int main() {
        
        // using `ofstream` class to create file object reference
        std::ofstream myFile;                           
        myFile.open ("03_08_Files_Example.txt");        // class method to open
        if (myFile.is_open()) {                         // Good practice to check for open file
            myFile << "This is a line.\n";
            myFile << "This is another line.\n";
            myFile.close();                             // ALWAYS REMEMBER TO CLOSE
        } else {
            std::cout << "Unable to create file" << std::endl;
        }

        // using `ifstream` class to read in file contents and output to tty as example
        std::string myLine;
        std::ifstream myFile2 ("03_08_Files_Example.txt"); // faster way to create file object
        if (myFile2.is_open()) {
            while (getline(myFile2,myLine)) {
                std::cout << myLine << std::endl;
            }
            myFile2.close();
        } else {
            std::cout << "Unable to read in file" << std::endl;
        }

        return 0;

}

