//
//  main.cpp
//  
//
//  Created by Yohei Yamaguchi on 2013/03/31.
//
//

#include "Chess.h"
#include "Monopoly.h"

int main()
{
    Game *chess = new Chess();
    chess->play();

    Game *monopoly = new Monopoly();
    monopoly->play();

    return 0;
}
