//
// Created by lucas on 06/03/2023.
//

#include "hybrid_engine.h"

std::ostream &HybridEngine::print_operator(ostream &os) {
    if(is_turned_on){
        return os << "Hybrid Engine turned ON with tank at: " << fuel_tank_percent*100 << "% and battery at" << battery_percent*100 <<"%" << endl;
    }else{
        return os << "Hybrid Engine turned OFF with tank at: " << fuel_tank_percent*100 << "% and battery at" << battery_percent*100 <<"%" << endl;
    }
}

HybridEngine::HybridEngine(): GasEngine(), ElettricEngine(), Engine() {
}

void HybridEngine::refuel() {
    GasEngine::refuel();
}

void HybridEngine::recharge() {
    ElettricEngine::recharge();
}
