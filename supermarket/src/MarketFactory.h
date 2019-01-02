/*
 * MarketFactory.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_MARKETFACTORY_H_
#define SRC_MARKETFACTORY_H_

#include "Ticket.h"
#include "TicketBuilder.h"
#include "Menu.h"

namespace Supermarket {

class MarketFactory {
public:
    virtual ~MarketFactory(){
        delete ticketBuilder;
        delete menu;
    };

    Ticket* getTicket() {
        return ticketBuilder->build();
    }
    Menu* getMenu() {
        return menu;
    }

    static MarketFactory* getInstance();


protected:
    MarketFactory(){
        menu = nullptr;
        ticketBuilder = nullptr;
    };

    TicketBuilder* ticketBuilder;

    Menu* menu;

private:
    static MarketFactory* instance;
};


} /* namespace Supermarket */

#endif /* SRC_MARKETFACTORY_H_ */
