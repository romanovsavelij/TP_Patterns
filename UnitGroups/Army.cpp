
#include <iostream>
#include "Army.h"
#include "../Units/Soldier.h"
#include "../Units/Sniper.h"

void Army::_addUnit(Unit* group) {
    std::cout << "new unit in this army" << std::endl;
    _children.push_back(group);
}

void Army::addSoldier(Soldier *unit) {
    if (_economy.canAffordSoldier()) {
        _economy.buySoldier();
        _addUnit(unit);
    } else {
        std::cout << NOT_ENOUGH_COINS << std::endl;
    }
}

void Army::addSniper(Sniper *unit) {
    if (_economy.canAffordSniper()) {
        _economy.buySniper();
        _addUnit(unit);
    } else {
        std::cout << NOT_ENOUGH_COINS << std::endl;
    }
}

void Army::remove(Unit *group) {
    _children.erase(std::remove(_children.begin(), _children.end(), group), _children.end());
}

std::vector<Unit*> Army::getChildren() {
    return _children;
}

void Army::execute() {
    for (auto& child : _children) {
        child->execute();
    }
}

void Army::moveRight() {
    for (auto& child : _children) {
        child->moveRight();
    }
}

void Army::moveLeft() {
    for (auto& child : _children) {
        child->moveLeft();
    }
}

void Army::attack(Army* enemyArmy) {
    int enemyUnitsCount = enemyArmy->getUnitsCount();
    for (auto& unit : _children) {
        for (auto& enemyUnit : enemyArmy->getChildren()) {
            unit->attack(enemyUnit);
        }
    }
    enemyArmy->update();
    _economy.killedUnits(enemyUnitsCount - enemyArmy->getUnitsCount());
}

void Army::print() {
    std::cout << "Army:" << std::endl;
    std::cout << "Economy: " << _economy.getCoins() << std::endl;
    std::cout << "Units:" << std::endl;
    for (auto& unit : _children) {
        unit->print();
    }
}

void Army::update() {
    std::vector<Unit*> newChildren;
    for (auto& unit : _children) {
        if (unit->isAlive()) {
            newChildren.push_back(unit);
        }
    }
    _children = newChildren;
}

int Army::getUnitsCount() {
    return _children.size();
}

bool Army::isEmpty() {
    return getUnitsCount() == 0;
}
