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
    Car(const std::string name, const Place* place, const float averageConsumption);

    void driveToPlace(const Place* const dest);
    float getDistance() const;
    float getConsumption() const;
};