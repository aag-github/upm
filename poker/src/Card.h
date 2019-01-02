/*
 * Card.h
 *
 *  Created on: 22 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_CARD_H_
#define SRC_CARD_H_

namespace Supermarket {

class Card {
public:
    Card();
    virtual ~Card();

    int getSuit(){ return suit; }
    int getValue(){ return value; }
private:
    int suit;
    int value;
};

} /* namespace Supermarket */

#endif /* SRC_CARD_H_ */
