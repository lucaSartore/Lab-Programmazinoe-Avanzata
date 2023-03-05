//
// Created by lucas on 03/03/2023.
//

#ifndef LAB4_CAR_H
#define LAB4_CAR_H

#include "Engine.h"
#include "fuel_type.h"

class Car {
private:
    int velocity;
    Engine engine;
    Engine* reserve_engine;
public:
    Car(Car &car);
    Car();
    explicit Car(Engine engine);
    void add_reserve_engine(Engine engine);
    ~Car();

    void give_gas();
    void brake();

    void turn_on();
    void turn_off();

    friend std::ostream& operator<<(std::ostream &os, Car& car);
};

std::ostream& operator<<(std::ostream &os, Car& car);

#endif //LAB4_CAR_H
