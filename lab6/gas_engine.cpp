//
// Created by lucas on 06/03/2023.
//
#include "gas_engine.h"
#include <iostream>
using namespace std;


GasEngine::GasEngine(): Engine() {
    fuel_tank_percent = 1;
}

std::ostream &GasEngine::print_operator(std::ostream &os) {
    if(is_turned_on){
        return os << "Gas Engine turned ON with tank at: " << fuel_tank_percent*100 << "%";
    }else{
        return os << "Gas Engine turned OFF with tank at: " << fuel_tank_percent*100 << "%";
    }
}

void GasEngine::refuel() {
    float to_refuel = 1-fuel_tank_percent;
    cout<< "Refueling for a  cost of: " << to_refuel*85 << " Euro" << endl;
    fuel_tank_percent = 1;
}

void GasEngine::recharge() {
    throw "Impossible to recharge a petrol car!";
}
