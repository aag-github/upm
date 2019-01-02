#include <iostream>

#include "MarketFactory.h"
#include "Line.h"
int main(void)
{
    Supermarket::MarketFactory* factory = Supermarket::MarketFactory::getInstance();

    Supermarket::Menu* menu = factory->getMenu();

    Supermarket::Ticket *ticket = factory->getTicket();

    while (!menu->mustClose()) {
        menu->execute(ticket);
    }


}


