/*
 * Visitor10.cpp
 *
 *  Created on: 8 Nov 2018
 *      Author: osboxes
 */

#include <iostream>
#include "Original.h"
#include "Visitor10.h"

void Visitor10::visit(OriginalX *originalX)
{
    visitA(originalX->getA());
    visit(originalX->getE1());
    visit(originalX->getE2());
}

void Visitor10::visit(OriginalY* originalY)
{
    visit(originalY->getE2());;
    visit(originalY->getE3());;
    visitA(originalY->getA());
    visit(originalY->getE1());
}


void Visitor11::visit(OriginalX *originalX)
{
    std::cout << "Visitor11: visiting Original X..." << std::endl;
    Visitor10::visit(originalX);
    visitB(originalX->getB());
}

void Visitor11::visit(OriginalY* originalY)
{
    std::cout << "Visitor11: visiting Original Y..." << std::endl;
    Visitor10::visit(originalY);
}

void Visitor12::visit(OriginalX *originalX)
{
    std::cout << "Visitor12: visiting Original X..." << std::endl;
    Visitor10::visit(originalX);
}

void Visitor12::visit(OriginalY* originalY)
{
    std::cout << "Visitor12: visiting Original Y..." << std::endl;
    Visitor10::visit(originalY);
}



