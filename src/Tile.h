#ifndef TILE_H
#define TILE_H

#include <iostream>

class Tile {
public:
    Tile();
    explicit Tile(int x);

    friend std::ostream &operator<<(std::ostream &out, const Tile &tile);

    int getnum() const;
    bool isEmpty() const;

private:
    int m_x;
};

#endif // TILE_H
