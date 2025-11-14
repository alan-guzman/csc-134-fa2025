/*
CSC 134
M5HW1 - Gold Tier
Alan Guzman-Gomez
11.13.25
*/

#include <string>
#include <iostream>
#include <iomanip> 
#include <cmath>
#include <limits>
using namespace std;
const double PI = 3.14159;



    // Question 1 
    void question1(){
    cout << "------------------------------------------" << endl;
    cout << "                Question One              " << endl;
    cout << "------------------------------------------" << endl;

    string month1, month2, month3;
    double rain1, rain2, rain3;

    // Month 1
    cout << "Enter month: " << endl;
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": " << endl;
    cin >> rain1;

    // Month 2
    cout << "Enter month: " << endl;
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": " << endl;
    cin >> rain2;

    // Month 3
    cout << "Enter month: " << endl;
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": " << endl;
    cin >> rain3;

    double totalRainfall = rain1 + rain2 + rain3;
    double averageRainfall = totalRainfall / 3.0;

    cout << "The average rainfall for " << month1 << ", " 
    << month2 << ", and " << month3 << " is " <<
    fixed << setprecision(2) << averageRainfall << " inches." 
    << endl;
    }

    // Question 2
    void question2() {
    cout << "------------------------------------------" << endl;
    cout << "                Question Two              " << endl;
    cout << "------------------------------------------" << endl;

    double width, length, height, volume;

    cout << "Enter the width of the block: ";
    cin >> width;

    cout << "Enter the length of the block: ";
    cin >> length;

    cout << "Enter the height of the block: ";
    cin >> height;

    volume = width * length * height;

    cout << "Width: " << fixed << setprecision(2) << width << endl;
    cout << "Length: " << fixed << setprecision(2) << length << endl;
    cout << "Height: " << fixed << setprecision(2) << height << endl;
    cout << "Hyperrectangle Volume: " << fixed << setprecision(4) <<
    volume << " square units" << endl;
    }

    // Question 3
    void question3() {
    cout << "------------------------------------------" << endl;
    cout << "              Question Three              " << endl;
    cout << "------------------------------------------" << endl; 

    int number;
    string roman_numeral;

    cout << "Enter a number (1-10): ";
    cin >> number;

    switch (number) {
        case 1: 
            roman_numeral = "I";
            break;
        case 2:
            roman_numeral = "II";
            break;
        case 3:
            roman_numeral = "III";
            break;
        case 4:
            roman_numeral = "IV";
            break;
        case 5:
            roman_numeral = "V";
            break;
        case 6: 
            roman_numeral = "VI";
            break;
        case 7:
            roman_numeral = "VII";
            break;
        case 8:
            roman_numeral = "VIII";
            break;
        case 9:
            roman_numeral = "IX";
            break;
        case 10:
            roman_numeral = "X";
            break;
        default:
            roman_numeral = "Invalid, try again.";
            break;
    }

    cout << "The Roman numeral version of " << number << " is " 
    << roman_numeral << "." << endl;
    }

    // Question 4
    void question4() {
    cout << "------------------------------------------" << endl;
    cout << "              Question Four               " << endl;
    cout << "------------------------------------------" << endl; 

    int choice;
    double area, r, base, length, width, height;

    // Menu
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Cacluate the Area of a Rectangle" << endl;
    cout << "3. Cacluate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the circle's radius: ";
            cin >> r;
            area = PI * pow(r, 2);
            cout << "The area is " << fixed << setprecision(5)
            << area << endl;
            break;
        case 2:
            cout << "Enter the rectangle's length: ";
            cin >> length;
            cout << "Enter the rectangle's width: ";
            cin >> width;
            area = length * width;
            cout << "The area is " << fixed << setprecision(5)
            << area << endl;
            break;
        case 3:
            cout << "Enter the triangle's base: ";
            cin >> base;
            cout << "Enter the triangle's height: ";
            area = base * height * 0.5;
            cout << "The area is " << fixed << setprecision(5)
            << area << endl;
            break;
        case 4:
            cout << "Leaving calculator and returning to the main menu now." << endl;
            break;
        default:
            cout << "Please try again and enter a value within 1-4." << endl;
            break;
    }
    }

    // Question 5
    void question5() {
    cout << "------------------------------------------" << endl;
    cout << "              Question Five               " << endl;
    cout << "------------------------------------------" << endl; 

    double speed, totalHours;

    cout << "What is the speed of the vehicle in MPH? ";
    cin >> speed;

    cout << "How many hours has it traveled? ";
    cin >> totalHours;

    cout << "Hour   |   Distance Traveled" << endl;
    cout << "----------------------------" << endl;

    for (int hour = 1; hour <= totalHours; ++hour) {
        double distanceTraveled = speed * hour;

        cout << setw(4) << hour << setw (10) << fixed 
        << setprecision(0) << distanceTraveled << endl;
    }
    }

int main() {

    int choice;

    do {
    cout << "------------------------------------------" << endl;
    cout << "               MAIN MENU                  " << endl;
    cout << "------------------------------------------" << endl; 
    cout << "1. Average Rainfall Calculator" << endl;
    cout << "2. Three Dimensional Hyperrectangle Calculator" << endl;
    cout << "3. Roman Numeral Converter" << endl;
    cout << "4. Geometry Calculator" << endl;
    cout << "5. Distance Traveled Calculator" << endl;
    cout << "6. Quit" << endl;
    cout << "Enter your choice (1-6): ";

    while (!(cin >> choice)) {
        cout << "Please try again and enter a value within 1-6: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    switch (choice) {
        case 1:
            question1();
            break;
        case 2:
            question2();
            break;
        case 3:
            question3();
            break;
        case 4:
            question4();
            break;
        case 5:
            question5();
            break;
        case 6:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Please try again and enter a value within 1-6." << endl;
            break;
    }
    } while (choice != 6);

    return 0;
}


