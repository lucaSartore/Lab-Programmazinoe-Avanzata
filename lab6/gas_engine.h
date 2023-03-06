//
// Created by lucas on 06/03/2023.
//

#ifndef PA_LAB6_GAS_ENGINE_H
#define PA_LAB6_GAS_ENGINE_H

#include "engine.h"
#include <iostream>


class GasEngine: virtual public Engine{
protected:
    float fuel_tank_percent;
    virtual std::ostream& print_operator(std::ostream& os);
public:
    GasEngine();
    virtual ~GasEngine() = default;
    virtual void refuel();
    virtual void recharge();
};


#endif //PA_LAB6_GAS_ENGINE_H
