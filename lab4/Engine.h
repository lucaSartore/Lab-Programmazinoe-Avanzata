//
// Created by lucas on 3/3/2023.
//

#ifndef LAB4_ENGINE_H
#define LAB4_ENGINE_H

#include "fuel_type.h"

class Engine {
private:
    FuelType fuel_type;
    int rpm;
    bool status;
public:
    Engine();
    explicit Engine (FuelTypeEnum _fuel_type, int _rpm = 0, bool _status = false);
    void turn_on();
    void turn_off();
    void increase_rpm_by(int increase_by);
    FuelType get_fuel_type() const;
    int get_rpm();
    friend std::ostream & operator << (std::ostream & os, const Engine& e);
};

std::ostream & operator << (std::ostream & os, const Engine& e);

#endif //LAB4_ENGINE_H
