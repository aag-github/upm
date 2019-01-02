/*
 * FooterSpain.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COUNTRIES_SPAIN_FOOTERSPAIN_H_
#define SRC_COUNTRIES_SPAIN_FOOTERSPAIN_H_

namespace Supermarket {

class FooterSpain: public Footer {
public:
    FooterSpain(){};
    virtual ~FooterSpain(){};

    virtual std::string toString() {
        return "Spanish Footer";
    }

};

} /* namespace Supermarket */

#endif /* SRC_COUNTRIES_SPAIN_FOOTERSPAIN_H_ */
