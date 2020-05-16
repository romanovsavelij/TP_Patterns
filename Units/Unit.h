
#ifndef TP_PATTERNS_UNIT_H
#define TP_PATTERNS_UNIT_H


#include "../UnitGroups/UnitsGroup.h"
#include "../constants.h"

class Unit : public UnitsGroup {
private:
    int _position = 0;
protected:
    int _health = 0;
public:
    Unit() = default;
    Unit(int health) : _health(health) {}

    virtual void say() = 0;
    void moveRight() override;
    void setDefaultPosition(bool isRussianUnit);
    virtual void execute() override {}
    virtual void attack(Unit* unit) = 0;
    virtual void defence(int attack);
    void print();
};


#endif //TP_PATTERNS_UNIT_H
