#include <iostream>
#include <string>
using namespace std;

int main() {
        int numGuests;
        cout << "How many guests? ";
        cin >> numGuests;

        // Check for invalid input
        if (numGuests <= 0) {
            cout << "Number of guests must be at least 1.\n";
            return 1;
        }

        // Regular arrays, dataType array[const value], must be determined before runtime
        // Therefore `string guests[numGuests]` cannot be used
        // Hence, if user input is required, dynamic arrays shown below are needed.
        // Create memory space for [numGuests] guests (an array of strings)
        string* guests = new string[numGuests];

        // Ignore the leftover newline character after reading numGuests
        cin.ignore();

        // Enter guest names
        for (int i = 0; i < numGuests; i++) {
            cout << "Enter name for guest " << (i+1) << ": ";
            getline(cin, guests[i]);    // Read the full name (including spaces)
            }

        // Show all guests
        cout << "\nGuests checked in:\n";
        for (int i = 0; i < numGuests; i++) {
            cout << guests[i] << endl;
        }

        // Reminder
        cout << endl << "REMINDER: Always remember to clean up memory after use" << endl;
        cout << "Every \"new\" declaration needs a \"delete\" (or delete[] for arrays)" << endl;

        delete[] guests;        // Clean up memory, [] required due to variable being array
        return 0;
}

