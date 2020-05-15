#include <iostream>
#include "UnitsFactory/UnitsFactory.h"
#include "UnitsFactory/RussianUnitsFactory.h"
#include "UnitsFactory/GermanUnitsFactory.h"
#include "UnitGroups/Army.h"
#include "Fighting/Fighter.h"

int main() {
    UnitsFactory* russianUnitsFactory = new RussianUnitsFactory();
    Soldier* russianSoldier = russianUnitsFactory->createSoldier();
    russianSoldier->say();

    UnitsFactory* germanUnitsFactory = new GermanUnitsFactory();
    Soldier* germanSoldier = germanUnitsFactory->createSoldier();
    germanSoldier->say();

    Army russianArmy = Army();
    russianArmy.add(russianSoldier);
    russianArmy.remove(russianSoldier);

    Army germanArmy = Army();
    germanArmy.add(germanSoldier);
    germanArmy.remove(germanSoldier);

    std::string command;
    bool russianTurn = true;
    while (std::cin >> command) {
        Army currentArmy;
        if (russianTurn) {
            currentArmy = russianArmy;
        } else {
            currentArmy = germanArmy;
        }
        if (command == "create_soldier" || command == "cs") {
            if (russianTurn) {
                Soldier* newRussianSoldier = russianUnitsFactory->createSoldier();
                russianArmy.add(newRussianSoldier);
            } else {
                Soldier* newGermanSoldier = germanUnitsFactory->createSoldier();
                germanArmy.add(newGermanSoldier);
            }
        } else if (command == "create_sniper") {
            // todo
        } else if (command == "move_right" || command == "mr") {
            currentArmy.moveRight();
        } else if (command == "move_left") {
            // todo
        }
        Fighter::fight(&russianArmy, &germanArmy);
        russianTurn = !russianTurn;
    }

    return 0;
}