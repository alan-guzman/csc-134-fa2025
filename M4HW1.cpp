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
int firstNum, secondNum, answer;
firstNum = 5;
// SecondNum = 1;
// Answer = FirstNum * SecondNum;

for (int i=1; i<= 5; i++) {
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << endl;
}

    return 0;
}