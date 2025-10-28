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

cout << "Enter a number from 1 to 12: " << endl;

if (!(cin >> userNum)) {
    cout << "Invalid input." << endl;
}

while (multiplier<= 12) {
    int answer = userNum * multiplier;
    cout << userNum << " times " << multiplier << " is " << answer << "." << endl;
    multiplier++;
}

    return 0;
}