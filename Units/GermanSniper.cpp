
#include <iostream>
#include "GermanSniper.h"

void GermanSniper::say() {
    std::cout << "I am a german sniper" << std::endl;
}

GermanSniper::GermanSniper() {
    _position = FIELD_SIZE - 1;
}

GermanSniper::GermanSniper(Field *field) : Sniper(field) {
    _position = FIELD_SIZE - 1;
}
