
#include "FightingSkill.h"

void FightingSkill::won_fight() {
    ++_skill;
}

void FightingSkill::lost_fight() {
    // By losing we acquire more skills
    _skill += 2;
}
