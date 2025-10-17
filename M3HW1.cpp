/*
CSC-134
M3HW1 - Gold
Alan Guzman-Gomez
10/17/2025
*/

#include <iostream>
using namespace std;

int main() {

// Question 1: ChatBot Program
cout << "Question 1" << endl;

cout << "Hello, I'm a C++ program! Do you like me? PLease type yes or no." << endl;

string answer;
cin >> answer;

if (answer == "yes") {
    cout << "That's great! I'm sure we'll get along."
} else if (answer == "no") {
    cout << "Well, maybe you'll learn to like me later." << endl;
} else {
    cout << "If you're not sure... that's OK." << endl;
}

    return 0;
}
