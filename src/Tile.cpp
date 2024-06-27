#include "Tile.h"

Tile::Tile() : m_x{0} {}

Tile::Tile(int x) : m_x{x} {}

std::ostream &operator<<(std::ostream &out, const Tile &tile) {
    if (tile.m_x > 9)
        out << ' ' << tile.m_x << ' ';
    else if (tile.m_x > 0)
        out << "  " << tile.m_x << ' ';
    else if (tile.m_x == 0)
        out << "    ";
    return out;
}

int Tile::getnum() const {
    return m_x;
}

bool Tile::isEmpty() const {
    return m_x == 0;
}
