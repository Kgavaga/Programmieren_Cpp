#include "Car.h"
#include <cmath>
#include <memory>
#include <iostream>

Car::Car(const std::string& name, const std::shared_ptr<Place>& place, const float averageConsumption)
    :m_name(name), m_place(place), m_averageConsumption(averageConsumption){}

Car::~Car()
{
    std::cout << "Car object deleted" << std::endl;
}

void Car::driveToPlace(const std::shared_ptr<Place>& dest)
{
    m_distance += sqrt(
        pow(abs((m_place->getX()-dest->getX())),2)+
        pow(abs((m_place->getY()-dest->getY())),2)
        );
    m_place = dest;
    m_consumption = m_averageConsumption * m_distance;
}


double Car::getDistance() const{
    return m_distance;
}
double Car::getConsumption() const{
    return m_consumption;
}