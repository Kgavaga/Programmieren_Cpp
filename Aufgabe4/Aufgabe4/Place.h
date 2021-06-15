#pragma once

#include "Position.h"
#include <string>

class Place{

    Position* m_pos;
    std::string m_name;

public:
    Place(const int x, const int y, const std::string name);

    int getX() const;
    int getY() const;
    std::string getName() const;
    
};
