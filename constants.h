
#ifndef TP_PATTERNS_CONSTANTS_H
#define TP_PATTERNS_CONSTANTS_H

#include <string>

// Game
const int FIELD_SIZE = 2; // 8

// Units
const int SNIPER_HEALTH = 5;
const int SNIPER_ATTACK = 4;

const int SOLDIER_HEALTH = 8;
const int SOLDIER_ATTACK = 2;


// Messages
const std::string INVALID_INPUT = "Sorry, I don't understand your command";
const std::string INSTRUCTION = "cso - create soldier, csn - create sniper, ml - move left, mr - move right";

#endif //TP_PATTERNS_CONSTANTS_H