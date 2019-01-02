/*
 * MenuSpain.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_SPAIN_MENUSPAIN_H_
#define SRC_SPAIN_MENUSPAIN_H_

#include "CommandSell.h"
#include "CommandExit.h"
#include "CommandRefund.h"
#include "CommandRepeat.h"
#include "CommandCancel.h"

namespace Supermarket {

class MenuSpain: public Menu {
public:
    MenuSpain() : Menu() {
    };

    virtual void setCommands() {
        commands.push_back(new CommandSell());
        commands.push_back(new CommandCancel());
        commands.push_back(new CommandRepeat());
        commands.push_back(new CommandRefund());
    }

    virtual ~MenuSpain(){};
};

} /* namespace Supermarket */

#endif /* SRC_SPAIN_MENUSPAIN_H_ */
