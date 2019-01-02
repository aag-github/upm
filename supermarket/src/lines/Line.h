/*
 * Line.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_LINE_H_
#define SRC_LINE_H_

#include <sstream>
#include <iomanip>
#include "TicketOperation.h"

namespace Supermarket {

class Line {
public:
    Line(std::string text, double price) :
        text(text),
        price(price)
    {};
    virtual ~Line(){};

    virtual std::string toString() {
        std::stringstream ss;
        ss << std::left;
        ss << std::setw(24) << text.substr(0, 20) << " ";
        ss << std::setw(6) << price << " ";
        ss << std::setw(6) << getPrice() << " ";
        return ss.str();
    }

    virtual double getPrice() {
        return price;
    }

    virtual std::string getText() {
        return text;
    }

    virtual void accept(TicketOperation *ticketOperation) = 0;

protected:
    std::string text;
    double price;
};

} /* namespace Supermarket */

#endif /* SRC_LINE_H_ */
