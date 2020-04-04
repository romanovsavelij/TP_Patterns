
#include "GermanUnitsFactory.h"
#include "../Units/GermanSoldier.h"
#include "../Units/GermanSniper.h"
#include "../Units/GermanMachineGunner.h"

Soldier* GermanUnitsFactory::createSoldier() {
    return new GermanSoldier();
}

Sniper* GermanUnitsFactory::createSniper() {
    return new GermanSniper();
}

MachineGunner* GermanUnitsFactory::createMachineGunner() {
    return new GermanMachineGunner();
}