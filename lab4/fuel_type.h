//
// Created by lucas on 3/3/2023.
//

#ifndef LAB4_FUEL_TYPE_H
#define LAB4_FUEL_TYPE_H

#include <iostream>

typedef enum FuelTypeEnum {
    DISEL,
    GAS,
    PETROL,
    HYBRID,
    HYDROGEN,
}FuelTypeEnum;

class FuelType{
private:
    FuelTypeEnum type;
public:
    FuelType(const FuelType & ft){
        type = ft.type;
    }
    explicit FuelType(){
        type = FuelTypeEnum ::PETROL;
    }
    explicit FuelType(FuelTypeEnum fuel_type){
        type = fuel_type;
    }
    FuelTypeEnum get_fuel_type() const{
        return type;
    }
};

std::ostream & operator<<(std::ostream& os,const FuelType &ft);

#endif //LAB4_FUEL_TYPE_H
