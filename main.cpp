#include <iostream>
#include "UnitsFactory/UnitsFactory.h"
#include "UnitsFactory/RussianUnitsFactory.h"
#include "UnitsFactory/GermanUnitsFactory.h"

int main() {
    UnitsFactory* russianUnitsFactory = new RussianUnitsFactory();
    Soldier* russianSoldier = russianUnitsFactory->createSoldier();
    russianSoldier->say();

    UnitsFactory* germanUnitsFactory = new GermanUnitsFactory();
    Soldier* germanSoldier = germanUnitsFactory->createSoldier();
    germanSoldier->say();

    return 0;
}