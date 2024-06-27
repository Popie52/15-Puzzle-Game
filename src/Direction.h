#ifndef DIRECTION_H
#define DIRECTION_H

#include <iostream>
#include <cassert>
#include "../include/Random.h"

class Direction {
public:
    enum Type {
        up,
        down,
        left,
        right,
        max_directions,
    };

    Direction(Type type);

    Type getType() const;

    Direction operator-() const;

    static Direction getRandomDirection();

    friend std::ostream &operator<<(std::ostream &stream, const Direction &dir);

private:
    Type m_type;
};

#endif // DIRECTION_H
