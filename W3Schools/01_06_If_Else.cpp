#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {

    /*
     * Get user input a number, check and return stating 
     * either positive, negative or zero
     */

    cout << "_______________" << endl;
    cout << "If .. Else If .. Else statement" << endl;

    int myNum;

    cout << "Type in a number: ";
    cin >> myNum;                                               // Get number input
    cin.clear();                                                // Reset cin state
    cin.ignore(numeric_limits<streamsize>::max(), '\n');        // Clear cin contents
    
    if (myNum > 0) {
        cout << "The input number " << myNum << " is a positive number" << endl;
    } else if (myNum < 0) {
        cout << "The input number " << myNum << " is a negative number" << endl;
    } else {
        cout << "The value " << myNum << " is neither positive nor negative" << endl;
    }


    /*
     * Short hand If..Else (Ternary Operator)
     * One-liner to replace simple if else statements:
     * variable = (condition) ? expressionTrue : expressFalse
     */

    cout << "_______________" << endl;
    cout << "Short hand If..Else statment (Ternary Operator)" << endl;

    int myTime;

    cout << "Input a time (24HR format): ";
    cin >> myTime;                                              // Get number input
    cin.clear();                                                // Reset cin state
    cin.ignore(numeric_limits<streamsize>::max(), '\n');        // Clear cin contents
 
    string timeResult = (myTime < 18) ? "Good Day." : "Good Evening.";
    cout << timeResult << endl;

    return 0;
}
