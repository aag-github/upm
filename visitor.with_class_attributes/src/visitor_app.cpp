#include <iostream>

#include "Original.h"
#include "Visitor10.h"
#include "Visitor20.h"

int main(void)
{
    OriginalX originalX(9, 10.5);
    OriginalY originalY(82);

    Visitor11 v11;
    Visitor12 v12;
    Visitor20 v20;

    originalX.accept(&v11);
    originalX.accept(&v12);
    originalX.accept(&v20);

    originalY.accept(&v11);
    originalY.accept(&v12);
    originalY.accept(&v20);

}


