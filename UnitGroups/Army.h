
#ifndef TP_PATTERNS_ARMY_H
#define TP_PATTERNS_ARMY_H


#include <vector>
#include "UnitsGroup.h"
#include "../Fighting/FightingSkill.h"
#include "Economy.h"
#include "../Fighting/FightingLogic/FightingLogic.h"
#include "../Units/Unit.h"

class Army : public UnitsGroup {
    std::vector<Unit*> _children;
    FightingLogic* _fighting_logic;
    Economy* _economy;
public:
    void add(Unit* group);
    void remove(Unit* group);
    void moveRight() override;
    std::vector<Unit*> getChildren();
    void execute() override;
    void attack(Army* compositeGroup);
    void print();
};

#endif //TP_PATTERNS_ARMY_H
