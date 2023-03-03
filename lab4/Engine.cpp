//
// Created by lucas on 3/3/2023.
//

#include "Engine.h"
#include "fuel_type.h"


void Engine::turn_on(){
    status = true;
    rpm = 1000;
}
void Engine::turn_off(){
    status = false;
    rpm = 0;
}
void Engine::increase_rpm_by(int increase_by){
    rpm += increase_by;
    if (rpm <= 300){
        this->turn_off();
    }else if(rpm > 7000){
        rpm = 7000;
    }
}

Engine::Engine(FuelTypeEnum _fuel_type, int _rpm, bool _status) {
    fuel_type = FuelType(_fuel_type);
    rpm = _rpm;
    status = _status;
}

FuelType Engine::get_fuel_type() {
    return fuel_type;
}

int Engine::get_rpm() {
    return rpm;
}
