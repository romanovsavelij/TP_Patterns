
#ifndef TP_PATTERNS_GERMANSOLDIER_H
#define TP_PATTERNS_GERMANSOLDIER_H


#include "Soldier.h"

class GermanSoldier : public Soldier {
public:
    GermanSoldier();
    explicit GermanSoldier(Field* field);

    void say() override;
};


#endif //TP_PATTERNS_GERMANSOLDIER_H
