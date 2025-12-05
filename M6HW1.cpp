/*
CSC-134
M6HW1: Gold
Alan Guzman-Gomez
12.08.2025
*/

#include <iostream>
#include <string>
using namespace std;

const string CORRECT_COMBO = "7ZAV";
string player_input;

// Function Prototypes
void main_menu();
void choice_grab_ring();
void choice_ignore_it();
void choice_other_pocket();
void choice_throw_it();
void choice_throw_away();
void choice_call_police();
void choice_report_it();
void choice_shout_away();
void choice_have_courage();
void choice_grab_dog();
void choice_continue_door();
// TODO: add more choices here

int main() {
  cout << "M6HW1 - Choose Your Own Adventure Project" << endl;
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
  cout << "3. Call the police to report a missing ring." << endl;
  cout << "4. I don't want to play anymore, this game is lame" << endl;
  
  cout << "Choose (1-4): ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_grab_ring();
  } else if (2 == choice) {
    choice_ignore_it();
  } else if (3 == choice) {
    choice_report_it();
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

 void choice_report_it() {
    cout << "----------------------------------" << endl;
    cout << "You call the police to report a missing ring, as any good samaritan would." << endl;
    cout << "As soon as you pull out your phone, it slips from your grasp, and you reach to pick it up." << endl;
    cout << "Just as you grab your phone, you hear fast footsteps, and someone pushes you to the ground." << endl;
    cout << "You scoff, angry and startled, and look up at the perpetrator." << endl;
    cout << "Once you get a good look, you realize its not a person at all, its a giant pig standing on two legs!" << endl;
    cout << "PIG speaks to you:" << endl;
    cout << "YOU MUST ESCAPE, YOU ARE NOT IN YOUR WORLD ANYMORE." << endl;
    cout << "Do you: " << endl;
    cout << "1. Shout and run away." << endl;
    cout << "2. Gather your courage and inquire about your situation." << endl;
    int choice;
    cout << "Choose 1 or 2." << endl;
    cin >> choice;
    if (1 == choice) {
    choice_shout_away();
    } else if (2 == choice) {
    choice_have_courage();
    }
    }

  void choice_shout_away() {
    cout << "----------------------------------" << endl; 
    cout << "You shout in fear and quickly get up and run away." << endl;
    cout << "That was a mistake." << endl;
    cout << "PIG yells after you:" << endl;
    cout << "FOOL. YOU WILL MEET YOUR DEMISE." << endl;
    cout << "You run regardless, and fall through a large hole." << endl;
    cout << "You fall endlessly, and you never made it back home." << endl;
    cout << "DEFEAT" << endl;
  }

  void choice_have_courage() {
    cout << "----------------------------------" << endl; 
    cout << "You swallow your fear and ask the pig what he means." << endl;
    cout << "Pig tells you:" << endl;
    cout << "ONCE YOU TURN AROUND, THERE WILL BE A DOOR. GO THROUGH IT." << endl;
    cout << "YOU MUST ENTER THE DOOR AT THE END OF THE HALL." << endl;
    cout << "EACH OTHER DOOR WILL CONTAIN AN ITEM YOU HAVE LOST IN YOUR LIFE." << endl;
    cout << "USE THESE NUMBERS TO GET BACK HOME." << endl;
    cout << "Pig then shifts to his side, and on his shoulder is a branded combination: 7ZAV." << endl;
    cout << "With hesitation, you turn around and open an eerie door." << endl;
    cout << "You walk in." << endl;
    cout << "Walking down the hallway, you think about how this task is so easy!" << endl;
    cout << "Just then, you hear a distant bark from one of the rooms." << endl;
    cout << "You recognize it as your late dog." << endl;
    cout << "Do you: " << endl;
    cout << "1. Quickly open the door to grab your dog." << endl;
    cout << "2. Begrudgingly continue to the door at the end of the hall." << endl;
    int choice;
    cout << "Choose 1 or 2: ";
    cin >> choice;
    if (1 == choice) {
    choice_grab_dog();
    } else if (2 == choice) {
    choice_continue_door();
    }
    }

    void choice_grab_dog() {
      cout << "----------------------------------" << endl; 
        cout << "You grab your dog, reunited once again after many years." << endl;
        cout << "Your dog doesn't move, and suddenly, your hands are full of dust." << endl;
        cout << "You turn around quickly, and the door out has disappeared." << endl;
        cout << "You're trapped forever." << endl;
        cout << "DEFEAT" << endl;
    }

    void choice_continue_door() {
      cout << "----------------------------------" << endl; 
      cout << "A tear falls from your eye as you walk past, and you come upon the final door with a padlock." << endl;
      cout << "Enter the combination: " << endl;
      cin >> player_input;
      if (player_input == CORRECT_COMBO) {
        cout << "The door opens with a hiss, and you walk into the bright light on the other side." << endl;
        cout << "Once you're on the other side, you're greeted by your family's worried faces." << endl;
        cout << "They ask where you were, and you hug them with a newfound appreciation." << endl;
        cout << "You made it back to your world." << endl;
        cout << "VICTORY" << endl;
      } else {
        cout << "Your finger slipped, and you didn't enter the code correctly." << endl;
        cout << "A fatal mistake." << endl;
        cout << "The door melts into a puddle, as do the others, as you try running back." << endl;
        cout << "You are crushed." << endl;
        cout << "DEFEAT" << endl;
      }
    }