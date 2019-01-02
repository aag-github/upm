/*
 * Command.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COMMANDS_COMMAND_H_
#define SRC_COMMANDS_COMMAND_H_

#include <string>
#include "Ticket.h"

namespace Supermarket {

class Command {
public:
    Command(std::string title) : title(title){};
    virtual ~Command(){};

    virtual void execute(Ticket* ticket) = 0;

    std::string getTitle() {
        return title;
    }
private:
    std::string title;
};

} /* namespace Supermarket */

#endif /* SRC_COMMANDS_COMMAND_H_ */
