//
// Created by lucas on 06/03/2023.
//

#ifndef PA_LAB6_HYBRID_ENGINE_H
#define PA_LAB6_HYBRID_ENGINE_H

#include "engine.h"
#include "elettric_engine.h"
#include "gas_engine.h"
#include <iostream>
using namespace std;

class HybridEngine: public GasEngine, public ElettricEngine{
protected:
    std::ostream& print_operator(std::ostream& os) final;
public:
    HybridEngine();
    ~HybridEngine() override = default;
    void refuel() final;
    void recharge() final;
};


#endif //PA_LAB6_HYBRID_ENGINE_H
