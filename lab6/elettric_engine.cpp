//
// Created by lucas on 06/03/2023.
//
#include "elettric_engine.h"
#include <iostream>
using namespace std;


ElettricEngine::ElettricEngine(): Engine() {
    battery_percent = 1;
}

std::ostream &ElettricEngine::print_operator(std::ostream &os) {
    if(is_turned_on){
        return os << "Electric Engine turned ON with battery at: " << battery_percent*100 << "%";
    }else{
        return os << "Electric Engine turned OFF with battery at: " << battery_percent*100 << "%";
    }
}

void ElettricEngine::refuel() {
    throw "Impossible to refuel an electric car!";
}

void ElettricEngine::recharge() {
    float to_recharge = 1-battery_percent;
    cout<< "Refueling for a  cost of: " << to_recharge*25 << " Euro" << endl;
    battery_percent = 1;
}
