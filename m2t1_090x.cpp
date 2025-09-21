

#include <iostream>
using namespace std;


int main()  {
    // Takis sales program
    // Variables are like mailboxes
    string name = "Takis";
    int num_takis = 10;
    double cost_each = 0.25;

    cout << "Welcome to the " << name << " store!" << endl;
    cout << "There are " << num_takis << " takis in stock." << endl;
    cout << "They cost $" << cost_each << " each." << endl;

    // Find out the total price 
    double total_cost = num_takis * cost_each;
    cout << "The price for all of them is: $" << total_cost << endl;

    cout << endl;
    return 0; // no errors
}