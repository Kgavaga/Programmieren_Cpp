#pragma once

#include "Place.h"
#include <string>

class Sight : 
    public Place{

public:
    Sight(int x, int y, std::string name, std::string description)
        : Place(x, y, name), _description{description} {}

    std::string getDescription();
    void visit() override;
    
private:
    std::string _description;
};