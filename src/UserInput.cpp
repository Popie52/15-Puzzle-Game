#include "UserInput.h"

bool UserInput::isValidCommand(char ch) {
    return ch == 'w' || ch == 'a' || ch == 's' || ch == 'd' || ch == 'q';
}

void UserInput::ignoreLine() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

char UserInput::getCharacter() {
    char c{};
    std::cin >> c;
    ignoreLine();
    return c;
}

char UserInput::getCommand() {
    char ch{};
    while (!isValidCommand(ch)) {
        ch = getCharacter();
    }
    return ch;
}

Direction UserInput::charToDirection(char ch) {
    switch (ch) {
        case 'w':
            return Direction{Direction::up};
        case 's':
            return Direction{Direction::down};
        case 'a':
            return Direction{Direction::left};
        case 'd':
            return Direction{Direction::right};
    }

    assert(0 && "Unsupported direction was passed!");
    return Direction{Direction::up};
}
