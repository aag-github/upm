/*
 * HeaderFrance.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COUNTRIES_FRANCE_HEADERFRANCE_H_
#define SRC_COUNTRIES_FRANCE_HEADERFRANCE_H_

namespace Supermarket {

class HeaderFrance: public Header {
public:
    HeaderFrance(){};
    virtual ~HeaderFrance(){};

    virtual std::string toString() {
        return "French Header";
    }

};

} /* namespace Supermarket */

#endif /* SRC_COUNTRIES_FRANCE_HEADERFRANCE_H_ */
