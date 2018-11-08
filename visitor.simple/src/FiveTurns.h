/*
 * FiveTurns.h
 *
 *  Created on: 26 Oct 2018
 *      Author: osboxes
 */

#ifndef SRC_FIVETURNS_H_
#define SRC_FIVETURNS_H_

#include "Visitor.h"
#include "Turn.h"

class FiveTurns : public Visitor {
public:
    FiveTurns(){};
    virtual ~FiveTurns(){};

    virtual void visit(Turn* turn) override {
        turn->set((turn->get() + 1) % 5);
    }
};

#endif /* SRC_FIVETURNS_H_ */
