//
//  Chess.cpp
//  
//
//  Created by Yohei Yamaguchi on 2013/03/31.
//
//

#include <iostream>
#include "Chess.h"

void Chess::initializeGame()
{
    std::cout << "Let's play Chess" << std::endl;
}

void Chess::makePlay(int i)
{
    std::cout << i << "th game starts" << std::endl;
}

bool Chess::endGame()
{
    static unsigned times = 0;
    return (times++ == 3) ? true : false;
}

void Chess::showResult()
{
    std::cout << "Chess ended" << std::endl;
}
