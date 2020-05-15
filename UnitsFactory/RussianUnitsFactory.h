
#ifndef TP_PATTERNS_RUSSIANUNITSFACTORY_H
#define TP_PATTERNS_RUSSIANUNITSFACTORY_H


#include "UnitsFactory.h"

class RussianUnitsFactory : public UnitsFactory {
public:
    Soldier* createSoldier() override;
    Sniper* createSniper() override;
};


#endif //TP_PATTERNS_RUSSIANUNITSFACTORY_H
