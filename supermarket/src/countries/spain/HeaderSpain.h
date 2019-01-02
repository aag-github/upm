/*
 * HeaderSpain.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COUNTRIES_SPAIN_HEADERSPAIN_H_
#define SRC_COUNTRIES_SPAIN_HEADERSPAIN_H_

namespace Supermarket {

class HeaderSpain: public Header {
public:
    HeaderSpain(){};
    virtual ~HeaderSpain(){};

    virtual std::string toString() {
        return "Spanish Header";
    }


};

} /* namespace Supermarket */

#endif /* SRC_COUNTRIES_SPAIN_HEADERSPAIN_H_ */
