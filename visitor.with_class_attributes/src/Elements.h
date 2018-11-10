/*
 * Elements.h
 *
 *  Created on: 8 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_ELEMENTS_H_
#define SRC_ELEMENTS_H_

#include <iostream>

class E1 {
public:
    E1(){};
    virtual ~E1(){};

    virtual void print(){ std::cout << "    I am E1" << std::endl; }
};

class E2 {
public:
    E2(){};
    virtual ~E2(){};

    virtual void print() = 0;
};

class E21 : public E2 {
public:
    E21(){};
    virtual ~E21(){};

    virtual void print() { std::cout << "    I am E2.1" << std::endl; }

};

class E22 : public E2 {
public:
    E22(){};
    virtual ~E22(){};

    virtual void print() { std::cout << "    I am E2.2" << std::endl; }

};

class E3 {
public:
    E3(){};
    virtual ~E3(){};

    virtual void print(){ std::cout << "    I am E3" << std::endl; }
};

#endif /* SRC_ELEMENTS_H_ */
