
#include <iostream>
#include "Army.h"

void Army::add(Unit* group) {
    std::cout << "new unit in this army" << std::endl;
    _children.push_back(group);
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

void Army::attack(Army* group) {
    for (auto& unit : _children) {
        for (auto& enemyUnit : group->getChildren()) {
            unit->attack(enemyUnit);
        }
    }
}

void Army::print() {
    std::cout << "Army:" << std::endl;
    for (auto& unit : _children) {
        unit->print();
    }
}
