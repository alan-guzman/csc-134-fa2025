/*
CSC-134
M6BONUS1 
Alan Guzman-Gomez
12.07.25
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    ENTRANCE_HALL = 0,
    LIBRARY = 1,
    SUNROOM = 2,
    GREENHOUSE = 3,
    ATTIC = 4,
    NUM_ROOMS = 5
};

int main() {
    // Room names array
    string roomNames[NUM_ROOMS] = {
        "Entrance Hall",
        "Library",
        "Sunroom",
        "Greenhouse",
        "Attic"
    };
    
    // Room descriptions array
    string roomDescriptions[NUM_ROOMS] = {
        "An entrance hall with large, beautiful skylights.",
        "Rows of old, dusty, interesting books and has soft chairs.",
        "A spacious sunroom with a large telescope and comfortable couches.",
        "A large greenhouse with stone pathways and plants bigger than people.",
        "A cozy attic with a large TV and more skylights."
    };
    
    // Adjacency list using a 2D array
    // connections[from_room][direction] = to_room or -1 if no connection
    int connections[NUM_ROOMS][NUM_DIRECTIONS];
    
    // Initialize all connections to -1 (no connection)
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }
    
    // Define the connections between rooms using the Room enum
    // Entrance Hall connections
    connections[ENTRANCE_HALL][NORTH] = LIBRARY;    // Entrance Hall -> North -> Library
    connections[ENTRANCE_HALL][EAST] = SUNROOM;     // Entrance Hall -> East -> Sunroom
    connections[ENTRANCE_HALL][SOUTH] = -1;         // No connection south
    connections[ENTRANCE_HALL][WEST] = GREENHOUSE;  // Entrance Hall -> West -> Greenhouse
    
    // Library connections
    connections[LIBRARY][NORTH] = -1;               // No connection north
    connections[LIBRARY][EAST] = -1;                // No connection east
    connections[LIBRARY][SOUTH] = ENTRANCE_HALL;    // Library -> South -> Entrance Hall
    connections[LIBRARY][WEST] = -1;                // No connection west
    
    // Sunroom connections
    connections[SUNROOM][NORTH] = -1;               // No connection north
    connections[SUNROOM][EAST] = -1;                // No connection east
    connections[SUNROOM][SOUTH] = ATTIC;         // Sunroom -> South -> Attic
    connections[SUNROOM][WEST] = ENTRANCE_HALL;     // Sunroom -> West -> Entrance Hall
    
    // Greenhouse connections
    connections[GREENHOUSE][NORTH] = -1;                // No connection north
    connections[GREENHOUSE][EAST] = ENTRANCE_HALL;      // Greenhouse -> East -> Entrance Hall
    connections[GREENHOUSE][SOUTH] = -1;                // No connection south
    connections[GREENHOUSE][WEST] = -1;                 // No connection west
    
    // Attic connections
    connections[ATTIC][NORTH] = SUNROOM;         // Attic -> North -> Sunroom
    connections[ATTIC][EAST] = -1;               // No connection east
    connections[ATTIC][SOUTH] = -1;              // No connection south
    connections[ATTIC][WEST] = -1;               // No connection west
    
    // Game state
    int currentRoom = ENTRANCE_HALL; // Start in the Entrance Hall
    bool gameRunning = true;
    
    // Game loop
    while (gameRunning) {
        // Display current room information
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        
        // Show available exits
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;
        
        // Get player input
        string command;
        cout << "\nWhere would you like to go? ";
        cin >> command;
        
        // Process movement commands
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }
    
    cout << "Thanks for playing!" << endl;
    return 0;
}