/*
 * Menu.h
 *
 *  Created on: 15 Nov 2018
 *      Author: osboxes
 */

#ifndef SRC_MENU_H_
#define SRC_MENU_H_

#include <vector>
#include <iostream>
#include "Command.h"
#include "CommandExit.h"

namespace Supermarket {

class Menu {
public:
    Menu(){
        close = false;
        closeCommand = nullptr;
    };

    virtual ~Menu(){
        for (auto command : commands ){
            delete command;
        }
    };

    virtual void setCommands() = 0;

    void execute(Ticket* ticket) {
        int i = 1;
        std::cout << std::endl << "--------------" << std::endl;
        for(auto command : commands) {
            std::cout << i++ << ".- " << command->getTitle() << std::endl;
        }
        std::cout << std::endl;

        int option;
        std::cin >> option;

        close = (commands[option - 1] == closeCommand);
        commands[option - 1]->execute(ticket);
    }

    void build() {
        this->setCommands();

        closeCommand = new CommandExit();
        commands.push_back(closeCommand);
    }

    bool mustClose() {
        return close;
    }

protected:
    std::vector<Command*> commands;
    Command* closeCommand;
    bool close;
};

} /* namespace Supermarket */

#endif /* SRC_MENU_H_ */
