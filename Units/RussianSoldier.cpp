
#include "RussianSoldier.h"
#include <iostream>

void RussianSoldier::say() {
    std::cout << "I am a russian soldier!" << std::endl;
}

RussianSoldier::RussianSoldier() {
    setDefaultPosition(true);
}
