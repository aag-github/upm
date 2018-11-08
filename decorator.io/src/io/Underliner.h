/*
 * Underline.h
 *
 *  Created on: 26 Oct 2018
 *      Author: osboxes
 */

#ifndef SRC_IO_UNDERLINER_H_
#define SRC_IO_UNDERLINER_H_

#include "Decorator.h"

namespace IO {

class Underliner: public Decorator {
public:
    const std::string start_underline = "\033[4m";
    const std::string end_underline ="\033[0m";
    Underliner(IO* component):Decorator(component)
    {

    }
    virtual ~Underliner(){};

    virtual std::string readString(const std::string& title) const override final {
        std::cout << start_underline ;
        std::string ret = Decorator::readString(start_underline + title);
        std::cout << end_underline;
        return ret;
    }
    virtual void writeString(const std::string& s) const override final {
        std::cout << start_underline ;
        Decorator::writeString(s + end_underline);
    }
};

} /* namespace IO */

#endif /* SRC_IO_UNDERLINER_H_ */
