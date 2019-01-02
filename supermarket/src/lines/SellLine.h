/*
 * SaleLine.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_SALELINE_H_
#define SRC_SALELINE_H_

#include "Line.h"

namespace Supermarket {

class SellLine: public Line {
public:
    SellLine(std::string text, double price) : Line(text, price) {
    }
    virtual ~SellLine(){};

    virtual void accept(TicketOperation *ticketOperation) {
        ticketOperation->visit(this);
    }
};

} /* namespace Supermarket */

#endif /* SRC_SALELINE_H_ */
