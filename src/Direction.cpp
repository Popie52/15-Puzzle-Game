#include "Direction.h"

Direction::Direction(Type type) : m_type{type} {}

Direction::Type Direction::getType() const {
    return m_type;
}

Direction Direction::operator-() const {
    switch (m_type) {
        case up:
            return Direction{down};
        case down:
            return Direction{up};
        case left:
            return Direction{right};
        case right:
            return Direction{left};
    }

    assert(0 && "Unsupported direction was passed!");
    return Direction{up};
}

std::ostream &operator<<(std::ostream &stream, const Direction &dir) {
    switch (dir.getType()) {
        case Direction::up:
            return (stream << "up");
        case Direction::down:
            return (stream << "down");
        case Direction::left:
            return (stream << "left");
        case Direction::right:
            return (stream << "right");
        default:
            return (stream << "unknown direction");
    }
}

Direction Direction::getRandomDirection() {
    Type random{static_cast<Type>(Random::get(0, Type::max_directions - 1))};
    return Direction{random};
}
