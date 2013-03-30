//
//  Monopoly.h
//  
//
//  Created by Yohei Yamaguchi on 2013/03/31.
//
//

#ifndef ____Monopoly__
#define ____Monopoly__

#include "Game.h"

class Monopoly : public Game
{
    virtual void initializeGame();
    virtual void makePlay(int i);
    virtual bool endGame();
    virtual void showResult();
};

#endif /* defined(____Monopoly__) */
