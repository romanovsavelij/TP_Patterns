#include <iostream>
#include "UnitsFactory/UnitsFactory.h"
#include "UnitsFactory/RussianUnitsFactory.h"
#include "UnitsFactory/GermanUnitsFactory.h"
#include "UnitGroups/Army.h"
#include "Game/Field.h"
#include "Game/Game.h"

int main() {
    /*Army russianArmy = Army();
    Army germanArmy = Army();

    Game* field = new Game(&russianArmy, &germanArmy);

    UnitsFactory* russianUnitsFactory = new RussianUnitsFactory(field);
    UnitsFactory* germanUnitsFactory = new GermanUnitsFactory(field);


    Soldier* russianSoldier = russianUnitsFactory->createSoldier();
    russianSoldier->say();

    Soldier* germanSoldier = germanUnitsFactory->createSoldier();
    germanSoldier->say();


    russianArmy.add(russianSoldier);
    russianArmy.remove(russianSoldier);

    germanArmy.add(germanSoldier);
    germanArmy.remove(germanSoldier);*/

    Game game;
    game.start();

    return 0;
}