#include <iostream>
#include <string>
using namespace std;

int main() {
    // Create variables of different data types
    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    string currency = "AUD";
    char currency_symbol = '$';
    bool status = true;

    // Print Variables
    cout << "Number of items: " << items << "\n";
    cout << "Cost per item: " << currency << currency_symbol << cost_per_item << endl;
    cout << "Total cost: " << currency << currency_symbol << total_cost << endl;

    return 0;
}

