/*
 * Store.h
 *
 *  Created on: 16 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_STORE_H_
#define SRC_STORE_H_

#include <unordered_map>

namespace Store {

class Store {
public:
    Store() {};

    virtual ~Store() {};

    virtual std::unordered_map<unsigned int, unsigned int> add(unsigned int key, unsigned int increment) = 0;

    virtual std::unordered_map<unsigned int, unsigned int> remove(unsigned int key, unsigned int increment) = 0;

    virtual void set(std::unordered_map<unsigned int, unsigned int> data) = 0;

protected:
    std::unordered_map<unsigned int, unsigned int> data;
};

class LocalStore : public Store {
public:
    LocalStore() {
        set({{1, 100}, {2, 200}, {3, 50}});
    };

    virtual ~LocalStore() {

    };

    std::unordered_map<unsigned int, unsigned int> add(unsigned int key, unsigned int increment){
        data[key] += increment;
        return data;
    }

    std::unordered_map<unsigned int, unsigned int> remove(unsigned int key, unsigned int increment){
        if (data[key] < increment) {
            data[key] -= increment;
        }
        return data;
    }

    void set(std::unordered_map<unsigned int, unsigned int> data) {
        this->data = data;
    }
};

class StoreProxy : public Store {
public:
    StoreProxy() {
    };

    virtual ~StoreProxy() {

    };
private:
    LocalStore store;
};

class State {
public:
    State();
    virtual ~State();

    virtual std::unordered_map<unsigned int, unsigned int> add(unsigned int key, unsigned int increment) = 0;

    virtual std::unordered_map<unsigned int, unsigned int> remove(unsigned int key, unsigned int increment) = 0;

    virtual void set(std::unordered_map<unsigned int, unsigned int> data) = 0;
};

} /* namespace Store */

#endif /* SRC_STORE_H_ */
