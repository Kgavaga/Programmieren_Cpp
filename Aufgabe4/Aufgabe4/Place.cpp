#include "Place.h"

Place::Place(int x, int y, std::string name) 
    : m_pos(new Position(x,y)), m_name(name) {}

int Place::getX()const
{
    return m_pos->getX();
}

int Place::getY() const
{
    return m_pos->getY();
}

std::string Place::getName() const
{
    return m_name;
}

