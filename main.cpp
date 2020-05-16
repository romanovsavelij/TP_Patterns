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
        Army* currentArmy;
        UnitsFactory* factory;
        if (russianTurn) {
            currentArmy = &russianArmy;
            factory = new RussianUnitsFactory();
        } else {
            currentArmy = &germanArmy;
            factory = new GermanUnitsFactory();
        }
        if (command == "create_soldier" || command == "cs") {
            Soldier* newSoldier = factory->createSoldier();
            currentArmy->add(newSoldier);
        } else if (command == "create_sniper") {
            Sniper* newSniper = factory->createSniper();
            currentArmy->add(newSniper);
        } else if (command == "move_right" || command == "mr") {
            currentArmy->moveRight();
        } else if (command == "move_left") {
            //currentArmy->moveLeft();
        }
        Fighter::fight(&russianArmy, &germanArmy, russianTurn);

        std::cout << "Russia" << std::endl;
        russianArmy.print();

        std::cout << "Germany" << std::endl;
        germanArmy.print();

        russianTurn = !russianTurn;
    }

    return 0;
}