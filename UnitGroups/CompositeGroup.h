
#ifndef TP_PATTERNS_COMPOSITEGROUP_H
#define TP_PATTERNS_COMPOSITEGROUP_H


#include <vector>
#include "UnitsGroup.h"
#include "../Fighting/FightingSkill.h"
#include "Economy.h"
#include "../Fighting/FightingLogic/FightingLogic.h"

class CompositeGroup : public UnitsGroup {
    std::vector<UnitsGroup*> _children;
    FightingLogic* _fighting_logic;
    Economy* _economy;
public:
    void add(UnitsGroup* group);
    void remove(UnitsGroup* group);
    void moveRight() override;
    std::vector<UnitsGroup*> getChildren();
    void execute() override;
};

#endif //TP_PATTERNS_COMPOSITEGROUP_H
