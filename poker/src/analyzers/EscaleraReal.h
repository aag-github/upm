/*
 * EscaleraReal.h
 *
 *  Created on: 22 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_ANALYZERS_ESCALERAREAL_H_
#define SRC_ANALYZERS_ESCALERAREAL_H_

#include "Analyzer.h"

namespace Supermarket {

class EscaleraReal: public Analyzer {
public:
    EscaleraReal();
    virtual ~EscaleraReal();

private:
    Gamble* analyzeImplementation(Statistics statistics){
        if (statistics.getMinValue() == 9 &&
           statistics.getMaxValue() == 12 &&
           statistics.getMaxSuit() == 5)
        {
            return Gamble(value, statistics);
        } else {
            return nullptr;
        }
    }

};

} /* namespace Supermarket */

#endif /* SRC_ANALYZERS_ESCALERAREAL_H_ */
