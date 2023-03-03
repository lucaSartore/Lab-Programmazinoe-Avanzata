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
    explicit Engine (FuelTypeEnum _fuel_type, int _rpm = 0, bool _status = false);
    void turn_on();
    void turn_off();
    void increase_rpm_by(int increase_by);
    FuelType get_fuel_type();
    int get_rpm();
};


#endif //LAB4_ENGINE_H
