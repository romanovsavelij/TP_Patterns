
#ifndef TP_PATTERNS_RUSSIANSNIPER_H
#define TP_PATTERNS_RUSSIANSNIPER_H


#include "Sniper.h"

class RussianSniper : public Sniper {
public:
    RussianSniper() = default;
    explicit RussianSniper(Field* field) : Sniper(field) {}

    void say() override;
};


#endif //TP_PATTERNS_RUSSIANSNIPER_H
