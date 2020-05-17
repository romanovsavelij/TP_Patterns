
#include "GermanUnitsFactory.h"
#include "../Units/GermanSoldier.h"
#include "../Units/GermanSniper.h"

Soldier* GermanUnitsFactory::createSoldier() {
    return new GermanSoldier(_field);
}

Sniper* GermanUnitsFactory::createSniper() {
    return new GermanSniper(_field);
}