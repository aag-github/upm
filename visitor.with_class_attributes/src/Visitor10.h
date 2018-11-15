#ifndef SRC_VISITOR10_H_
#define SRC_VISITOR10_H_

#include "Visitor.h"

class Visitor10 : public Visitor {
public:
    Visitor10(){};
    virtual ~Visitor10() {};

    virtual void visit(OriginalX *originalX);

    virtual void visit(OriginalY* originalY);

    virtual void visitA(int a) = 0;
    virtual void visitB(double b) = 0;
    virtual void visit(E1 *e1) = 0;
    virtual void visit(E2 *e2) = 0;
    virtual void visit(E3 *e3) = 0;
};


class Visitor11 : public Visitor10 {
public:
    Visitor11() {};
    virtual ~Visitor11() {};

    virtual void visit(OriginalX *originalX);

    virtual void visit(OriginalY* originalY);

    virtual void visitA(int a) {
        std::cout << "Visitor11... ";
        std::cout << a << std::endl;
    }
    virtual void visitB(double b) {
        std::cout << "Visitor11... ";
        std::cout << b << std::endl;
    }
    virtual void visit(E1 *e1) {
        std::cout << "Visitor11... ";
        e1->print();
    }
    virtual void visit(E2 *e2) {
        std::cout << "Visitor11... ";
        e2->print();
    }
    virtual void visit(E3 *e3) {
        std::cout << "Visitor11... ";
        e3->print();
    }

};

class Visitor12 : public Visitor10 {
public:
    Visitor12() {};
    virtual ~Visitor12() {};

    virtual void visit(OriginalX *originalX);

    virtual void visit(OriginalY* originalY);

    virtual void visitA(int a) {
        std::cout << "Visitor12... ";
        std::cout << a << std::endl;
    }
    virtual void visitB(double b) {
        std::cout << "Visitor12... ";
        std::cout << b << std::endl;
    }
    virtual void visit(E1 *e1) {
        std::cout << "Visitor12... ";
        e1->print();
    }
    virtual void visit(E2 *e2) {
        std::cout << "Visitor12... ";
        e2->print();
    }
    virtual void visit(E3 *e3) {
        std::cout << "Visitor12... ";
        e3->print();
    }
};


#endif /* SRC_VISITOR10_H_ */
