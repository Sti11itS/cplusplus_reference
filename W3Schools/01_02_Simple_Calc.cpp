#include <iostream>
using namespace std;

int main() {
    int x,y;            // Can declare multiple variables of same type
    int sum;
    cout << "Type an integer: ";
    cin >> x;           // Take input to assign to x
    cout << "Type another integer: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum << endl;

    return 0;
}

