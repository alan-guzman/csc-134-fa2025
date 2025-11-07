/*
CSC-134
M5T2
Alan Guzman-Gomez
11.06.25
*/

#include <iostream>
using namespace std;

// Given 2 numbers, print them out nicely on a line
void printResult(int number, int result) {
    cout << number << " squared= " << result << endl;
}

int main() {
    
    int count = 1;
    int result;

    while (count <= 10) {
        result = count * count; // Squared

        printResult(count,result);
        count++;
    }



}