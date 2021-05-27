#include <iostream>
#include "Place.h"


int Place::getX()
{
    return _x;
}

int Place::getY()
{
    return _y;
}

std::string Place::getName()
{
    return _name;
}

void Place::visit()
{
    std::cout << _name << " (" << _x << ", " << _y << ")";
}

