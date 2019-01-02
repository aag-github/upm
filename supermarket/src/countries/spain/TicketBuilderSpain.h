/*
 * BuilderSpain.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COUNTRIES_SPAIN_TICKETBUILDERSPAIN_H_
#define SRC_COUNTRIES_SPAIN_TICKETBUILDERSPAIN_H_

#include "HeaderSpain.h"
#include "FooterSpain.h"
#include "TicketOperationPriceAggregator.h"
#include "TicketOperationPrinter.h"
#include "TicketOperationDisplay.h"
#include "TicketOperationComposite.h"

namespace Supermarket {

class TicketBuilderSpain: public TicketBuilder {
public:
    TicketBuilderSpain(){
        TicketOperationComposite *composite;
        composite = new TicketOperationComposite();
        composite->addComponent(new TicketOperationPriceAggregator());
        composite->addComponent(new TicketOperationDisplay());
        lineTicketOperation = composite;

        composite = new TicketOperationComposite();
        composite->addComponent(new TicketOperationPrinter());
        globalTicketOperation = composite;

    };
    virtual ~TicketBuilderSpain(){};

    Ticket* build(){
        Ticket *ticket = new Ticket(new HeaderSpain(), new FooterSpain());
        ticket->setLineTicketOperation(lineTicketOperation);
        ticket->setGlobalTicketOperation(globalTicketOperation);
        return ticket;
    };


};

} /* namespace Supermarket */

#endif /* SRC_COUNTRIES_SPAIN_TICKETBUILDERSPAIN_H_ */
