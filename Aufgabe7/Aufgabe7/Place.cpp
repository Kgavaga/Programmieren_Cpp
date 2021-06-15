#include <memory>
#include <iostream>
#include "Place.h"

Place::Place(const int x, const int y, const std::string& name)
    : m_pos{ std::make_unique<Position>(x, y) }, m_name(name) {
}

Place::~Place()
{
    std::cout << "Place object deleted!" << std::endl;
}

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

