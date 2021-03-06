#include "Car.h"
#include <cmath>

Car::Car(const std::string name, const Place* place, const float averageConsumption)
    :m_name(name), m_place(place), m_averageConsumption(averageConsumption){}

void Car::driveToPlace(const Place* dest)
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