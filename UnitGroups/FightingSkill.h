
#ifndef TP_PATTERNS_FIGHTINGSKILL_H
#define TP_PATTERNS_FIGHTINGSKILL_H


#include <opencl-c.h>

class FightingSkill {
private:
    size_t _skill;
public:
    void won_fight();
    void lost_fight();
};


#endif //TP_PATTERNS_FIGHTINGSKILL_H
