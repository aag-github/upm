#include <iostream>
#include "Turn.h"
#include "FiveTurns.h"

int main(void)
{
    Turn turn;
    FiveTurnVisitor five;

    for(int i = 0; i < 6; i++) {
        std::cout << turn.get() << std::endl;
        turn.accept(&five);
    }

}


