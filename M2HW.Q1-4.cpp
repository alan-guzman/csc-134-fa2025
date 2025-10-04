/*
CSC-134-0001
M2HW1 - Gold
Alan Guzman-Gomez
10.04.25
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    /////////////////////////////////////////////////////

    // Question #1: Program simulating bank transaction
    string firstName, lastName;
    double startingBalance, deposit, withdrawal, finalBalance;
    int accountNumber = rand();

    // Asking for the user's name
    cout << "Enter your first name: " << endl;
    cin >> firstName;
    cout << "Enter your last name: " << endl;
    cin >> lastName;

    // Asking for the user's account details
    cout << "Enter your account balance: $" << endl;
    cin >> startingBalance;
    cout << "Enter deposit amount: $" << endl;
    cin >> deposit;
    cout << "Enter withdrawal amount: $" << endl;
    cin >> withdrawal;

    // Calculating the final balance
    finalBalance = startingBalance + deposit - withdrawal;

    // Display results
    cout << fixed << setprecision(2);
    cout << "Account Summary" << endl;
    cout << "---------------" << endl;
    cout << "Name on account: " << firstName << " " << lastName << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final balance: $" << finalBalance << endl;

    cout << "###########################################" << endl;

    /////////////////////////////////////////////////////

    // Question #2: Program for calculating General Crates charge and profit

    // Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

        // Variables 
    double length,  // The crate's length
        width,      // The crate's width
        height,     // The crate's height 
        volume,     // The volume of the crate
        cost,       // The cost to build the crate 
        charge,     // The customer charge for the crate
        profit;     // The profit made on the crate 

    // Set the desired output formatting for numbers
    cout << setprecision (2) << fixed << showpoint;

    // Prompt user for the crate;s length, width, and height
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate the crate's volume, the cost to produce it, 
    // the charge to the customer, and the profit
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display the calculated data
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    cout << "###########################################" << endl;


    /////////////////////////////////////////////////////

    // Question #3: Program calculating amount of pizza slice leftovers

    int pizzas, slicesPerPizza, visitors, leftover;

    cout << "How many pizzas will you order? ";
    cin >> pizzas;
    cout << "How many slices per pizza? ";
    cin >> slicesPerPizza;
    cout << "How many visitors? ";
    cin >> visitors;

    leftover = (pizzas*slicesPerPizza) - (visitors * 3);
    cout << "\nLeftover slices: " << leftover << endl;
    cout << "###########################################" << endl;


    /////////////////////////////////////////////////////

    // Question #4: Write FTCC cheering program

    string school = "FTCC";
    string team = "Trojans";

    cout << "Let's go " << school << endl;
    cout << "Let's go " << school << endl;
    cout << "Let's go " << school << endl;
    cout << "Let's go " << team << endl;

return 0;

}




