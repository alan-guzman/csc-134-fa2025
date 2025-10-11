/* 
CSC-134
M3LAB2
Alan Guzman-Gomez
10.10.25
*/

#include <iostream>
using namespace std;

int main () {

    // Declare variables 
    int grade;
    char letterGrade;

    // Ask user for input 
    cout << "Enter your numerical grade: ";
    cin >> grade;

    // Input
    if (grade < 0 || grade > 100) {
        cout << "Invalid. Enter a number between 0 and 100." << endl;
        return 0;
    }

    // Establish letter grade 
    if (grade >= 90 && grade <= 100) {
        letterGrade = 'A';
    }
    else if (grade >= 80 && grade <= 89) {
        letterGrade = 'B';
    }
    else if (grade >= 70 && grade <= 79) {
        letterGrade = 'C';
    }
    else if (grade >= 60 && grade <= 69) {
        letterGrade = 'D';
    }
    else {
        letterGrade = 'F';
    }

    // Display result
    cout << "Your letter grade is: " << letterGrade << endl;

    return 0;
}