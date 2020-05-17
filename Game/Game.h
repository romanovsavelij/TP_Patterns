
#ifndef TP_PATTERNS_GAME_H
#define TP_PATTERNS_GAME_H


#include "../UnitGroups/Army.h"
#include "../UnitsFactory/UnitsFactory.h"

class Game {
private:
    Army _russianArmy;
    Army _germanArmy;
    Field _field;
    UnitsFactory* _russianUnitsFactory;
    UnitsFactory* _germanUnitsFactory;
    bool _russianTurn = true;
public:
    Game();

    void start();
    void printState();
};


#endif //TP_PATTERNS_GAME_H
