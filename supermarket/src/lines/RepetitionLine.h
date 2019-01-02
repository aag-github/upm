/*
 * RepetitionLine.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_REPETITIONLINE_H_
#define SRC_REPETITIONLINE_H_

#include "Line.h"

namespace Supermarket {

class RepetitionLine: public Line {
public:
    RepetitionLine(std::string text, double price, unsigned int count) :
        Line(text, price),
        count(count)
    {

    }
    virtual ~RepetitionLine(){};

    std::string toString() {
        std::stringstream ss;
        ss << std::left;
        ss << std::setw(20) << text.substr(0, 20) << " ";
        ss << std::setw(3) << count << " ";
        ss << std::setw(6) << price << " ";
        ss << std::setw(6) << getPrice() << " ";
        return ss.str();
    }

    virtual double getPrice() {
        return count * price;
    }

    void accept(TicketOperation *ticketOperation) {
        ticketOperation->visit(this);
    }

private:
    unsigned int count;
};

} /* namespace Supermarket */

#endif /* SRC_REPETITIONLINE_H_ */
