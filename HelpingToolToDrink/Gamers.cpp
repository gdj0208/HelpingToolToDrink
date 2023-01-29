//
//  Gamers.cpp
//  HelpingToolToDrink
//
//  Created by 구동준 on 2023/01/29.
//

#include "Gamers.hpp"

Gamers::Gamers(){
    action = 1;
}
Gamers::~Gamers(){}



// public
void Gamers::run(){
    printf("%s의 차례입니다.\n", this->name);
    printData();
}
void Gamers::initializeInfo(Dice * dice, int n){
    this->dice = dice;
    getNum(n);
    getName();
}
void Gamers::printData(){
    printf("이름 : %s\n", this->name);
    printf("번호 : %d\n", this->gamerNum);
}




// private
void Gamers::printMenu(){
    //printf("아직 미구현 상태입니다.\n");
    
    printf("==============================\n");
    printf("메뉴 : \n");
    printf("0. 유저 관련 정보 종료\n");
    printf("1. 유저 정보 추가\n");
    printf("2. 유저 정보 수정\n");
    printf("3. 유저 정보 출력\n");
    printf("\n");
    printf("입력 : ");
}
void Gamers::getAction(){
    printf("아직 미구현 상태입니다.\n");
}
void Gamers::getNum(int n){gamerNum = n + 1;}
void Gamers::getName(){
    //printf("아직 미구현 상태입니다.\n");
    char input[100];
    
    printf("유저 %d : ", gamerNum);
    gets(input);
    sizeOfName = strlen(input);
    
    this->name = (char*)calloc(sizeOfName, sizeof(input));
    if(this->name == NULL) {printf("이름 입력 실패!\n");}
    
    strcpy(this->name, input);
}
