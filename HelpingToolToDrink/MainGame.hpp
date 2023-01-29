//
//  MainGame.hpp
//  HelpingToolToDrink
//
//  Created by 구동준 on 2023/01/29.
//

#ifndef MainGame_hpp
#define MainGame_hpp

#include "MainHeader.h"
#include "Dice.hpp"
#include "Gamers.hpp"

class MainGame{
public:
    MainGame();
    ~MainGame();
    
    void run();
private:
    Gamers * gamers;
    Dice * dice;
    int action;
    int gamerNum;           // 게이머의 수
    int turnOfGamer;        // 게이머의 턴을 알려주는 변수
    
    void printActionMenu(); // 액션 메뉴 출력
    void getAction();       // 액션 번호 입력
    void initGamers();      // 게이머 정보 초기화
    void initDice();        // 주사위 정보 초기화
};

#endif /* MainGame_hpp */
