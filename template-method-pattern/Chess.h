//
//  Chess.h
//  
//
//  Created by Yohei Yamaguchi on 2013/03/31.
//
//

#ifndef ____Chess__
#define ____Chess__

#include "Game.h"

class Chess : public Game
{
public:
    virtual void initializeGame();
    virtual void makePlay(int i);
    virtual bool endGame();
    virtual void showResult();
};

#endif /* defined(____Chess__) */
