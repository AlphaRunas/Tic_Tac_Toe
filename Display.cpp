//
// Created by Roland Fisher on 7/26/24.
//

#include "Display.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Maybe use a different Data Structure to make sure it is
// update correctly.
vector<int> board = {(1, 2, 3),
                     (4, 5, 6),
                     (7, 8, 9)};

void displayForTwoPlayers(int y){
    string name1;
    string name2;

    cout << "Enter the name for player 1: ";
    cin >> name1;

    cout << "Enter the name for the second player: ";
    cin >> name2;
}

void displayForOnePlayer(int n){
    cout << "Muwahahaha, you will lose you puny human!\n";
    cout << "Lets get this party started.";
}

