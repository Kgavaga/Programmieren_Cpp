#include <iostream>
#include <cstdint>
#include <memory>
#include "Car.h"


int main()
{
    std::shared_ptr<Place> stuttgart = std::make_shared<Place>(10, 10, "Stuttgart");
    std::shared_ptr<Place> esslingen = std::make_shared<Place>(30, 30, "Esslingen");

    std::unique_ptr<Car> cabrio = std::make_unique<Car>("Benz", stuttgart, (float)8/100);
    cabrio->driveToPlace(esslingen);
    std::cout << "Distance: " << cabrio->getDistance() << std::endl;
    std::cout << "Consumption: " << cabrio->getConsumption() << std::endl;
    
    return 0;
}