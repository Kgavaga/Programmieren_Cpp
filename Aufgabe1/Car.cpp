#include "Car.h"
#include <cmath>

Car::Car(std::string name, Place* place, float averageConsumption)
    :m_name(name), m_place(place), m_averageConsumption(averageConsumption){}

void Car::driveToPlace(Place* dest)
{
    m_distance += sqrt(
        pow(abs((m_place->getX()-dest->getX())),2)+
        pow(abs((m_place->getY()-dest->getY())),2)
        );
    m_place = dest;
    m_consumption = m_averageConsumption * m_distance;
}


float Car::getDistance(){
    return m_distance;
}
float Car::getConsumption(){
    return m_consumption;
}