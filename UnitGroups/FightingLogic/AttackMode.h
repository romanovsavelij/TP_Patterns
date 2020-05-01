
#ifndef TP_PATTERNS_ATTACKMODE_H
#define TP_PATTERNS_ATTACKMODE_H


#include "FightingMode.h"

class AttackMode : public FightingMode {
public:
    void attack(const std::vector<UnitsGroup *> &units) override;
    void defence(const std::vector<UnitsGroup *> &units, int attack_points) override;
};


#endif //TP_PATTERNS_ATTACKMODE_H
