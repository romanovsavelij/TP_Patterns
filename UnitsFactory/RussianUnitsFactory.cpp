
#include "RussianUnitsFactory.h"
#include "../Units/RussianSoldier.h"
#include "../Units/RussianSniper.h"

Soldier* RussianUnitsFactory::createSoldier() {
    return new RussianSoldier();
}

Sniper* RussianUnitsFactory::createSniper() {
    return new RussianSniper();
}
