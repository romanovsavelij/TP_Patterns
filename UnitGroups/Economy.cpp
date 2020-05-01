
#include <iostream>
#include "Economy.h"

void Economy::win() {
    ++_coins;
}

void Economy::lose() {
    std::cout << "No new coins, because you lost" << std::endl;
}
