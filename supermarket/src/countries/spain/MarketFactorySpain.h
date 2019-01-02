/*
 * MarketFactorySpain.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_SPAIN_MARKETFACTORYSPAIN_H_
#define SRC_SPAIN_MARKETFACTORYSPAIN_H_

#include <spain/MenuSpain.h>
#include <spain/TicketBuilderSpain.h>
#include "MarketFactory.h"

namespace Supermarket {

class MarketFactorySpain: public MarketFactory {
public:
    MarketFactorySpain() {
        this->menu = new MenuSpain();
        this->menu->build();
        this->ticketBuilder = new TicketBuilderSpain();
    };
    virtual ~MarketFactorySpain(){};

};

} /* namespace Supermarket */

#endif /* SRC_SPAIN_MARKETFACTORYSPAIN_H_ */
