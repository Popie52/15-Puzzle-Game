#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <array>
#include "Tile.h"
#include "Point.h"

constexpr int g_consolelines{25};

class Board {
public:
    Board();

    friend std::ostream &operator<<(std::ostream &out, const Board &bor);
    friend bool operator==(const Board& f1, const Board& f2);
    bool playerWon() const;
    void randomize();
    bool moveTile(Direction dir);

private:
    static constexpr int m_length{4};
    std::array<std::array<Tile, m_length>, m_length> m_board;

    Point getEmptyTilePos() const;
    bool isValidPoint(Point p);
    void swapTiles(Point p1, Point p2);
};

#endif // BOARD_H
