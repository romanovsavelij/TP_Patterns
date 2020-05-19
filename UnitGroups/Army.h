
#ifndef TP_PATTERNS_ARMY_H
#define TP_PATTERNS_ARMY_H


#include <vector>
#include "UnitsGroup.h"
#include "Economy.h"
#include "../Units/Unit.h"
#include <algorithm>

class Unit;
class Sniper;
class Soldier;

class Army : public UnitsGroup {
    std::vector<Unit*> _children;
    Economy _economy;

    void _addUnit(Unit* unit);
public:
    void addSoldier(Soldier* unit);
    void addSniper(Sniper* unit);
    void remove(Unit* group);
    void moveRight() override;
    void moveLeft() override;
    std::vector<Unit*> getChildren();
    void execute() override;
    void attack(Army* enemyArmy);
    void print();
    void update();
    int getUnitsCount();
    bool isEmpty();
};

#endif //TP_PATTERNS_ARMY_H
