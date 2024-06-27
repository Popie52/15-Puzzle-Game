#ifndef USERINPUT_H
#define USERINPUT_H

#include <iostream>
#include <limits>
#include "Direction.h"

namespace UserInput {
    bool isValidCommand(char ch);
    void ignoreLine();
    char getCharacter();
    char getCommand();
    Direction charToDirection(char ch);
}

#endif // USERINPUT_H
