/*
 * Turn.h
 *
 *  Created on: 26 Oct 2018
 *      Author: osboxes
 */

#ifndef SRC_TURN_H_
#define SRC_TURN_H_

#include "Visitor.h"

class Turn {
public:
    Turn():turn(0){};
    virtual ~Turn(){};

    int get() const { return turn; }

    void set(int t) { turn = t; }

    void accept(Visitor* visitor){
        visitor->visit(this);
    }
private:
    int turn;
};



#endif /* SRC_TURN_H_ */
