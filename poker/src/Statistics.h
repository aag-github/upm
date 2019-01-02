/*
 * Statistics.h
 *
 *  Created on: 22 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_STATISTICS_H_
#define SRC_STATISTICS_H_

namespace Supermarket {

class Statistics {
public:
    Statistics();
    virtual ~Statistics();
private:
    std::vector<int> values;
    std::vector<int> suites;

};

} /* namespace Supermarket */

#endif /* SRC_STATISTICS_H_ */
