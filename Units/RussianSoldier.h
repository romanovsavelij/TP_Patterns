
#ifndef TP_PATTERNS_RUSSIANSOLDIER_H
#define TP_PATTERNS_RUSSIANSOLDIER_H


#include "Soldier.h"

class RussianSoldier : public Soldier {
public:
    RussianSoldier();
    void say() override;
};


#endif //TP_PATTERNS_RUSSIANSOLDIER_H
