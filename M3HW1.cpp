/*
CSC-134
M3HW1 - Gold
Alan Guzman-Gomez
10/17/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Question 1: ChatBot Program
cout << "Question 1" << endl;
cout << "----------" << endl;

cout << "Hello, I'm a C++ program! Do you like me? Please type yes or no." << endl;

string answer;
cin >> answer;

if (answer == "Yes") {
    cout << "That's great! I'm sure we'll get along." << endl;
} else if (answer == "No") 
{
    cout << "Well, maybe you'll learn to like me later." << endl;
} else {
    cout << "If you're not sure... that's OK." << endl;
}
cout << "--------------------------------------------------------------------" << endl;

    // Question 2: Receipt Calculator Program
cout << "Question 2" << endl;
cout << "----------" << endl;

double meal_price, tax, tip = 0, total;
const double TAX_RATE = 0.07;

cout << "Enter the price of your meal: $";
cin >> meal_price;

cout << "Please enter 1 if your order is dine in, and enter 2 if it is to go." << endl;
int order_type;
cin >> order_type;

tax = meal_price * TAX_RATE;

if (order_type == 1) {
    tip = meal_price * 0.15;
}

total = meal_price + tax + tip;

cout << setprecision (2) << fixed;
cout << "Please come again!" << endl;
cout << "Meal price: $" << meal_price << endl;
cout << "Tax: $" << tax << endl;
cout << "Tip: $" << tip << endl;
cout << "-------------" << endl;
cout << "Total: $" << total << endl;

cout << "--------------------------------------------------------------------" << endl;

    // Question 3: Choose Your Own Adventure Game
cout << "Question 3" << endl;
cout << "----------" << endl;

cout << "When walking back home through the forest, the sun begins to set. In a hurry, you begin running recklessly." << endl;
cout << "You slip and fall through a hole. You wake up in a dark tunnel with a running stream of water." << endl;
cout << "You are in another dimension now, you must get back home." << endl;
cout << "It's so dark you cannot see your own hands. Do you go left or right?" << endl;
string choice1; 
cin >> choice1;

if (choice1 == "Left") {
    cout << "You go left, and eventually fall through a hole, leading to a room with a door, and a trapdoor with stairs going down." << endl;
    cout << "Do you go through the door or the trapdoor?" << endl;
    string choice2;
    cin >> choice2;

    if (choice2 == "Door") {
        cout << "The door leads back to your house, you have gotten back to your dimension. Victory!" << endl;
    }
    else if (choice2 == "Trapdoor") {
        cout << "You go down the ladder through the trapdoor. You slip and fall endlessly. You are trapped in another dimension falling for eternity. Defeat." << endl;
    }
}
else if (choice1 == "Right") {
    cout << "You go right. After a minute of walking, you hear loud foosteps running up behind you, getting louder with each step." << endl;
    cout << "You run, but get caught. You are now trapped in the alternative dimension forever. Defeat." << endl;
}


cout << "--------------------------------------------------------------------" << endl;

    // Question 4: Math Practice Program
cout << "Question 4" << endl;
cout << "----------" << endl;

    return 0;
}
