//
//  Monopoly.cpp
//  
//
//  Created by Yohei Yamaguchi on 2013/03/31.
//
//

#include <iostream>
#include "Monopoly.h"

void Monopoly::initializeGame()
{
    std::cout << "Let's play Monopoly" << std::endl;
}

void Monopoly::makePlay(int i)
{
    std::cout << i << "th game starts" << std::endl;
}

bool Monopoly::endGame()
{
    static unsigned times = 0;
    return (times++ == 3) ? true : false;
}

void Monopoly::showResult()
{
    std::cout << "Monopoly ended" << std::endl;
}
