/*
 * RefundLine.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_REFUNDLINE_H_
#define SRC_REFUNDLINE_H_

#include "Line.h"

namespace Supermarket {

class RefundLine: public Line {
public:
    RefundLine(std::string text, double amount) : Line(text, amount) {} ;
    virtual ~RefundLine() {};

    void accept(TicketOperation *ticketOperation) {
        ticketOperation->visit(this);
    }
};

} /* namespace Supermarket */

#endif /* SRC_REFUNDLINE_H_ */
