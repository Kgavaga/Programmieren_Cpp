#pragma once

#include "Place.h"
#include <string>
#include <cmath>

class Car{

    const std::string m_name;
    const Place* m_place;
    double m_averageConsumption;

    double m_distance = 0;
    double m_consumption = 0;

public:
    Car(const std::string name, const Place* place, const float averageConsumption);

    void driveToPlace(const Place* dest);
    double getDistance() const;
    double getConsumption() const;
};