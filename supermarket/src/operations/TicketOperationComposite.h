/*
 * TicketVisitorComposite.h
 *
 *  Created on: 18 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_OPERATIONS_TICKETOPERATIONCOMPOSITE_H_
#define SRC_OPERATIONS_TICKETOPERATIONCOMPOSITE_H_

#include <vector>
#include "TicketOperation.h"

namespace Supermarket {

class TicketOperationComposite: public TicketOperation {
public:
    TicketOperationComposite(): TicketOperation() {};
    virtual ~TicketOperationComposite(){
        for (auto component : components) {
            delete component;
        }
    };

    void addComponent(TicketOperation* component) {
        components.push_back(component);
    }

    void visit(SellLine* line) {
        for (auto component : components) {
            component->visit(line);
        }
    }

    void visit(RefundLine* line) {
        for (auto component : components) {
            component->visit(line);
        }
    }

    void visit(CancelLine* line) {
        for (auto component : components) {
            component->visit(line);
        }
    }

    void visit(RepetitionLine* line) {
        for (auto component : components) {
            component->visit(line);
        }
    }
    void visit(Header* header) {
        for (auto component : components) {
            component->visit(header);
        }
    }

    void visit(Footer* footer) {
        for (auto component : components) {
            component->visit(footer);
        }
    }
private:
    std::vector<TicketOperation*> components;
};

} /* namespace Supermarket */

#endif /* SRC_OPERATIONS_TICKETOPERATIONCOMPOSITE_H_ */
