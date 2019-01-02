/*
 * Analyzer.h
 *
 *  Created on: 22 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_ANALYZERS_ANALYZER_H_
#define SRC_ANALYZERS_ANALYZER_H_

namespace Supermarket {

class Analyzer {
public:
    Analyzer(int value, Analyzer *next) {
        this->value = value;
        this->next = next;
    }
    virtual ~Analyzer();

    Gamble* analyze(Statistics statistics) {
        Gamble *gamble = analyzeImplementation(statistics);
        if (!gamble) {
            return next->analyze(statistics);
        } else {
            return gamble;
        }
    }
private:
    Gamble* analyzeImplementation(Statistics statistics) = 0;

    int value;

    Analyzer *next;
};
} /* namespace Supermarket */

#endif /* SRC_ANALYZERS_ANALYZER_H_ */
