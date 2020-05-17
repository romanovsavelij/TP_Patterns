
#ifndef TP_PATTERNS_FIELD_H
#define TP_PATTERNS_FIELD_H


#include "../UnitGroups/Army.h"

class Army;

class Field {
    Army* _russianArmy;
    Army* _germanArmy;
public:
    Field() {}
    Field(Army *russianArmy, Army *germanArmy) : _russianArmy(russianArmy), _germanArmy(germanArmy) {}

    int getCellType(int position); // 0 - empty, -1 - russian, 1 - russian
    bool russiansWin();
    bool germanWin();
    bool gameOver();
};


#endif //TP_PATTERNS_FIELD_H
