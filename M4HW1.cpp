/*
CSC-134
M4HW1: Gold
Alan Guzman-Gomez
10.27.25
*/

#include <iostream>
using namespace std;

int main() {

// Declare variables 
int userNum;
int multiplier = 1;

// Loop
do {
    cout << "Enter a number from 1 to 12: " << endl;

    if (!(cin >> userNum)) {
    cout << "Invalid input. Number must be between 1 and 12. Please retry." << endl;
    cin.clear();
    cin.ignore(100, '\n');
    userNum = 0;
    }
    else if (userNum < 1 || userNum > 12) {
    cout << "Invalid input. Number must be between 1 and 12. Please retry." << endl;
    }
} while (userNum < 1 || userNum > 12);

while (multiplier<= 12) {
    int answer = userNum * multiplier;
    cout << userNum << " times " << multiplier << " is " << answer << "." << endl;
    multiplier++;
}

    return 0;
}