/*
 * Capitalizer.h
 *
 *  Created on: 26 Oct 2018
 *      Author: osboxes
 */

#ifndef SRC_IO_CAPITALIZER_H_
#define SRC_IO_CAPITALIZER_H_

#include <cctype>
#include <algorithm>
#include "Decorator.h"

namespace IO {

class Capitalizer: public Decorator {
private:
    std::string str_toupper(std::string s) const {
        std::transform(s.begin(), s.end(), s.begin(),
                       [](unsigned char c){ return std::toupper(c); } // correct
                      );
        return s;
    }
public:
    Capitalizer(IO *component):Decorator(component)
    {
    };
    virtual ~Capitalizer()
    {
    };

    virtual std::string readString(const std::string& title) const override final {
        return str_toupper(Decorator::readString(str_toupper(title)));
    }
    virtual void writeString(const std::string& s) const override final {
        Decorator::writeString(str_toupper(s));
    }

};

} /* namespace IO */

#endif /* SRC_IO_CAPITALIZER_H_ */
