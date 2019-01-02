/*
 * TicketOperationPrinter.h
 *
 *  Created on: 18 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_OPERATIONS_TICKETOPERATIONDISPLAY_H_
#define SRC_OPERATIONS_TICKETOPERATIONDISPLAY_H_

#include <TicketOperation.h>
#include "SellLine.h"
#include "RefundLine.h"
#include "CancelLine.h"
#include "RepetitionLine.h"

namespace Supermarket {

class TicketOperationDisplay: public TicketOperation {
public:
    TicketOperationDisplay(): TicketOperation(){};
    virtual ~TicketOperationDisplay(){};


    void visit(SellLine* line) {
        std::cout << "DS: sell: " << line->toString() << std::endl;
    }

    void visit(CancelLine* line) {
        std::cout << "DS: cancel: " << line->toString() << std::endl;
    }

    void visit(RepetitionLine* line) {
        std::cout << "DS: repeat: " << line->toString() << std::endl;
    }

    void visit(RefundLine* line) {
        std::cout << "DS: refund: " << line->toString() << std::endl;
    }

    virtual void visit(Footer* footer) {
        std::cout << "DS: Total: " << footer->getTotalPrice() << std::endl;
;
    }

};

} /* namespace Supermarket */

#endif /* SRC_OPERATIONS_TICKETOPERATIONPRINTER_H_ */
