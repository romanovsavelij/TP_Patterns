
#include "Field.h"

Field::Field() {}

Field::Field(Army *russianArmy, Army *germanArmy) : _russianArmy(russianArmy), _germanArmy(germanArmy) {}

/*void Game::refresh() {
    for (auto& unit : _russianArmy->getChildren()) {
        _cells[unit->getPosition()] = true;
    }
    for (auto& unit : _germanArmy->getChildren()) {
        _cells[unit->getPosition()] = false;
    }
}*/

bool Field::getCellType(int position) {
    for (auto& unit : _russianArmy->getChildren()) {
        if (unit->getPosition() == position) {
            return -1;
        }
    }
    for (auto& unit : _germanArmy->getChildren()) {
        if (unit->getPosition() == position) {
            return 1;
        }
    }
    return 0;
}
