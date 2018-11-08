/*
 * IO.h
 *
 *  Created on: 26 Oct 2018
 *      Author: osboxes
 */

#ifndef SRC_IO_IO_H_
#define SRC_IO_IO_H_

#include <string>

namespace IO {

class IO {
public:
    IO(){};
    virtual ~IO(){};

    virtual std::string readString(const std::string& title) const = 0;

    virtual void writeString(const std::string& s) const = 0;

};

} /* namespace IO */

#endif /* SRC_IO_IO_H_ */
