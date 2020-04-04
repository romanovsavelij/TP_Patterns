
#ifndef TP_PATTERNS_GERMANUNITSFACTORY_H
#define TP_PATTERNS_GERMANUNITSFACTORY_H


#include "UnitsFactory.h"

class GermanUnitsFactory : public UnitsFactory {
public:
    Soldier* createSoldier() override;
    Sniper* createSniper() override;
    MachineGunner* createMachineGunner() override;
};


#endif //TP_PATTERNS_GERMANUNITSFACTORY_H
