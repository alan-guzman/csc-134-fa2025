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

return 0;

}




