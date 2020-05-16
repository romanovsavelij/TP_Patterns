
#ifndef TP_PATTERNS_SOLDIER_H
#define TP_PATTERNS_SOLDIER_H


#include "Unit.h"

class Soldier : public Unit {
public:
    Soldier() : Unit(SOLDIER_HEALTH) {}

    void say() override;
    void attack(Unit* unit) override;
};


#endif //TP_PATTERNS_SOLDIER_H
