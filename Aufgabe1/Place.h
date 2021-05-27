#pragma once

#include "Position.h"
#include <string>

class Place{

    Position* m_pos;
    std::string m_name;

public:
    Place(int x, int y, std::string name);

    int getX();
    int getY();
    std::string getName();
    
};
