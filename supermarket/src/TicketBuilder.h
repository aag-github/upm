/*
 * TicketBuilder.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_TICKETBUILDER_H_
#define SRC_TICKETBUILDER_H_

namespace Supermarket {

class TicketBuilder {
public:
    TicketBuilder() :
        lineTicketOperation(nullptr),
        globalTicketOperation(nullptr)
    {};
    virtual ~TicketBuilder()
    {};

    virtual Ticket* build() = 0;
protected:
    TicketOperation* lineTicketOperation;

    TicketOperation* globalTicketOperation;
};

} /* namespace Supermarket */

#endif /* SRC_TICKETBUILDER_H_ */
