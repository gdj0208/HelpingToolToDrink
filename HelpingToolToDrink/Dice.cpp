//
//  Dice.cpp
//  HelpingToolToDrink
//
//  Created by 구동준 on 2023/01/29.
//

#include "Dice.hpp"

Dice::Dice(){
    action = 1;
    initialized = 0;
}
Dice::~Dice(){}

// public
void Dice::run(){
    while(action){
        printMenu();
        getAction();
        
        switch (action) {
            case 0:             // 0 : 주사위 종료
                printf("프로그램을 종료합니다.\n");
                break;
            case 1:             // 1 : 주사위 정보 설정
                //printf("아직 미구현 상태입니다.\n");
                getDatas();
                break;
            case 2:             // 2. 주사위 굴리기
                //printf("아직 미구현 상태입니다.\n");
                if(initialized == 0) {
                    printf("주사위 초기화가 안되어 초기화 작없을 실시하겠습니다.\n");
                    getDatas();
                }
                rollDice();
                break;
            default:
                printf("잘못된 입력입니다.\n다시 입력해주십시오.\n");
                break;
        }
    }
}
void Dice::getDatas(){
    printf("주사위의 최소값 : ");
    cin >> minNum;
    printf("주사위의 최대값 : ");
    cin >> maxNum;
    
    range = maxNum - minNum + 1;
    
    initialized = 1;
}
void Dice::rollDice(){
    diceNum = rand()%range + 1;
    printf("주사위 값 : %d\n", diceNum);
}


// private
void Dice::printMenu(){
    printf("==============================\n");
    printf("메뉴 : \n");
    printf("0. 주사위 종료\n");
    printf("1. 주사위 정보 설정\n");
    printf("2. 주사위 굴리기\n");
    printf("\n");
    printf("입력 : ");
}
void Dice::getAction(){
    cin >> action;
    printf("==============================\n");
}
