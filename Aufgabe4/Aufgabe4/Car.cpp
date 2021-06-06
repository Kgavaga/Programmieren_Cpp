#include "Car.h"
#include <cmath>

Car::Car(const std::string name, const Place* place, const float averageConsumption)
    :m_name(name), m_place(new Place(place->getX(), place->getY(), place->getName())), m_averageConsumption(averageConsumption){}

void Car::driveToPlace(const Place* const dest)
{
    m_distance += sqrt(
        pow(abs((m_place->getX()-dest->getX())),2)+
        pow(abs((m_place->getY()-dest->getY())),2)
        );
    delete m_place;
    m_place = new Place(dest->getX(), dest->getY(), dest->getName());
    m_consumption = m_averageConsumption * m_distance;
}


float Car::getDistance() const{
    return m_distance;
}
float Car::getConsumption() const{
    return m_consumption;
}