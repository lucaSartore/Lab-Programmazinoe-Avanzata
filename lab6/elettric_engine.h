//
// Created by lucas on 06/03/2023.
//

#ifndef PA_LAB6_ELETTRIC_ENGINE_H
#define PA_LAB6_ELETTRIC_ENGINE_H

#include "engine.h"
#include <iostream>
using namespace std;

class ElettricEngine: virtual public Engine{
    protected:
        float battery_percent;
        virtual std::ostream& print_operator(std::ostream& os);
    public:
        ElettricEngine();
        virtual ~ElettricEngine() = default;
        virtual void refuel();
        virtual void recharge();
};


#endif //PA_LAB6_ELETTRIC_ENGINE_H
