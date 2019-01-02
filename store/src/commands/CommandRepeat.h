/*
 * RepetitionCommand.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COMMANDS_REPETITIONCOMMAND_H_
#define SRC_COMMANDS_REPETITIONCOMMAND_H_

#include "Command.h"

namespace Supermarket {

class CommandRepeat: public Command {
public:
    CommandRepeat(): Command("Repeat") {};
    virtual ~CommandRepeat(){};

    bool execute(Ticket* ticket) override final {
        std::cout << "Running: " << getTitle() << std::endl;
        return false;
    }

};

} /* namespace Supermarket */

#endif /* SRC_COMMANDS_REPETITIONCOMMAND_H_ */
