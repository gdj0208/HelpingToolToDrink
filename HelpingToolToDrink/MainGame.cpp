//
//  MainGame.cpp
//  HelpingToolToDrink
//
//  Created by 구동준 on 2023/01/29.
//

#include "MainGame.hpp"

MainGame::MainGame(){
    dice = new Dice;
    action = 1;
    gamerNum = 0;
    turnOfGamer = 0;
}
MainGame::~MainGame(){}

// public
void MainGame::run(){
    initDice();
    initGamers();
    
    while(action){
        printActionMenu();
        getAction();
        
        switch (action) {
            case 0:         // 0 : 게임 종료
                printf("프로그램을 종료합니다.\n");
                break;
            case 1:         // 1 : 유저 관련
                //printf("아직 미구현 상태입니다.\n");
                gamers[turnOfGamer % gamerNum].run();
                turnOfGamer++;
                break;
            default:
                printf("잘못된 입력입니다.\n다시 입력해주십시오.\n");
                break;
        }
    }
}


// privaet
void MainGame::printActionMenu(){
    //printf("아직 미구현 상태입니다.\n");
    printf("==============================\n");
    printf("메뉴 : \n");
    printf("0. 종료\n");
    printf("1. 다음 턴\n");
    printf("\n");
    printf("입력 : ");
}
void MainGame::getAction(){
    //printf("아직 미구현 상태입니다.\n");
    cin >> action;
    printf("==============================\n");
}
void MainGame::initGamers(){
    printf("==============================\n");
    printf("유저들의 정보들을 초기화 합니다.\n");
    printf("유저는 총 몇명입니까?\n");
    printf("유저 수 : ");
    scanf("%d", &gamerNum);
    getchar();
    
    printf("\n%d명의 유저의 정보를 초기화합니다.\n", gamerNum);
    
    gamers = (Gamers*)calloc(gamerNum, sizeof(Gamers));
    if(gamers == NULL) {printf("유저 데이터 할당 실패!\n");}
    
    for(int i = 0; i < gamerNum; i++){
        gamers[i].initializeInfo(this->dice, i);
    }
}
void MainGame::initDice(){dice->getDatas();}
