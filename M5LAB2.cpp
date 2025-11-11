/*
CSC-134
M5LAB2 
Alan Guzman-Gomez
11.09.25
*/

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);
int get_choice(int size);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors

      double length = getLength();
      double width = getWidth();
      double area = getArea(length, width);

      displayData(length, width, area);

      return 0;
}

      double getLength() {   
            double length;
            cout << "Enter rectangle length: " << endl;
            cin >> length;
            return length;
      }

      double getwidth() {
            double width;
            cout << "Enter rectangle width: " << endl;
            cin >> width;
            return width;
      }    

      double getArea(double length, double width) {
            return length * width;
      }

      void displayData(double length, double width, double area) {
            cout << fixed << setprecision(2); 
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Area: " << area << endl;

      }

          
int get_choice(int size) {
  // Only allow choices between 1 and size
  int choice=0;
  while (choice < 1 || choice > size) {
    cout << "Choose: ";
    cin >> choice;
        // Check if the input is valid
        if (cin.fail()) {
          cin.clear(); // Clear the error flag
          cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
          cout << "Invalid input. Please enter a number between 1 and " << size << "." << endl;
        }
  }
  cout << "You picked option #" << choice << endl;
  return choice;
}
          

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************