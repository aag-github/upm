/*
 * Header.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_HEADER_H_
#define SRC_HEADER_H_

#include <string>

namespace Supermarket {

class Header {
public:
    Header(){};
    virtual ~Header(){};

    virtual std::string toString() = 0;

    void accept(TicketOperation *ticketOperation) {
        ticketOperation->visit(this);
    }
};

} /* namespace Supermarket */

#endif /* SRC_HEADER_H_ */
