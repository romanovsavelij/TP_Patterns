
#ifndef TP_PATTERNS_CREATESNIPERCOMMAND_H
#define TP_PATTERNS_CREATESNIPERCOMMAND_H


#include "../../UnitsFactory/UnitsFactory.h"
#include "Command.h"

class CreateSniperCommand : public Command {
public:
    CreateSniperCommand() = default;
    explicit CreateSniperCommand(UnitsFactory* factory, Army* army) : Command(factory, army) {}

    void execute() override;
};


#endif //TP_PATTERNS_CREATESNIPERCOMMAND_H
