
#include <iostream>
#include "Soldier.h"

void Soldier::say() {
    std::cout << "I am a soldier" << std::endl;
}

void Soldier::attack(Unit *unit) {
    if (abs(unit->getPosition() - getPosition()) == SOLDIER_ATTACK_RADIOUS) {
        unit->defence(SOLDIER_ATTACK);
    }
}
