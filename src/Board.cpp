#include "Board.h"

void printEmptyLines(int count)
{
    for (int i = 0; i < count; ++i)
    {
        std::cout << '\n';  // Print a newline character for each count
    }
}

Board::Board() : m_board{{{Tile{1}, Tile{2}, Tile{3}, Tile{4}},
                          {Tile{5}, Tile{6}, Tile{7}, Tile{8}},
                          {Tile{9}, Tile{10}, Tile{11}, Tile{12}},
                          {Tile{13}, Tile{14}, Tile{15}, Tile{0}}}} {}


std::ostream &operator<<(std::ostream &out, const Board &bor)
{

    printEmptyLines(g_consolelines);

    for (int y{0}; y < bor.m_length; ++y)
    {
        for (int x{0}; x < bor.m_length; ++x)
        {
            out << bor.m_board[y][x];
        }
        out << '\n';
    }
    return out;
}

bool operator==(const Board &f1, const Board &f2)
{
    for (int i{0}; i < Board::m_length; ++i)
    {
        for (int j{0}; j < Board::m_length; ++j)
        {
            if (f1.m_board[i][j].getnum() != f2.m_board[i][j].getnum())
                return false;
        }
    }
    return true;
}

bool Board::playerWon() const
{
    static Board s_solved{};
    return s_solved == *this;
}

void Board::randomize()
{
    for (int i{0}; i < 1000; ++i)
    {
        bool success = moveTile(Direction::getRandomDirection());
        if (!success)
            --i;
    }
}

bool Board::moveTile(Direction dir)
{
    Point emptyTile{getEmptyTilePos()};
    Point adj{emptyTile.getAdjacentPoint(-dir)};

    if (!isValidPoint(adj))
        return false;
    swapTiles(adj, emptyTile);
    return true;
}

Point Board::getEmptyTilePos() const
{
    for (int i{0}; i < m_length; ++i)
    {
        for (int j{0}; j < m_length; ++j)
        {
            if (m_board[i][j].isEmpty())
                return {i, j};
        }
    }
    assert(0 && "There is no empty tile in the board!!!");
    return {-1, -1};
}

bool Board::isValidPoint(Point p)
{
    return (p.x >= 0 && p.x < m_length) && (p.y >= 0 && p.y < m_length);
}

void Board::swapTiles(Point p1, Point p2)
{
    std::swap(m_board[p1.x][p1.y], m_board[p2.x][p2.y]);
}
