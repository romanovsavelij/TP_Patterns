
#include "RussianUnitsFactory.h"
#include "../Units/RussianSoldier.h"
#include "../Units/RussianSniper.h"

Soldier* RussianUnitsFactory::createSoldier() {
    return new RussianSoldier(_field);
}

Sniper* RussianUnitsFactory::createSniper() {
    return new RussianSniper(_field);
}
