
#ifndef TP_PATTERNS_UNITSFACTORY_H
#define TP_PATTERNS_UNITSFACTORY_H


#include "../Units/Soldier.h"
#include "../Units/Sniper.h"
#include "../Units/MachineGunner.h"

class UnitsFactory {
public:
    virtual Soldier* createSoldier() = 0;
    virtual Sniper* createSniper() = 0;
    virtual MachineGunner* createMachineGunner() = 0;
};


#endif //TP_PATTERNS_UNITSFACTORY_H
