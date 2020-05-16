
#include "Fighter.h"

void Fighter::fight(Army *russianArmy, Army *germanArmy, bool russianTurn) {
    if (russianTurn) {
        russianArmy->attack(germanArmy);
    } else {
        germanArmy->attack(russianArmy);
    }
}
