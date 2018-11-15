#ifndef SRC_VISITOR20_H_
#define SRC_VISITOR20_H_

#include "Visitor.h"

class Visitor20 : public Visitor {
public:
    Visitor20() {};
    virtual ~Visitor20() {};

    virtual void visit(OriginalX* originalX);

    virtual void visit(OriginalY *originalY);

    virtual void visit(E1 *e1) {
        std::cout << "Visitor20... ";
        e1->print();
    }
    virtual void visit(E2 *e2) {
        std::cout << "Visitor20... ";
        e2->print();
    }
    virtual void visit(E3 *e3) {
        std::cout << "Visitor20... ";
        e3->print();
    }
};

#endif /* SRC_VISITOR20_H_ */
