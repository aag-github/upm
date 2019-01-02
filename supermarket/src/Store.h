/*
 * Store.h
 *
 *  Created on: 18 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_STORE_H_
#define SRC_STORE_H_

#include <unordered_map>
#include <sstream>

namespace Supermarket {

class Product {
public:
    Product() :
        id(0),
        name(""),
        price(0.0)
    {

    };
    Product(unsigned int id, std::string name, double price) :
        id(id),
        name(name),
        price(price)
    {
    };

    std::string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }
private:
    unsigned int id;
    std::string name;
    double price;
};

class Store {
public:
    virtual ~Store(){};

    Product* findProduct(unsigned int item) {
        return &products[item];
    }

    static Store* getInstance() {
        if (!instance) {
            instance = new Store();
        }
        return instance;
    }

protected:
    std::unordered_map<int, Product> products;

    static Store *instance;
    Store(){
        for (unsigned int i = 1; i <= 100; i++) {
            std::stringstream ss;
            ss << i;
            products[i] = Product(i, "P" + ss.str(), 0.1 + i);

        }
    };

};

} /* namespace Supermarket */

#endif /* SRC_STORE_H_ */
