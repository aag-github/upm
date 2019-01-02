/*
 * TicketOperationPrinter.h
 *
 *  Created on: 18 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_OPERATIONS_TICKETOPERATIONPRINTER_H_
#define SRC_OPERATIONS_TICKETOPERATIONPRINTER_H_

#include <TicketOperation.h>
#include "SellLine.h"
#include "RefundLine.h"
#include "CancelLine.h"
#include "RepetitionLine.h"
#include "Footer.h"
#include "Header.h"

namespace Supermarket {

class TicketOperationPrinter: public TicketOperation {
public:
    TicketOperationPrinter() : TicketOperation(){};
    virtual ~TicketOperationPrinter(){};


    void visit(SellLine* line) {
        std::cout << "PR: sell:   " << line->toString() << std::endl;
    }

    void visit(CancelLine* line) {
        std::cout << "PR: cancel: " << line->toString() << std::endl;
    }

    void visit(RepetitionLine* line) {
        std::cout << "PR: repeat: " << line->toString() << std::endl;
    }

    void visit(RefundLine* line) {
        std::cout << "PR: refund: " << line->toString() << std::endl;
    }

    void visit(Header* header) {
        std::cout << header->toString() << std::endl;
    }

    void visit(Footer* footer) {
        std::cout << "PR: Total: " << footer->getTotalPrice() << std::endl;
        std::cout << footer->toString() << std::endl;
    }
};

} /* namespace Supermarket */

#endif /* SRC_OPERATIONS_TICKETOPERATIONPRINTER_H_ */
