
#include <iostream>
#include "Sniper.h"

void Sniper::say() {
    std::cout << "I am a sniper" << std::endl;
}

void Sniper::attack(Unit *unit) {
    if (abs(unit->getPosition() - getPosition()) <= SNIPER_ATTACK_RADIOUS) {
        unit->defence(SNIPER_ATTACK);
    }
}
