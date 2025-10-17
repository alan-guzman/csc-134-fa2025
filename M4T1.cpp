/*
CSC-134
M4T1
Alan Guzman-Gomez
10.17.2025
*/

#include <iostream>
using namespace std;

int main() {

    cout << "Program 5-3" << endl;
    cout << "-----------" << endl;
    int number = 0;

    while (number < 5)
    {
        cout << "Hello\n";
        number ++;
    }
    cout << "That's all!\n";

    cout << "---------------------------" << endl;

    cout << "        " << endl;

    cout << "Program 5-6" << endl;
    cout << "-----------" << endl;

    const int MIN_NUMBER = 1,  // Starting number to square
             MAX_NUMBER = 10; // Maximum number to square

    int num = MIN_NUMBER;     // Counter

    cout << "Number Number Squared\n";
    cout << "---------------------\n";
        while (num <= MAX_NUMBER)
        {
            cout << num << "\t\t" << (num * num) << endl;
            num++; // Increment the counter
        }

    return 0; // done
}