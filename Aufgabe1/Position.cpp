#include "Position.h"

Position::Position(int x, int y): m_x(x), m_y(y){}

int Position::getX()
{
    return m_x;
}

int Position::getY()
{
    return m_y;
}