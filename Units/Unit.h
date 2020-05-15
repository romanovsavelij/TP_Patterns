
#ifndef TP_PATTERNS_UNIT_H
#define TP_PATTERNS_UNIT_H


#include "../UnitGroups/UnitsGroup.h"
#include "../constants.h"

class Unit : public UnitsGroup {
private:
    int _position = 0;
public:
    virtual void say() = 0;
    void moveRight() override;
    void setDefaultPosition(bool isRussianUnit);
    virtual void execute() override {}
};


#endif //TP_PATTERNS_UNIT_H
