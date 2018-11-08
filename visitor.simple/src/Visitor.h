/*
 * Visitor.h
 *
 *  Created on: 26 Oct 2018
 *      Author: osboxes
 */

#ifndef SRC_VISITOR_H_
#define SRC_VISITOR_H_

class Turn;

class Visitor {
public:
    Visitor(){}
    virtual ~Visitor(){}

    virtual void visit(Turn* turn) = 0;
};
#endif /* SRC_VISITOR_H_ */

