/*
 * Footer.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_FOOTER_H_
#define SRC_FOOTER_H_

#include <string>
#include "TicketOperation.h"

namespace Supermarket {

class Footer {
public:
    Footer() :
        totalPrice(0)
    {};
    virtual ~Footer(){};

    void accept(TicketOperation *ticketOperation) {
        ticketOperation->visit(this);
    }

    virtual std::string toString() = 0;

    void setPrice(double price) {
        totalPrice = price;
    }

    double getTotalPrice() {
        return totalPrice;
    }
private:
    double totalPrice;
};

} /* namespace Supermarket */

#endif /* SRC_FOOTER_H_ */
