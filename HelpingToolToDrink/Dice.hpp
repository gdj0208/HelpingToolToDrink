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
    void getDatas();
    void rollDice();
private:
    int minNum, maxNum;         // 최대, 최소 숫자
    int range;                  // 주사위 범위
    int diceNum;                // 주사위 출력 값
    int action, initialized;    // 액션 번호와 주사위 초기화 여부
    
    void printMenu();
    void getAction();
};

#endif /* Dice_hpp */
