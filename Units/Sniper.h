
#ifndef TP_PATTERNS_SNIPER_H
#define TP_PATTERNS_SNIPER_H


#include "Unit.h"

class Sniper : public Unit {
public:
    Sniper() : Unit(SNIPER_HEALTH) {}
    explicit Sniper(Field* field) : Unit(field, SNIPER_HEALTH) {}

    void say() override;
    void attack(Unit* unit) override;
};


#endif //TP_PATTERNS_SNIPER_H
