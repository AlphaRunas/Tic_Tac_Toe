//
// Created by Roland Fisher on 7/26/24.
//

#ifndef TIC_TAC_TOE_DISPLAY_H
#define TIC_TAC_TOE_DISPLAY_H

// This class will display the board to the console

#include "HumanPlayer.h"
#include "computerPlayer.h"
#include <vector>

using namespace std;

class Display : public HumanPlayer, public computerPlayer {

public:
    Display();

    explicit Display(const vector<int> &board);

    void displayForTwoPlayers(int y);
    void displayForOnePlayer(int n);

};


#endif //TIC_TAC_TOE_DISPLAY_H
