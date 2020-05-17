
#ifndef TP_PATTERNS_GERMANUNITSFACTORY_H
#define TP_PATTERNS_GERMANUNITSFACTORY_H


#include "UnitsFactory.h"

class GermanUnitsFactory : public UnitsFactory {
public:
    GermanUnitsFactory() = default;
    explicit GermanUnitsFactory(Field* field) : UnitsFactory(field) {}

    Soldier* createSoldier() override;
    Sniper* createSniper() override;
};


#endif //TP_PATTERNS_GERMANUNITSFACTORY_H
