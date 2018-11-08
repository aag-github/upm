#include <iostream>
#include "io/Capitalizer.h"
#include "io/IO.h"
#include "io/Linux.h"
#include "io/Underliner.h"

int main(void)
{
    std::cout << "Start..." << std::endl;

    std::string s;
    IO::Linux lnx;
    IO::Capitalizer capitalizer(&lnx);
    IO::Underliner  underliner(&lnx);


    underliner.writeString("Underliner...\n");
    std::cout << "Result: " << underliner.readString("Dime?") << std::endl;


    capitalizer.writeString("Capitalizer...\n");
    std::cout << "Result: " << capitalizer.readString("Dime?") << std::endl;

    IO::Underliner undercap(&capitalizer);
    undercap.writeString("UnderlinerCapitalizer...\n");
    std::cout << "Result: " << undercap.readString("Dime?") << std::endl;

    return 0;
}


