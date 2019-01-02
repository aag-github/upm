/*
 * MarketFactory.cpp
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#include <stdlib.h>
#include <fstream>
#include "MarketFactory.h"
#include "france/MarketFactoryFrance.h"
#include "spain/MarketFactorySpain.h"


namespace Supermarket
{

MarketFactory* MarketFactory::instance { nullptr };

MarketFactory* MarketFactory::getInstance() {
    std::string country = "";
    if (instance == nullptr) {
        std::ifstream file("config.txt");
        file >> country;
        if (country == "spain") {
            instance = new MarketFactorySpain();
        } else if (country == "france") {
            instance = new MarketFactoryFrance();
        }
    }
    return instance;
}
}
