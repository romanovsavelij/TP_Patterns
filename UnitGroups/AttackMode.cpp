
#include <iostream>
#include "AttackMode.h"

void AttackMode::attack(const std::vector<UnitsGroup *> &units) {
    std::cout << "Strong attack" << std::endl;
}

void AttackMode::defence(const std::vector<UnitsGroup *> &units, int attack_points) {
    std::cout << "Quite poor defence" << std::endl;
}
