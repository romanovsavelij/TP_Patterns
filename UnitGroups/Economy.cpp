
#include <iostream>
#include "Economy.h"
#include "../constants.h"

bool Economy::canAffordSoldier() {
    return _coins >= SOLDIER_COST;
}

bool Economy::canAffordSniper() {
    return _coins >= SNIPER_COST;
}

void Economy::buySoldier() {
    _coins -= SOLDIER_COST;
}

void Economy::buySniper() {
    _coins -= SNIPER_COST;
}

int Economy::getCoins() {
    return _coins;
}

void Economy::killedUnits(int killedUnitsCount) {
    _coins += killedUnitsCount * COINS_PER_KILL;
}


