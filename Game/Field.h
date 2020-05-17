
#ifndef TP_PATTERNS_FIELD_H
#define TP_PATTERNS_FIELD_H


#include "../UnitGroups/Army.h"

class Army;

class Field {
    Army* _russianArmy;
    Army* _germanArmy;
    //std::vector<int> _cells;
public:
    Field();
    Field(Army* russianArmy, Army* germanArmy);

    bool getCellType(int position); // 0 - empty, -1 - russian, 1 - russian
    // void makeMoveTo(int coordinate, bool russianTurn);
    // void refresh();
};


#endif //TP_PATTERNS_FIELD_H
