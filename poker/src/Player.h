/*
 * Player.h
 *
 *  Created on: 22 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_PLAYER_H_
#define SRC_PLAYER_H_

namespace Supermarket {

class Player {
public:
    Player();
    virtual ~Player();

private:
    Gamble gamble;
};

} /* namespace Supermarket */

#endif /* SRC_PLAYER_H_ */
