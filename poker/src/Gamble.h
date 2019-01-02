/*
 * Gamble.h
 *
 *  Created on: 22 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_GAMBLE_H_
#define SRC_GAMBLE_H_

namespace Supermarket {

enum {
    EscaleraReal
};

class Gamble {
public:
    Gamble(int type, Gamble *next) {
        this->value = type;
        this->next = next;
    }
    virtual ~Gamble();

    Statistics getType();

    void analyze(std::vector<Card> cards);
protected:
    int value;

    Statistics statistics;

    Gamble *next;
};

} /* namespace Supermarket */

#endif /* SRC_GAMBLE_H_ */
