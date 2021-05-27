#pragma once

#include "Place.h"
#include <string>
#include <cmath>

class Car{

    std::string m_name;
    Place* m_place;
    float m_averageConsumption;

    float m_distance = 0;
    float m_consumption = 0;

public:
    Car(std::string name, Place* place, float averageConsumption);

    void driveToPlace(Place* dest);
    float getDistance();
    float getConsumption();
};