/*
 * CommandCancel.h
 *
 *  Created on: 19 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COMMANDS_COMMANDCANCEL_H_
#define SRC_COMMANDS_COMMANDCANCEL_H_

#include <Command.h>
#include "CancelLine.h"

namespace Supermarket {

class CommandCancel: public Command {
public:
    CommandCancel() : Command("Cancel") {};
    virtual ~CommandCancel() {};

    virtual void execute(Ticket* ticket) override final {
        for (size_t i = 0; i < ticket->getLineCount(); i++) {
            std::cout << (i + 1) << ".- " << ticket->getLine(i)->toString() << std::endl;
        }

        std::cout << "Line to cancel: " ;
        unsigned int lineNumber;
        std::cin >> lineNumber;

        Line *lineToCancel = ticket->getLine(lineNumber - 1);

        CancelLine * line = new CancelLine(lineToCancel->getText(), -lineToCancel->getPrice());
        ticket->addLine(line);
    }
};

} /* namespace Supermarket */

#endif /* SRC_COMMANDS_COMMANDCANCEL_H_ */
