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
    // To finish, use variable sizes, by asking the user
    // height = 5;
    // width = 5;
    cout << "How tall should the block be?" << endl;
    cin >> height;
    cout << "How wide should the block be?" << endl;
    cin >> width;

    // Test: make a row of asterisks
    cout << "One row" << endl;
    for (int i=0; i < width; i++) {
        cout << "*" << " ";
    }
    cout << endl; // finish the row

    // Test: make a column
    cout << "One column" << endl;
    for (int j=0; j < height; j++) {
        cout << "*" << endl;
    }

    // Instead of printing a column, we want to print a row within the outer loop
    // (nested loops)
    cout << "The entire block" << endl;
    for (int j=0; j < height; j++) {
        // Print one row
        for (int i=0; i < width; i++) {
            cout << "*" << " ";
        }
        cout << endl; // End the row with a newline
    }

}