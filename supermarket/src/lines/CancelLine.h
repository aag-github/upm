/*
 * CancelLine.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_CANCELLINE_H_
#define SRC_CANCELLINE_H_

#include "Line.h"

namespace Supermarket {

class CancelLine: public Line {
public:
    CancelLine(std::string text, double price) : Line(text, price) {};
    virtual ~CancelLine() {};

    void accept(TicketOperation *ticketOperation) {
        ticketOperation->visit(this);
    }
};

} /* namespace Supermarket */

#endif /* SRC_CANCELLINE_H_ */
