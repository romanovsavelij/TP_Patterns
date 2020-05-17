
#ifndef TP_PATTERNS_RUSSIANSOLDIER_H
#define TP_PATTERNS_RUSSIANSOLDIER_H


#include "Soldier.h"

class RussianSoldier : public Soldier {
public:
    RussianSoldier();
    explicit RussianSoldier(Field* field) : Soldier(field) {}

    void say() override;
};


#endif //TP_PATTERNS_RUSSIANSOLDIER_H
