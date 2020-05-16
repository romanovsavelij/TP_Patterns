
#include <iostream>
#include "Unit.h"

void Unit::setDefaultPosition(bool isRussianUnit) {
    if (!isRussianUnit) {
        _position = FIELD_SIZE;
    }
}

void Unit::moveRight() {
    std::cout << "unit moves right" << std::endl;
    if (_position == FIELD_SIZE - 1) {
        return;
    }
    ++_position;
}

void Unit::defence(int attack) {
    _health -= attack;
}

void Unit::print() {
    std::cout << "unit: " << "position = " << _position << " health = " << _health << std::endl;
}
