/*
 * Visitor10.cpp
 *
 *  Created on: 8 Nov 2018
 *      Author: osboxes
 */

#include <iostream>
#include "Original.h"
#include "Visitor20.h"

void Visitor20::visit(OriginalX *originalX)
{
    std::cout<< "Visitor20: visiting Original X..." << std::endl;
    visit(originalX->getE1());
    visit(originalX->getE2());
}

void Visitor20::visit(OriginalY* originalY)
{
    std::cout<< "Visitor20: visiting Original Y..." << std::endl;
    visit(originalY->getE1());
    visit(originalY->getE2());
    visit(originalY->getE3());
}
