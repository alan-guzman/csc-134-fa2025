

#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;


int main()  {
    // Takis sales program
    // Variables are like mailboxes
    string first_name, last_name, full_name;
    string product = "Takis";
    int amount_purchased;
    double cost_each = 4.99;
    double total_cost;

    //Greet the customer
    cout << "Welcome to the " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's youre last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " <<full_name << endl;


    // Ask how much they'd like to purchase
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;


    // Calculate total price
    total_cost = amount_purchased * cost_each;

    // Formatting: Set all prices to 2 decimal places
    cout << setprecision(2) << fixed;

    // Give the result
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    cout << endl;
    return 0; // no errors
}