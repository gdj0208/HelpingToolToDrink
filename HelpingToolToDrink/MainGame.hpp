//
//  MainGame.hpp
//  HelpingToolToDrink
//
//  Created by 구동준 on 2023/01/29.
//

#ifndef MainGame_hpp
#define MainGame_hpp

#include "MainHeader.h"

class MainGame{
public:
    MainGame();
    ~MainGame();
    
    void run();
private:
    int action;
    
    void printActionMenu();
    void getAction();
};

#endif /* MainGame_hpp */
