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
const int firstNum = 5;
int multiplier = 1;

while (multiplier<= 12) {
    int answer = firstNum * multiplier;
    cout << firstNum << " times " << multiplier << " is " << answer << "." << endl;
    multiplier++;
}

    return 0;
}