
#include "GermanUnitsFactory.h"
#include "../Units/GermanSoldier.h"
#include "../Units/GermanSniper.h"

Soldier* GermanUnitsFactory::createSoldier() {
    return new GermanSoldier();
}

Sniper* GermanUnitsFactory::createSniper() {
    return new GermanSniper();
}