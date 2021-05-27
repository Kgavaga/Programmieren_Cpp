#include <iostream>
#include <cstdint>
#include "Place.h"
#include "Sight.h"
#include "Restaurant.h"

int main()
{
    Place *stuttgart = new Place(0, 100, "Stuttgart");
    Sight *eiffelturm = new Sight(500, 500, "Eiffelturm", 
        "Hier sieht man ganz Paris");

    std::string food[] = {"Nudeln", "Reis", "Brot"};
    Restaurant *asiaImbiss = new Restaurant(500, 500, 
        "Asia Imbiss", food, 3);

    stuttgart->visit();
    std::cout << std::endl;
    eiffelturm->visit();
    std::cout << std::endl;
    asiaImbiss->visit();
    std::cout << std::endl;

    return 0;
}