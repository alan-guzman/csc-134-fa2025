/*
CSC-134
M3LAB1: Ex. 2
Alan Guzman-Gomez
10.04.25
*/

#include <iostream>
using namespace std;

int main() {
    
    // Declare the variable we need
    int choice;

    // Ask the question
    cout << "Do you choose Cat 1 or Cat 2?" << endl;
    cout << "Type 1 or 2: ";
    cin >> choice;

    // Using If, make decision based on the user's choice

    if (1 == choice) {
        cout << "Great choice! You chose Cat 1, a Siamese, a vocal and playful friend." << endl;
    }
    else if (2 == choice) {
        cout << "Good choice. You chose Cat 2, a Tuxedo, a sassy and mean creature." << endl;
    }
    else {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    // Finish up
    cout << "Thanks for playing!" << endl; // this runs no matter the choicr

    return 0; // no errors
}