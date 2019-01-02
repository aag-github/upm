/*
 * TicketOperationAggreagatePrice.h
 *
 *  Created on: 18 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_OPERATIONS_TICKETOPERATIONPRICEAGGREGATOR_H_
#define SRC_OPERATIONS_TICKETOPERATIONPRICEAGGREGATOR_H_

#include <TicketOperation.h>
#include "SellLine.h"
#include "RefundLine.h"
#include "CancelLine.h"
#include "RepetitionLine.h"
#include "Footer.h"
#include "Header.h"

namespace Supermarket {

class TicketOperationPriceAggregator: public TicketOperation {
public:
    TicketOperationPriceAggregator() :
        TicketOperation(),
        currentPrice(0)
    {};
    virtual ~TicketOperationPriceAggregator() {};

    void visit(SellLine* line) {
        currentPrice += line->getPrice();
    }

    void visit(CancelLine* line) {
        currentPrice += line->getPrice();
    }

    void visit(RepetitionLine* line) {
        currentPrice += line->getPrice();
    }

    void visit(RefundLine* line) {
        currentPrice += line->getPrice();
    }

    void visit(Footer* footer) {
        footer->setPrice(currentPrice);
    }
private:
    double currentPrice;
};

} /* namespace Supermarket */

#endif /* SRC_OPERATIONS_TICKETOPERATIONPRICEAGGREGATOR_H_ */
