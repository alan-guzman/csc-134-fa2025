/*
CSC-134
M6HW1: Gold
Alan Guzman-Gomez
12.08.2025
*/

#include <iostream>
using namespace std;

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_grab_ring();
void choice_ignore_it();
void choice_go_home();
void choice_other_pocket();
void choice_throw_it();
void choice_throw_away();
void choice_call_police();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu: The Cursed Ring" << endl;
  cout << "You stumble across a diamond ring on the road during your daily morning run." << endl;
  cout << "Do you:" << endl;
  cout << "1. Grab the ring and continue your run" << endl;
  cout << "2. Ignore it and keep running" << endl;
  cout << "3. Get weird vibes and go home to take a rest day." << endl;
  cout << "4. I don't want to play anymore, this game is lame" << endl;
  cout << "Choose (1-4): ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_grab_ring();
  } else if (2 == choice) {
    choice_ignore_it();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Okay fine, quitting game." << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_grab_ring() {
  cout << "You push the ring into your pocket and keep going on your run, as if nothing happened." << endl;
  cout << "A few minutes in, you feel a sudden burning heat in the same pocket." << endl;
  cout << "You pull the ring out to inspect it, and its hot to the touch." << endl;
  cout << "Do you:" << endl;
  cout << "1. Put it in the other pocket." << endl;
  cout << "2. Throw it to the ground." << endl;
  int choice;
  cout << "Choose 1 or 2: ";
  cin >> choice;
  if (1 == choice) {
    choice_other_pocket();
  } else if (2 == choice) {
    choice_throw_it();
  }
}

void choice_ignore_it() {
  cout << "----------------------------------" << endl;
  cout << "You choose to ignore the expensive-looking ring without finding it's owner." << endl;
  cout << "At the end of your run, you make the turn to run back home." << endl;
  cout << "When you reach your front steps, there it is again, the same ring dangling from the door knob." << endl;
  cout << "Do you:" << endl;
  cout << "1. Throw it away and forget about it." << endl;
  cout << "2. Call the police." << endl;
  int choice;
  cout << "Choose 1 or 2: ";
  cin >> choice;
  if (1 == choice) {
    choice_throw_away();
  } else if (2 == choice) {
    choice_call_police();
  }
}

void choice_go_home() { 
  cout << "----------------------------------" << endl;
  cout << "The ring has a very scary aura. This is enough to make you think you should take a rest day." << endl;
  cout << "You go home, having completely and unknowingly dodged the cursed ring by not letting greed consume you." << endl;
  cout << "You survived." << endl;
  cout << "VICTORY" << endl;
 }

 void choice_other_pocket() {
  cout << "----------------------------------" << endl;
  cout << "Maybe the friction made it heat up?" << endl;
  cout << "Regardless, you continue your run." << endl;
  cout << "A minute into the run, you blink, and the day has turned into night." << endl;
  cout << "This is confusing, the sun was up a second ago." << endl;
  cout << "You run back home, afraid to stay out longer in the dark." << endl;
  cout << "Once you get home, you look for your spouse and children, but they're nowhere to be found." << endl;
  cout << "You attempt to open the door to go find your family, but are unable to." << endl;
  cout << "Suddenly, the house starts to get swelting hot, but how can it be? Winter has just started." << endl;
  cout << "You realize you're not really home anymore, and you take out the shiny ring to throw it to the ground." << endl;
  cout << "As you collapse from heat exhaustion, you see the ring, its sparkle blinding you." << endl;
  cout << "The greed consumed you." << endl;
  cout << "DEFEAT" << endl;
 }


 void choice_throw_it() {
  cout << "----------------------------------" << endl;
  cout << "You throw it to the ground, paying it no more mind as you continue with your run." << endl;
  cout << "Once you get home, you continue the day as usual." << endl;
  cout << "However, you begin to feel uneasy as the day approaches bedtime." << endl;
  cout << "You have nightmares. Nightmares you can't wake up from, that feel endless." << endl;
  cout << "When you do finally wake up, you have a fever, you're incoherent, and your family is terrified." << endl;
  cout << "The ring has cursed you and you have lost your sanity." << endl;
  cout << "DEFEAT" << endl;
 }


 void choice_throw_away() {
  cout << "----------------------------------" << endl;
  cout << "You throw the ring away into the nearby dumpster, unknowing the power it holds." << endl;
  cout << "Days turn into weeks." << endl;
  cout << "No matter how many times you throw it away, crush it, or break it, the ring awlays reappears." << endl;
  cout << "One day, you decide to return it where you found it." << endl;
  cout << "As soon as you set it on the grass, it starts burning a bright red, burning the plants nearby." << endl;
  cout << "You put away the fire, and run away home." << endl;
  cout << "Having escaped the ring's curse, you swear to never be selfish again." << endl;
  cout << "You survived against all odds." << endl;
  cout << "VICTORY" << endl;
 }


 void choice_call_police() {
  cout << "----------------------------------" << endl;
  cout << "Concerned someone is stalking you, you call the police." << endl;
  cout << "The police take your statement, chastising you for not turning the ring in immediately." << endl;
  cout << "The ring is taken away, and you catch a glimpse as it is stored away." << endl;
  cout << "Once radiant, the ring now looks completely tarnished." << endl;
  cout << "Although you are traumatized, you escaped the ring's curse by doing the right thing." << endl;
  cout << "VICTORY" << endl;
 }



// any new choices go here