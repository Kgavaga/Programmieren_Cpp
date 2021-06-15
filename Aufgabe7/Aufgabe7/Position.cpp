#include "Position.h"

Position::Position(const int x, const int y): m_x(x), m_y(y){}

int Position::getX() const
{
    return m_x;
}

int Position::getY() const
{
    return m_y;
}