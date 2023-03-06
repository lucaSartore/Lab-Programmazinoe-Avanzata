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

class HybridEngine: virtual public GasEngine, virtual public ElettricEngine{

};


#endif //PA_LAB6_HYBRID_ENGINE_H
