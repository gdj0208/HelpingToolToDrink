//
//  Dice.hpp
//  HelpingToolToDrink
//
//  Created by 구동준 on 2023/01/29.
//

#ifndef Dice_hpp
#define Dice_hpp

#include "MainHeader.h"

class Dice{
public:
    Dice();
    ~Dice();
    
    void run();
private:
    int minNum, maxNum;
    int range;
    int diceNum;
    int action, initialized;
    
    void printMenu();
    void getAction();
    void getDatas();
    void rollDice();
};

#endif /* Dice_hpp */
