//
//  Game.h
//  
//
//  Created by Yohei Yamaguchi on 2013/03/31.
//
//

#ifndef ____Game__
#define ____Game__

/**
 * Game class as a base class
 */
class Game
{
public:
    /**
     * primitive methods
     * declare as a pure virutal function
     */
    virtual void initializeGame() = 0;
    virtual void makePlay(int i) = 0;
    virtual bool endGame() = 0;
    virtual void showResult() = 0;

    /**
     * template method
     */
    void play();
};

#endif /* defined(____Game__) */
