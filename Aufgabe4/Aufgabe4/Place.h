#pragma once

#include "Position.h"
#include <string>

class Place{

    Position* m_pos;
    std::string m_name;

public:
    Place(int x, int y, std::string name);

    int getX() const;
    int getY() const;
    std::string getName() const;
    
};
