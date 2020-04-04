
#ifndef TP_PATTERNS_SOLDIER_H
#define TP_PATTERNS_SOLDIER_H


#include "Unit.h"

class Soldier : public Unit {
public:
    virtual void say() = 0;
};


#endif //TP_PATTERNS_SOLDIER_H
