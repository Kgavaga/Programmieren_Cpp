#include "Place.h"

Place::Place(int x, int y, std::string name) 
    : m_pos(new Position(x,y)), m_name(name) {}

int Place::getX()
{
    return m_pos->getX();
}

int Place::getY()
{
    return m_pos->getY();
}

std::string Place::getName()
{
    return m_name;
}

