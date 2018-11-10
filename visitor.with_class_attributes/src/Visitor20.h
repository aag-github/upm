#ifndef SRC_VISITOR20_H_
#define SRC_VISITOR20_H_

#include "Visitor.h"

class Visitor20 : public Visitor {
public:
    Visitor20() {};
    virtual ~Visitor20() {};

    virtual void visit(OriginalX* originalX);

    virtual void visit(OriginalY *originalY);

};

#endif /* SRC_VISITOR20_H_ */
