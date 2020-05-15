
#include "Fighter.h"

void Fighter::fight(Army *russianArmy, Army *germanArmy) {
    auto russianUnits = russianArmy->getChildren();
    auto germanUnits = germanArmy->getChildren();

    for (auto& russianUnit : russianUnits) {
        for (auto& germanUnit : germanUnits) {
            // fight
        }
    }
}
