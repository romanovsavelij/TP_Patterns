
#include "Game.h"
#include "../UnitGroups/Army.h"
#include "../UnitsFactory/RussianUnitsFactory.h"
#include "../UnitsFactory/GermanUnitsFactory.h"
#include "../Fighting/Fighter.h"
#include <iostream>

Game::Game() : _field(Field(&_russianArmy, &_germanArmy)) {
    _russianUnitsFactory = new RussianUnitsFactory(&_field);
    _germanUnitsFactory = new GermanUnitsFactory(&_field);
}

void Game::start() {
    std::string command;
    while (std::cin >> command) {
        Army* currentArmy;
        UnitsFactory* factory;
        if (_russianTurn) {
            currentArmy = &_russianArmy;
            factory = _russianUnitsFactory;
        } else {
            currentArmy = &_germanArmy;
            factory = _germanUnitsFactory;
        }
        if (command == "create_soldier" || command == "cs") {
            Soldier* newSoldier = factory->createSoldier();
            currentArmy->add(newSoldier);
        } else if (command == "create_sniper") {
            Sniper* newSniper = factory->createSniper();
            currentArmy->add(newSniper);
        } else if (command == "move_right" || command == "mr") {
            currentArmy->moveRight();
        } else if (command == "move_left") {
            //currentArmy->moveLeft();
        }
        Fighter::fight(&_russianArmy, &_germanArmy, _russianTurn);
        printState();
        _russianTurn = !_russianTurn;
    }
}

void Game::printState() {
    std::cout << "Russia" << std::endl;
    _russianArmy.print();

    std::cout << "Germany" << std::endl;
    _germanArmy.print();
}
