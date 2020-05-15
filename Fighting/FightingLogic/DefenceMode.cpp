
#include <iostream>
#include "DefenceMode.h"

void DefenceMode::attack(const std::vector<UnitsGroup *> &units) {
    std::cout << "Quite poor attack" << std::endl;
}

void DefenceMode::defence(const std::vector<UnitsGroup *> &units, int attack_points) {
    std::cout << "Strong defence" << std::endl;
}
