/*
 * Visitor.h
 *
 *  Created on: 26 Oct 2018
 *      Author: osboxes
 */

#ifndef SRC_VISITOR_H_
#define SRC_VISITOR_H_

class OriginalX;
class OriginalY;

class Visitor {
public:
    Visitor(){}
    virtual ~Visitor(){}

    virtual void visit(OriginalX*) = 0;
    virtual void visit(OriginalY*) = 0;
};
#endif /* SRC_VISITOR_H_ */

