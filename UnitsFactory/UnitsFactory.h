
#ifndef TP_PATTERNS_UNITSFACTORY_H
#define TP_PATTERNS_UNITSFACTORY_H


#include "../Units/Soldier.h"
#include "../Units/Sniper.h"

class UnitsFactory {
protected:
    Field* _field;
public:
    UnitsFactory() {}
    UnitsFactory(Field* field) : _field(field) {}

    virtual Soldier* createSoldier() = 0;
    virtual Sniper* createSniper() = 0;
};


#endif //TP_PATTERNS_UNITSFACTORY_H
