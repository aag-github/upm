#ifndef SRC_VISITOR10_H_
#define SRC_VISITOR10_H_

#include "Visitor.h"

class Visitor10 : public Visitor {
public:
    Visitor10(){};
    virtual ~Visitor10() {};

    virtual void visit(OriginalX *originalX);

    virtual void visit(OriginalY* originalY);

};


class Visitor11 : public Visitor10 {
public:
    Visitor11() {};
    virtual ~Visitor11() {};

    virtual void visit(OriginalX *originalX);

    virtual void visit(OriginalY* originalY);
};

class Visitor12 : public Visitor10 {
public:
    Visitor12() {};
    virtual ~Visitor12() {};

    virtual void visit(OriginalX *originalX);

    virtual void visit(OriginalY* originalY);
};


#endif /* SRC_VISITOR10_H_ */
