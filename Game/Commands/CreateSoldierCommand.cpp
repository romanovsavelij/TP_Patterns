
#include "CreateSoldierCommand.h"

void CreateSoldierCommand::execute() {
    _army->add(_factory->createSoldier());
}
