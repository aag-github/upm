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
    std::cout << " Visitor10: visiting Original X..." << std::endl;
    std::cout << "    A: " << originalX->getA() << std::endl;
    std::cout << "    D: " << originalX->getD() << std::endl;
    originalX->getE1()->print();
    originalX->getE2()->print();
}

void Visitor10::visit(OriginalY* originalY)
{
    std::cout << "  Visitor10: visiting Original Y..." << std::endl;
    originalY->getE2()->print();
    std::cout << "    A: " << originalY->getA() << std::endl;
    originalY->getE1()->print();
}


void Visitor11::visit(OriginalX *originalX)
{
    std::cout << "Visitor11: visiting Original X..." << std::endl;
    Visitor10::visit(originalX);
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



