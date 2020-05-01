
#ifndef TP_PATTERNS_FIGHTINGMODE_H
#define TP_PATTERNS_FIGHTINGMODE_H


#include <vector>
#include "../UnitsGroup.h"

class FightingMode {
public:
    virtual void attack(const std::vector<UnitsGroup*>& units) = 0;
    virtual void defence(const std::vector<UnitsGroup*>& units, int attack_points) = 0;
};


#endif //TP_PATTERNS_FIGHTINGMODE_H
