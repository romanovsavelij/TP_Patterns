
#ifndef TP_PATTERNS_UNITLEAF_H
#define TP_PATTERNS_UNITLEAF_H


#include "UnitsGroup.h"

class UnitLeaf : public UnitsGroup {
    Unit* unit;
public:
    void execute() override;
};


#endif //TP_PATTERNS_UNITLEAF_H
