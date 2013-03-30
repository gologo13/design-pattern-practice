//
//  Game.cpp
//  
//
//  Created by Yohei Yamaguchi on 2013/03/31.
//
//

#include "Game.h"

void Game::play()
{
    initializeGame();
    for (int i = 0; !endGame(); ++i) {
        makePlay(i);
    }
    showResult();
}
