/*
CSC-134
M4LAB1
Alan Guzman-Gomez
10.25.25
*/

#include <iostream>
using namespace std;

int main() {
    cout << "M4LAB" << endl;
    // Declare Variables
    int height, width;

    // Start with a set size
    height = 5;
    width = 5;

    // Test: make a row of asterisks
    for (int i=0; i < width; i++) {
        cout << "*" << " ";
    }
    cout << endl; // finish the row

}