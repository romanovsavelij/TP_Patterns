
#include "Game.h"
#include "../UnitGroups/Army.h"
#include "../UnitsFactory/RussianUnitsFactory.h"
#include "../UnitsFactory/GermanUnitsFactory.h"
#include "Commands/CreateSoldierCommand.h"
#include "Commands/MoveLeftCommand.h"
#include "Commands/MoveRightCommand.h"
#include "Commands/AttackCommand.h"
#include <iostream>

Game::Game() : _field(Field(&_russianArmy, &_germanArmy)) {
    _russianUnitsFactory = new RussianUnitsFactory(&_field);
    _germanUnitsFactory = new GermanUnitsFactory(&_field);
}

void Game::start() {
    std::cout << INSTRUCTION << std::endl;

    std::string input;
    while (std::cin >> input) {
        Army* currentArmy;
        Army* enemyArmy;
        UnitsFactory* factory;
        if (_russianTurn) {
            currentArmy = &_russianArmy;
            enemyArmy = &_germanArmy;
            factory = _russianUnitsFactory;
        } else {
            currentArmy = &_germanArmy;
            enemyArmy = &_russianArmy;
            factory = _germanUnitsFactory;
        }

        _parseInput(input, factory, currentArmy, enemyArmy);

        printState();

        if (_isGameOver()) {
            break;
        }

        _russianTurn = !_russianTurn;
    }
}

void Game::printState() {
    std::cout << "Russia" << std::endl;
    _russianArmy.print();

    std::cout << "Germany" << std::endl;
    _germanArmy.print();
}

void Game::_executeCommand(Command* command) {
    command->execute();
}

void Game::_parseInput(std::string input, UnitsFactory* factory, Army* currentArmy, Army* enemyArmy) {
    Command* command;
    if (input == "create_soldier" || input == "cso") {
        command = new CreateSoldierCommand(factory, currentArmy);
    } else if (input == "create_sniper" || input == "csn") {
        command = new CreateSoldierCommand(factory, currentArmy);
    } else if (input == "move_right" || input == "mr") {
        command = new MoveRightCommand(factory, currentArmy);
    } else if (input == "move_left" || input == "ml") {
        command = new MoveLeftCommand(factory, currentArmy);
    } else if (input == "attack" || input == "a") {
        command = new AttackCommand(currentArmy, enemyArmy);
    }

    if (command) {
        _executeCommand(command);
    } else {
        std::cout << INVALID_INPUT << std::endl;
    }
}

bool Game::_isGameOver() {
    if (_field.gameOver()) {
        std::cout << "Game over!" << std::endl;
        std::cout << (_field.russiansWin() ? "Russians" : "German") << " win!" << std::endl;
        return true;
    }
    return false;
}
