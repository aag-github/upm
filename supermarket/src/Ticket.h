/*
 * Ticket.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_TICKET_H_
#define SRC_TICKET_H_

#include <vector>
#include <iostream>
#include "TicketOperation.h"
#include "Header.h"
#include "Footer.h"
#include "Line.h"

namespace Supermarket {

class Ticket {
public:
    Ticket(Header *header, Footer *footer) :
        header(header),
        footer(footer),
        lineTicketOperation(nullptr),
        globalTicketOperation(nullptr)
    {};
    virtual ~Ticket(){
        delete header;
        delete footer;
        for(auto line : lines) {
            delete line;
        }
    };

    void addLine(Line* line) {
        lines.push_back(line);
        header->accept(lineTicketOperation);
        line->accept(lineTicketOperation);
        footer->accept(lineTicketOperation);
    }

    size_t getLineCount() {
        return lines.size();
    }

    Line* getLine(size_t index) {
        return lines[index];
    }

    void setLineTicketOperation(TicketOperation *ticketOperation){
        this->lineTicketOperation = ticketOperation;
    }

    void setGlobalTicketOperation(TicketOperation *ticketOperation){
        this->globalTicketOperation = ticketOperation;
    }

    void close() {
        header->accept(globalTicketOperation);
        for(auto line : lines) {
            line->accept(globalTicketOperation);
        }
        footer->accept(globalTicketOperation);
    }

private:
    Header *header;
    std::vector<Line*> lines;
    Footer *footer;

    TicketOperation *lineTicketOperation;

    TicketOperation *globalTicketOperation;
};

} /* namespace Supermarket */

#endif /* SRC_TICKET_H_ */
