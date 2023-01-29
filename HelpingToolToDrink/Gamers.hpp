//
//  Gamers.hpp
//  HelpingToolToDrink
//
//  Created by 구동준 on 2023/01/29.
//

#ifndef Gamers_hpp
#define Gamers_hpp

#include "MainHeader.h"
#include "Dice.hpp"

/*
 구현 목록
 1. 게이머의 턴이 왔을 때 무엇을 할 지 정할 것
 2. 할 목록 (주사위 굴리기, 정보 수정하기)
 */

class Gamers{
public:
    Gamers();
    ~Gamers();
    
    char * name;                    // 게이머 이름
    int gamerNum;                   // 게이머 번호
    
    void run();
    void initializeInfo(Dice * dice, int n);     // 게이머 정보 초기화
    void printData();               // 정보 출력
private:
    Dice * dice;
    int action;
    int sizeOfName;
    
    void printMenu();               // 메뉴 출력
    void getAction();               // 메뉴 입력
    void getNum(int n);             // 게이머 번호 입력
    void getName();                 // 게이머 이름 입력
};

#endif /* Gamers_hpp */
