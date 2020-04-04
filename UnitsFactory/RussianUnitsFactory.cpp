
#include "RussianUnitsFactory.h"
#include "../Units/RussianSoldier.h"
#include "../Units/RussianSniper.h"
#include "../Units/RussianMachineGunner.h"

Soldier* RussianUnitsFactory::createSoldier() {
    return new RussianSoldier();
}

Sniper* RussianUnitsFactory::createSniper() {
    return new RussianSniper();
}

MachineGunner* RussianUnitsFactory::createMachineGunner() {
    return new RussianMachineGunner();
}
