/*
CSC 134
M5HW1 - Gold Tier
Alan Guzman-Gomez
11.13.25
*/

#include <string>
#include <iostream>
#include <iomanip> 
using namespace std;

int main () {

    // Question 1 
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

    // Question 2
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

    return 0;
}

