
#include "CreateSniperCommand.h"

void CreateSniperCommand::execute() {
    _army->add(_factory->createSniper());
}
