/*
CSC-134
M3 Random Numbers Example
Alan Guzman-Gomez
09/28/2025
Start with 
*/

#include <iostream>
// for pseudo-random numbers
#include <cmath>
// for making it random
#include <ctime>
using namespace std;

int main() {
    cout << "Let's roll some dice!" << endl;
    int seed;
    cout << "What's your lucky number? ";
    cin >> seed;
    // Seed the RNG
    srand(seed);

    const int MAX = 6; // numbers from 1-6
    int roll;
    roll = (rand() % MAX) + 1; // Divide by MAX, and keep the remainder
    cout << "Your roll was: " << roll << endl;

    roll = (rand() % MAX) + 1; // Divide by MAX, and keep the remainder
    cout << "Your roll was: " << roll << endl;
    
    roll = (rand() % MAX) + 1; // Divide by MAX, and keep the remainder
    cout << "Your roll was: " << roll << endl;

    return 0;
}