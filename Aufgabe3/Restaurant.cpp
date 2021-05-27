#include <iostream>
#include "Restaurant.h"

void Restaurant::visit()
{
    Place::visit();
    std::cout << ". Es gibt dort folgendes zu Essen: ";
    for(int i = 0; i < _len-1; i++)
    {
        std::cout << _foodList[i] << ", ";
    }
    std::cout << _foodList[_len-1];
    
}