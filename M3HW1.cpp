/*
CSC-134
M3HW1 - Gold
Alan Guzman-Gomez
10/17/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Question 1: ChatBot Program
cout << "Question 1" << endl;
cout << "------------------" << endl;

cout << "Hello, I'm a C++ program! Do you like me? Please type yes or no." << endl;

string answer;
cin >> answer;

if (answer == "Yes") {
    cout << "That's great! I'm sure we'll get along." << endl;
} else if (answer == "No") 
{
    cout << "Well, maybe you'll learn to like me later." << endl;
} else {
    cout << "If you're not sure... that's OK." << endl;
}
cout << "--------------------------------------------------------------------" << endl;

    // Question 2: Receipt Calculator Program
cout << "Question 2" << endl;
cout << "------------------" << endl;

double meal_price, tax, tip = 0, total;
const double TAX_RATE = 0.07;

cout << "Enter the price of your meal: $";
cin >> meal_price;

cout << "Please enter 1 if your order is dine in, and enter 2 if it is to go." << endl;
int order_type;
cin >> order_type;

tax = meal_price * TAX_RATE;

if (order_type == 1) {
    tip = meal_price * 0.15;
}

total = meal_price + tax + tip;

cout << setprecision (2) << fixed;
cout << "Please come again!" << endl;
cout << "Meal price: $" << meal_price << endl;
cout << "Tax: $" << tax << endl;
cout << "Tip: $" << tip << endl;
cout << "-------------" << endl;
cout << "Total: $" << total << endl;

cout << "--------------------------------------------------------------------" << endl;

    return 0;
}
