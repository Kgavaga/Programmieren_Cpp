#pragma once

#include <string>

class Place{

public:
    Place(int x, int y, std::string name)
        :_x{x}, _y{y}, _name{name} {};

    int getX();
    int getY();
    std::string getName();

    virtual void visit();
    
private:
    int _x;
    int _y;
    std::string _name;
};
