#include <iostream>
#include <cstdint>
#include <memory>
#include "Car.h"


int main()
{
    std::shared_ptr<Transport::Place> stuttgart = std::make_shared<Transport::Place>(10, 10, "Stuttgart");
    std::shared_ptr<Transport::Place> esslingen = std::make_shared<Transport::Place>(30, 30, "Esslingen");

    std::unique_ptr<Transport::Car> cabrio = std::make_unique<Transport::Car>("Benz", stuttgart, (float)8/100);
    cabrio->driveToPlace(esslingen);
    std::cout << "Distance: " << cabrio->getDistance() << std::endl;
    std::cout << "Consumption: " << cabrio->getConsumption() << std::endl;
    
    return 0;
}