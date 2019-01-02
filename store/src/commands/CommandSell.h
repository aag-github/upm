/*
 * SaleCommand.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COMMANDS_SALECOMMAND_H_
#define SRC_COMMANDS_SALECOMMAND_H_

#include "Command.h"

namespace Supermarket {

class CommandSell: public Command {
public:
    CommandSell(): Command("Sale") {};
    virtual ~CommandSell(){};

    bool execute(Ticket* ticket) override final {
        std::cout << "Running: " << getTitle() << std::endl;
        return false;
    }

};

} /* namespace Supermarket */

#endif /* SRC_COMMANDS_SALECOMMAND_H_ */
