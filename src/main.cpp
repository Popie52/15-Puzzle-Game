#include <iostream>
#include "Board.h"
#include "UserInput.h"


int main() {
    Board board{};
    board.randomize();
    std::cout << board;

    std::cout << "Enter a command: ";
    while (!board.playerWon()) {
        char ch{UserInput::getCommand()};
        if (ch == 'q') {
            std::cout << "\n\nBye!\n\n";
            return 0;
        }

        Direction dir{UserInput::charToDirection(ch)};
        bool userMoved{board.moveTile(dir)};
        if (userMoved)
            std::cout << board;
    }

    std::cout << "\n\nYou won!\n\n";
    return 0;
}
