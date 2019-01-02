/*
 * MarketFactoryFrance.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COUNTRIES_FRANCE_MARKETFACTORYFRANCE_H_
#define SRC_COUNTRIES_FRANCE_MARKETFACTORYFRANCE_H_

#include "MarketFactory.h"
#include "france/MenuFrance.h"
#include "france/TicketBuilderFrance.h"

namespace Supermarket {

class MarketFactoryFrance: public MarketFactory {
public:
    MarketFactoryFrance() {
        this->menu = new MenuFrance();
        this->menu->build();
        this->ticketBuilder = new TicketBuilderFrance();
    };
    virtual ~MarketFactoryFrance(){};
};

} /* namespace Supermarket */

#endif /* SRC_COUNTRIES_FRANCE_MARKETFACTORYFRANCE_H_ */
