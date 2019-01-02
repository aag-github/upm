/*
 * RepetitionCommand.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COMMANDS_REPETITIONCOMMAND_H_
#define SRC_COMMANDS_REPETITIONCOMMAND_H_

#include "Command.h"
#include "RepetitionLine.h"

namespace Supermarket {

class CommandRepeat: public Command {
public:
    CommandRepeat(): Command("Repeat") {};
    virtual ~CommandRepeat(){};

    virtual void execute(Ticket* ticket) override final {
        for (size_t i = 0; i < ticket->getLineCount(); i++) {
            std::cout << (i + 1) << ".- " << ticket->getLine(i)->toString() << std::endl;
        }

        std::cout << "Line to repeat: " ;
        unsigned int lineNumber;
        std::cin >> lineNumber;

        std::cout << "Times to repeat: " ;
        unsigned int count;
        std::cin >> count;

        Line *lineToCancel = ticket->getLine(lineNumber - 1);

        RepetitionLine * line = new RepetitionLine(lineToCancel->getText(), lineToCancel->getPrice(), count);
        ticket->addLine(line);
    }

};

} /* namespace Supermarket */

#endif /* SRC_COMMANDS_REPETITIONCOMMAND_H_ */
