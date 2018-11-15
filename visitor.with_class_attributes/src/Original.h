/*
 * Original.h
 *
 *  Created on: 8 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_ORIGINAL_H_
#define SRC_ORIGINAL_H_

#include "Elements.h"
#include "Visitor.h"

class Original {
public:
    Original(int a) : a(a)
    {
        e1 = new E1();
        e2 = nullptr;
    };
    virtual ~Original()
    {
        delete e1;
    };

    int getA() { return a; };
    E1* getE1() { return e1; };
    E2* getE2() { return e2; };

protected:

    E2 *e2;

private:

    int a;

    E1 *e1;

};

class OriginalX : public Original {
public:
    OriginalX(int a, double d):Original(a), b(d)
    {
        e2 = new E21();
    };
    virtual ~OriginalX()
    {
        delete e2;
    } ;

    void accept(Visitor *visitor)
    {
        visitor->visit(this);
        std::cout << "..........." << std::endl;
    }

    double getB() { return b; };
private:
    double b ;
};

class OriginalY : public Original {
public:
    OriginalY(int a) : Original(a)
    {
        e2 = new E22();
        e3 = new E3();
    };
    virtual ~OriginalY()
    {
        delete e2;
        delete e3;
    };

    void accept(Visitor *visitor)
    {
        visitor->visit(this);
        std::cout << "-----------" << std::endl;
    }

    E3* getE3() {
        return e3;
    };
private:
    E3 *e3;
};
#endif /* SRC_ORIGINAL_H_ */
