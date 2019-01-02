/*
 * RefundCommand.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COMMANDS_REFUNDCOMMAND_H_
#define SRC_COMMANDS_REFUNDCOMMAND_H_

#include "Command.h"
#include "RefundLine.h"

namespace Supermarket {

class CommandRefund: public Command {
public:
    CommandRefund(): Command("Refund") {};
    virtual ~CommandRefund(){};

    virtual void execute(Ticket* ticket) override final {
        std::cout << "Label: " ;
        std::string concept;
        std::cin >> concept;

        std::cout << "Amount: " ;
        double refund;
        std::cin >> refund;

        RefundLine * line = new RefundLine(concept, -refund);
        ticket->addLine(line);
    }

};

} /* namespace Supermarket */

#endif /* SRC_COMMANDS_REFUNDCOMMAND_H_ */
