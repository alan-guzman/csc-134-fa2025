

#include <iostream>
using namespace std;


int main()  {
    // Takis sales program
    // Variables are like mailboxes
    string first_name, last_name, full_name;
    string product = "Takis";
    int num_takis = 10;
    double cost_each = 0.25;

    //Greet the customer
    cout << "Welcome to the " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's youre last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " <<full_name << endl;


    // Ask how much they'd like to purchase

    // Calculate total price 
    // Give the result

    cout << endl;
    return 0; // no errors
}