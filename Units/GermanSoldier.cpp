
#include "GermanSoldier.h"
#include <iostream>

void GermanSoldier::say() {
    std::cout << "Guten tag! Ich bin ein deutscher soldat, stört mich nicht, die Welt zu erobern." << std::endl;
}

GermanSoldier::GermanSoldier() {
    _position = FIELD_SIZE - 1;
}

GermanSoldier::GermanSoldier(Field *field) : Soldier(field) {
    _position = FIELD_SIZE - 1;
}
