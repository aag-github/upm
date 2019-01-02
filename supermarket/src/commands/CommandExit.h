/*
 * ExitCommand.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COMMANDS_EXITCOMMAND_H_
#define SRC_COMMANDS_EXITCOMMAND_H_

#include "Command.h"

namespace Supermarket {

class CommandExit : public Command {
public:
    CommandExit() : Command("Exit") {};
    virtual ~CommandExit(){};

    virtual void execute(Ticket* ticket) override final {
        ticket->close();
    }

};

} /* namespace Supermarket */

#endif /* SRC_COMMANDS_EXITCOMMAND_H_ */
