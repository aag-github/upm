/*
 * MecuFrance.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COUNTRIES_FRANCE_MENUFRANCE_H_
#define SRC_COUNTRIES_FRANCE_MENUFRANCE_H_

#include "CommandSell.h"
#include "CommandExit.h"
#include "CommandCancel.h"

namespace Supermarket {

class MenuFrance: public Menu {
public:
    MenuFrance() : Menu() {
    };

    virtual void setCommands() {
        commands.push_back(new CommandSell());
        commands.push_back(new CommandCancel());
    }

    virtual ~MenuFrance(){};
};

} /* namespace Supermarket */

#endif /* SRC_COUNTRIES_FRANCE_MENUFRANCE_H_ */
