
#ifndef TP_PATTERNS_CONSTANTS_H
#define TP_PATTERNS_CONSTANTS_H

#include <string>

// Game
const int FIELD_SIZE = 5;
const int START_COINS_COUNT = 7;

// Units
const int SNIPER_HEALTH = 5;
const int SNIPER_ATTACK = 4;
const int SNIPER_ATTACK_RADIOUS = 3;


const int SOLDIER_HEALTH = 8;
const int SOLDIER_ATTACK = 2;
const int SOLDIER_ATTACK_RADIOUS = 1;

// Economy
const int SOLDIER_COST = 2;
const int SNIPER_COST = 3;
const int COINS_PER_KILL = 4;


// Messages
const std::string INVALID_INPUT = "Sorry, I don't understand your command";
const std::string INSTRUCTION = "cso - create soldier, csn - create sniper, ml - move left, mr - move right, a - attack";
const std::string NOT_ENOUGH_COINS = "Sorry, you don't have enough coins to afford buying this unit.";

#endif //TP_PATTERNS_CONSTANTS_H