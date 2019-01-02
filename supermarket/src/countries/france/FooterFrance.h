/*
 * FooterFrance.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COUNTRIES_FRANCE_FOOTERFRANCE_H_
#define SRC_COUNTRIES_FRANCE_FOOTERFRANCE_H_

namespace Supermarket {

class FooterFrance: public Footer {
public:
    FooterFrance(){};
    virtual ~FooterFrance(){};

    virtual std::string toString() {
        return "French Footer";
    }
};

} /* namespace Supermarket */

#endif /* SRC_COUNTRIES_FRANCE_FOOTERFRANCE_H_ */
