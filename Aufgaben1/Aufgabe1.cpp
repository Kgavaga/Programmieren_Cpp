#include <iostream>
#include <cstdint>
#include "Car.h"


int main()
{
    std::cout<<"I'm alive and kicking!" << std::endl;
    Place* stuttgart = new Place(10,10,"Stuttgart");
    Place* esslingen = new Place(30,30, "Esslingen");

    Car* cabrio = new Car("Benz", stuttgart, (float)8/100);
    cabrio->driveToPlace(esslingen);
    std::cout << "Distance: " << cabrio->getDistance() << std::endl;
    std::cout << "Consumption: " << cabrio->getConsumption() << std::endl;
    
    return 0;
}