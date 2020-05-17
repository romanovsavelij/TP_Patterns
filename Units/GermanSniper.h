
#ifndef TP_PATTERNS_GERMANSNIPER_H
#define TP_PATTERNS_GERMANSNIPER_H


#include "Sniper.h"

class GermanSniper : public Sniper {
public:
    GermanSniper();
    explicit GermanSniper(Field* field);

    void say() override;
};


#endif //TP_PATTERNS_GERMANSNIPER_H
