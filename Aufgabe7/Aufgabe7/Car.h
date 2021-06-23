#pragma once

#include "Place.h"
#include <string>
#include <memory>

namespace Transport {
    class Car {

        const std::string m_name;
        std::shared_ptr<Place> m_place;
        double m_averageConsumption;

        double m_distance = 0;
        double m_consumption = 0;

    public:
        Car(const std::string& name, const std::shared_ptr<Place>& place, const float averageConsumption);
        ~Car();
        void driveToPlace(const std::shared_ptr<Place>& dest);
        double getDistance() const;
        double getConsumption() const;
    };
}