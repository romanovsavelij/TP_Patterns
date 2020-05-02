
#ifndef TP_PATTERNS_COMPOSITEGROUP_H
#define TP_PATTERNS_COMPOSITEGROUP_H


#include <vector>
#include "UnitsGroup.h"
#include "FightingSkill.h"
#include "Economy.h"
#include "FightingLogic/FightingMode.h"
#include "FightingLogic/FightingLogic.h"

class CompositeGroup {
    std::vector<UnitsGroup*> _children;
    FightingLogic* _fighting_logic;
    Economy* _economy;
public:
    void add(UnitsGroup* group);
    void remove(UnitsGroup* group);
    std::vector<UnitsGroup*> get_children();
    void execute();

};

#endif //TP_PATTERNS_COMPOSITEGROUP_H
