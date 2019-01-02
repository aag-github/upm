#include <iostream>
#include "io/Capitalizer.h"
#include "io/IO.h"
#include "io/Linux.h"
#include "io/Underliner.h"

int main(void)
{
    Player player[2];

    GambleAnalyzer gambleAnalyzer;

    Gamble gamble[2];

    gamble[0] = gambleAnalyzer.analyze(player[0]);
    gamble[1] = gambleAnalyzer.analyze(player[1]);

    if (gamble[0] > gamble[1]) {
        // player 0 wins
    } else {
        // player 1 wins
    }

    return 0;
}


