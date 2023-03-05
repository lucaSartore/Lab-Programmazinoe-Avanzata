//
// Created by lucas on 3/3/2023.
//

#include "fuel_type.h"

#include <iostream>


std::ostream & operator<<(std::ostream& os,const FuelType &ft){
    switch (ft.get_fuel_type()) {
        case FuelTypeEnum ::DISEL:
            return os << "Fuel: Disel";
            break;
        case FuelTypeEnum ::GAS:
            return os << "Fuel: Gas";
            break;
        case FuelTypeEnum ::PETROL:
            return os << "Fuel: Petrol";
            break;
        case FuelTypeEnum ::HYBRID:
            return os << "Fuel: Hybrid";
            break;
        case FuelTypeEnum ::HYDROGEN:
            return os << "Fuel: Hydrogen";
            break;
        default:
            return os << "Fuel: Unknown Fuel";
            break;
    }
}
