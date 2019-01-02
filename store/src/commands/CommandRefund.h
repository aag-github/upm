/*
 * RefundCommand.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COMMANDS_REFUNDCOMMAND_H_
#define SRC_COMMANDS_REFUNDCOMMAND_H_

#include "Command.h"

namespace Supermarket {

class CommandRefund: public Command {
public:
    CommandRefund(): Command("Refund") {};
    virtual ~CommandRefund(){};

    bool execute(Ticket* ticket) override final {
        std::cout << "Running: " << getTitle() << std::endl;
        return false;
    }

};

} /* namespace Supermarket */

#endif /* SRC_COMMANDS_REFUNDCOMMAND_H_ */
