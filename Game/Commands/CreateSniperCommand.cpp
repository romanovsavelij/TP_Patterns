
#include "CreateSniperCommand.h"

void CreateSniperCommand::execute() {
    _army->addSniper(_factory->createSniper());
}
