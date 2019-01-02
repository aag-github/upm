/*
 * BuilderFrance.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COUNTRIES_FRANCE_TICKETBUILDERFRANCE_H_
#define SRC_COUNTRIES_FRANCE_TICKETBUILDERFRANCE_H_

#include "HeaderFrance.h"
#include "FooterFrance.h"
#include "TicketOperationPriceAggregator.h"
#include "TicketOperationPrinter.h"
#include "TicketOperationComposite.h"

namespace Supermarket {

class TicketBuilderFrance: public TicketBuilder {
public:
    TicketBuilderFrance() : TicketBuilder()
    {
        lineTicketOperation = new TicketOperationPriceAggregator();

        TicketOperationComposite *composite;
        composite = new TicketOperationComposite();
        composite->addComponent(new TicketOperationPrinter());
        globalTicketOperation = composite;
    };
    virtual ~TicketBuilderFrance(){};

    Ticket* build(){
        Ticket *ticket = new Ticket(new HeaderFrance(), new FooterFrance());
        ticket->setLineTicketOperation(lineTicketOperation);
        ticket->setGlobalTicketOperation(globalTicketOperation);
        return ticket;
    };
};

} /* namespace Supermarket */

#endif /* SRC_COUNTRIES_FRANCE_TICKETBUILDERFRANCE_H_ */
