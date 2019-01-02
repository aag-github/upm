/*
 * SaleCommand.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_COMMANDS_SALECOMMAND_H_
#define SRC_COMMANDS_SALECOMMAND_H_

#include "Command.h"
#include "Store.h"
#include "SellLine.h"

namespace Supermarket {

class CommandSell: public Command {
public:
    CommandSell() : Command("Sell") {};
    virtual ~CommandSell(){};

    virtual void execute(Ticket* ticket) override final {
        std::cout << "Product ID: ";
        unsigned int id;
        std::cin >> id;

        Store *store = Store::getInstance();

        Product *product = store->findProduct(id);

        SellLine * line = new SellLine(product->getName(), product->getPrice());
        ticket->addLine(line);
    }

};

} /* namespace Supermarket */

#endif /* SRC_COMMANDS_SALECOMMAND_H_ */
