#include <iostream>
#include "Sight.h"

std::string Sight::getDescription()
{
    return _description;
}

void Sight::visit()
{
    Place::visit();
    std::cout << ". " << _description;
}