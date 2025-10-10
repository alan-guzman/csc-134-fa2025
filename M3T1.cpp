/*
CSC-134
M3T1
Alan Guzman-Gomez
10.10.25
*/

#include <iostream>
using namespace std;

int main() {

    // Variables 
    int widthOne, lengthOne, widthTwo, lengthTwo;
    int areaOne, areaTwo;

    // Ask user for the length and width
    cout << "Please enter the width and height of the first" << endl;
    cout << "rectangle, separated by a space or newline" << endl;
    cin >> widthOne >> lengthOne;

    cout << "Please enter the width and height of the first" << endl;
    cout << "rectangle, separated by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    // Calculate answer
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    // Display results
    cout << "Rectangle one has area of " << areaOne << endl;
    cout << "Rectangle two has area of " << areaTwo << endl;

    return 0;
}