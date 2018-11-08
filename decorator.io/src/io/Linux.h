/*
 * Linux.h
 *
 *  Created on: 26 Oct 2018
 *      Author: osboxes
 */

#ifndef SRC_IO_LINUX_H_
#define SRC_IO_LINUX_H_

#include "IO.h"

namespace IO {

class Linux: public IO {
public:
    Linux(){};
    virtual ~Linux(){};

    virtual std::string readString(const std::string& title) const override final {
        std::cout << title;
        std::string s;
        std::cin >> s;
        return s;
    }
    virtual void writeString(const std::string& s) const override final {
        std::cout << s;
    }

};

} /* namespace IO */

#endif /* SRC_IO_LINUX_H_ */
