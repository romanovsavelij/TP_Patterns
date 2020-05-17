
#include "CreateSoldierCommand.h"

void CreateSoldierCommand::execute() {
    _army->addSoldier(_factory->createSoldier());
}
