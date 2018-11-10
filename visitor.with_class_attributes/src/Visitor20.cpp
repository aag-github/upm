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
    originalX->getE1()->print();
    originalX->getE2()->print();
}

void Visitor20::visit(OriginalY* originalY)
{
    std::cout<< "Visitor20: visiting Original Y..." << std::endl;
    originalY->getE1()->print();
    originalY->getE2()->print();
}
