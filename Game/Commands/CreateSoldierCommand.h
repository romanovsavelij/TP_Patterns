
#ifndef TP_PATTERNS_CREATESOLDIERCOMMAND_H
#define TP_PATTERNS_CREATESOLDIERCOMMAND_H


#include "../../UnitsFactory/UnitsFactory.h"
#include "Command.h"

class CreateSoldierCommand : public Command {
public:
    CreateSoldierCommand() = default;
    explicit CreateSoldierCommand(UnitsFactory* factory, Army* army) : Command(factory, army) {}

    void execute() override;
};


#endif //TP_PATTERNS_CREATESOLDIERCOMMAND_H
