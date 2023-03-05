//
// Created by lucas on 03/03/2023.
//

#include "Car.h"
#include "Engine.h"
#include "fuel_type.h"

Car::Car() {
    engine = Engine();
    velocity = 0;
    reserve_engine = nullptr;
}

Car::Car(Engine engine) {
    engine = engine;
    reserve_engine = nullptr;
    velocity = 0;
}

void Car::add_reserve_engine(Engine engine) {
    reserve_engine = new Engine(engine);
}

Car::~Car() {
    delete reserve_engine;
}

Car::Car(Car &car) {
    engine = car.engine;
    velocity = car.velocity;
    if (car.reserve_engine == nullptr){
        reserve_engine = nullptr;
    }else{
        reserve_engine = new Engine(*car.reserve_engine);
    }
}

void Car::give_gas() {
    engine.increase_rpm_by(100);
    velocity = engine.get_rpm()/300;
}

void  Car::brake() {
        engine.increase_rpm_by(-100);
        velocity = engine.get_rpm()/300;
}

std::ostream& operator<<(std::ostream &os, Car& car){
    return os << "Car with speed: " << car.velocity << "Km/h; And engine: " << car.engine;
}

void Car::turn_on() {
    engine.turn_on();
    velocity = engine.get_rpm()/300;
}
void Car::turn_off() {
    engine.turn_off();
    velocity = 0;
}