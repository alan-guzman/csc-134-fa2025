/*
CSC-134
M1LAB - Apple Orchard 
Alan Guzman-Gomez
10.08.25
*/

#include <iostream>
using namespace std;

int main() {
    // This program will simulate an apple orchard.
    // The owner's name
    string name = "Alan Guzman";
    // Number of apples owned
    int apples = 100;
    // Prices per apple
    double pricePerApple = 0.25;

    // Calculate the total price of the apples 
    double totalPrice = (double) apples * pricePerApple;

    // Print all the information about the orchard
    cout << "Welcome to " << name;
    cout << " 's apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Apples are currently $"; 
    cout << pricePerApple << " each." << endl;

    // Final line, to print totalPrice
    cout << "If you want them all, that will be $" <<
    totalPrice << endl;
}