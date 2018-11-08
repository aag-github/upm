/*
 * Decorator.h
 *
 *  Created on: 26 Oct 2018
 *      Author: osboxes
 */

#ifndef SRC_IO_DECORATOR_H_
#define SRC_IO_DECORATOR_H_

#include "IO.h"

namespace IO {

class Decorator: public IO {
public:
    virtual ~Decorator()
    {
    };

    virtual std::string readString(const std::string& title) const override {
        return component->readString(title);
    }

    virtual void writeString(const std::string& s) const override {
        component->writeString(s);
    }

protected:
    Decorator(IO *component):component(component)
    {};

private:
    IO *component;
};

} /* namespace IO */

#endif /* SRC_IO_DECORATOR_H_ */
