/*
 * TicketVisitor.h
 *
 *  Created on: 18 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_OPERATIONS_TICKETOPERATION_H_
#define SRC_OPERATIONS_TICKETOPERATION_H_

namespace Supermarket {

class SellLine;
class RepetitionLine;
class RefundLine;
class CancelLine;
class Header;
class Footer;

class TicketOperation {
public:
    TicketOperation(){};
    virtual ~TicketOperation(){};

    virtual void visit(SellLine* line) {};

    virtual void visit(CancelLine* line) {};

    virtual void visit(RefundLine* line) {};

    virtual void visit(RepetitionLine* line) {};

    virtual void visit(Header* header) {};

    virtual void visit(Footer* footer) {};

};

} /* namespace Supermarket */

#endif /* SRC_OPERATIONS_TICKETOPERATION_H_ */
