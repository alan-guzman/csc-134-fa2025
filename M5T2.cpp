/*
CSC-134
M5T2
Alan Guzman-Gomez
11.06.25
*/

#include <iostream>
#include <math.h>
using namespace std;

// Given 2 numbers, print them out nicely on a line
// Print number and result
void printResult(int number, int result) {
    cout << number << " : " << result << endl;
}

// Exponential growth function 
int growth (int number) {
    int result = pow((double)2, (double)number); // 2 to the power
    return result;
}

int main() {
    
    // For this problem, model exponential growth rather than squared
    int number, result;

    number = 1;
    while (number <= 10) {
        result = growth(number);
        printResult(number,result);
        number++;
    }



}