// Tic-Tac-Toe game where you can play either vs the computer or another person
// Roland Fisher
// Start date: 7-26-24
// End date:
#include <iostream>
#include <string>
#include "Display.h"
#include "Display.cpp"

using namespace std;

// The place where the main game loop will be

int main() {

    int choice;

    cout << "Welcome to Tic-Tac-Toe!\n";
    cout << "Will there be 1 player or 2 players?";
    cin >> choice;

    if(choice == 1){
        displayForOnePlayer(choice);
    }
    else{
        displayForTwoPlayers(choice);
    }



    return 0;
}
