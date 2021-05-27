#pragma once

#include "Place.h"
#include <string>

class Restaurant : 
    public Place{

public:
    Restaurant(int x, int y, std::string name, std::string * foodList, int len)
        : Place(x, y, name), _foodList{foodList}, _len(len) {}

    void visit() override;
    
private:
    std::string * _foodList;
    int _len;
};