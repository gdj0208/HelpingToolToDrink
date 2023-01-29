//
//  MainGame.cpp
//  HelpingToolToDrink
//
//  Created by 구동준 on 2023/01/29.
//

#include "MainGame.hpp"

MainGame::MainGame(){
    action = 1;
}
MainGame::~MainGame(){}

// public
void MainGame::run(){
    while(action){
        printActionMenu();
        getAction();
        
        switch (action) {
            case 0:         // 0 : 게임 종료
                printf("프로그램을 종료합니다.\n");
                break;
            case 1:         // 1 : 유저 관련
                printf("아직 미구현 상태입니다.\n");
                break;
            case 2:         // 2 : 주사위 관련
                printf("아직 미구현 상태입니다.\n");
                break;
            default:
                printf("잘못된 입력입니다.\n 다시 입력해주십시오.\n");
                break;
        }
    }
}


// privaet
void MainGame::printActionMenu(){
    printf("아직 미구현 상태입니다.\n");
}
void MainGame::getAction(){
    printf("아직 미구현 상태입니다.\n");
}
