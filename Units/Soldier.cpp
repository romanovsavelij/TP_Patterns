
#include <iostream>
#include "Soldier.h"

void Soldier::say() {
    std::cout << "I am a soldier" << std::endl;
}

void Soldier::attack(Unit *unit) {
    unit->defence(SOLDIER_ATTACK);
}
