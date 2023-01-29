//
//  main.cpp
//  HelpingToolToDrink
//
//  Created by 구동준 on 2023/01/29.
//

#include "MainHeader.h"
#include "MainGame.hpp"

int main() {
    
    MainGame * game = new MainGame;
    if(game == NULL) {printf("allocation failed!\n");}
    
    game->run();
    
    delete game;
    
}
